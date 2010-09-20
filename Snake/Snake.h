// Snake.h : main header file for the Snake application
//
#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"       // main symbols


// CSnakeApp:
// See Snake.cpp for the implementation of this class
//

class CSnakeApp : public CWinApp
{
public:
	CSnakeApp();


// Overrides
public:
	virtual BOOL InitInstance();

// Implementation
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CSnakeApp theApp;