
// DesignPattern.h : PROJECT_NAME ���ε{�����D�n���Y��
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�� PCH �]�t���ɮ׫e���]�t 'stdafx.h'"
#endif

#include "resource.h"		// �D�n�Ÿ�


// CDesignPatternApp: 
// �аѾ\��@�����O�� DesignPattern.cpp
//

class CDesignPatternApp : public CWinApp
{
public:
	CDesignPatternApp();

// �мg
public:
	virtual BOOL InitInstance();

// �{���X��@

	DECLARE_MESSAGE_MAP()
};

extern CDesignPatternApp theApp;