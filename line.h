// line.h : PROJECT_NAME 应用程序的主头文件
//

#pra

#ifndef __AFXWIN_H__
	#error "在包含此文件之前包含“stdafx.h”以生成 PCH 文件"
#endif

#include "resource.h"		// 主符号


// ClineApp:
// 有关此类的实现，请参阅 line.cpp
//

class ClineApp : public CWinApp
{
public:
	ClineApp();

// 重写
	public:
	virtual BOOL InitInstance();

// 实现

	DECLARE_MESSAGE_MAP()
};

extern ClineApp theApp;