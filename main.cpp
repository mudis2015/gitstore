#include "aesserverwindow.h"
#include "AEServDll.h"
#include <QApplication>
#include <QDesktopWidget>
#include <QTextCodec>
#include <QMessageBox>
#include <QTimerEvent>  
#include <vector>

using namespace std;
using namespace MuDIS;

char* g_strCopy = 0;

int idTIMER_2000 = 0;
ikdikslk:w
nt idTIMER_60000 = 0;
int idTIMER_18M = 0;
int idTIMER_20M = 0;
// #define TIMER_TIMEOUT   (5*1000)  


void* hMutex = 0;

unsigned int WM_TASKBARCREATED = 0;





MyTimer::MyTimer(AESServerWindow *parent)
	:AESServerWindow(parent)
{
	_p = parent;
}

MyTimer::~MyTimer()
{
	for (vector<int>::iterator vi = vecID.begin();
	vi != vecID.end();
		++vi)
	{
		killTimer(*vi);

	}
	vecID.clear();
}

void MyTimer::timerEvent(QTimerEvent *event)
{
	int id = event->timerId();
	if (id == idTIMER_18M)
	{
		if (0 == (CheckLisence("\\agentserv.lic", false, 0) &ver_all))
		{
			killTimer(idTIMER_18M);
			killTimer(idTIMER_20M);
			//	ptr->bQuitTimer = false;


			AEServFinit();
			qDebug("idTIMER_18M");
			/*PostMessage(ptr->Handle(), WM_CLOSE, 0,0);*/
			QMessageBox::about(NULL, u8"提示", u8"未授权，请退出后重新运行，系统将自行恢复");
		}
	}
	if (id == idTIMER_20M)
	{

		killTimer(idTIMER_18M);
		killTimer(idTIMER_20M);

		//	ptr->bQuitTimer = false;

			// 		if (ptr->pAES)
			// 		{
			// 			delete ptr->pAES;
			// 			ptr->pAES = 0;
			// 		}
		AEServFinit();
		qDebug("idTIMER_20M");
		/*PostMessage(ptr->Handle(), WM_CLOSE, 0,0);*/
		QMessageBox::about(NULL, u8"提示", u8"未授权，请退出后重新运行，系统将自行恢复");
	}
	if (id == idTIMER_2000)
	{
		if (_p)
		{
			_p->OnTimer();
		}
	}





}


int MyTimer::settimer(const int interval)
{
	int tmpid = this->startTimer(interval);
	vecID.push_back(tmpid);
	return tmpid;
}

int main(int argc, char *argv[])
{



	QApplication a(argc, argv);

	AESServerWindow w;

#if MUDIS_VERSION>=2
	if (strcmp(argv[1], "KeepAlive") != 0)
	{
		QMessageBox::about(&w, QString("warning"), QString(u8"不要直接运行本程序，请执行MuDIS.exe"));
		return -1;
	}
#endif
	hMutex = OpenMutex(
		MUTEX_ALL_ACCESS,      // request full access
		FALSE,                 // handle not inheritable
		"AES_SERV_instance");  // object name
	if (hMutex)
	{
		return -1;
	}
	else
	{
		hMutex = CreateMutex(
			NULL,                  // default security descriptor
			FALSE,                 // mutex not owned
			"AES_SERV_instance");  // object name

	}
	AEServInit();

	w.show();
	w.PostCreated();
	int x, y;
	x = QApplication::desktop()->width();
	x = (x - w.width()) / 2;
	y = (QApplication::desktop()->height() - w.height()) / 2 - 20;
	w.move(x, y);

	MyTimer mT(&w);
	idTIMER_18M = mT.settimer(TIMER_18M);
	idTIMER_2000 = mT.settimer(TIMER_2000);
	idTIMER_20M = mT.settimer(TIMER_20M);
	idTIMER_60000 = mT.settimer(TIMER_60000);

	char outputmsg[256] = "";
	unsigned long lic = CheckLisence("\\agentserv.lic", true, outputmsg);// serv key

	char mid[520];

	string_To_UTF8(outputmsg, mid);

	w.AddMsgString( QString(mid), true);

	w.fnBeginServ(g_nServPort);

	int res = a.exec();

	if (hMutex)
	{
		CloseHandle(hMutex);
		hMutex = 0;
	}

	return  res;
}
