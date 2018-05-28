#pragma once
#include <QSettings>
const int cMAX_PATH = 360;
class  CBaseINI 
{
private:
	char m_IniFile[cMAX_PATH];
	char m_Section[cMAX_PATH];
	char m_Key[cMAX_PATH];
	QSettings* pIni;//
	ddd
public:
	CBaseINI(void);
	CBaseINI(const char* lpFileName, const char* lpSection, const char* lpKey);
	~CBaseINI(void);
public:
	virtual void SetIniFile(const char* lpFileName);
	virtual void SetSection(const char* lpSection);
	virtual void SetKey(const char* lpKey);


	virtual int DeleteKey(const char* lpKey);
	virtual int DeleteSection(const char* lpSection);

	virtual int GetBuff( void* pBuff, int nBufLen);
	virtual int GetInt(int nDefault=0);
	virtual unsigned int GetString(char* lpReturnString, unsigned int dwReturnStringLen, const char* lpDefault="");

	virtual int WriteString(const char* lpString);
	virtual int WriteBuff( void* pBuff, int nBufLen);


};
