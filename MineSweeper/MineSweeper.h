
// MineSweeper.h : PROJECT_NAME ���ε{�����D�n���Y��
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�� PCH �]�t���ɮ׫e���]�t 'stdafx.h'"
#endif

#include "resource.h"		// �D�n�Ÿ�


// CMineSweeperApp:
// �аѾ\��@�����O�� MineSweeper.cpp
//

class CMineSweeperApp : public CWinApp
{
public:
	CMineSweeperApp();

// �мg
public:
	virtual BOOL InitInstance();

// �{���X��@

	DECLARE_MESSAGE_MAP()
};

extern CMineSweeperApp theApp;