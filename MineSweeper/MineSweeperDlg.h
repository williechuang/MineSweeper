
// MineSweeperDlg.h : ���Y��
//

#pragma once
#include "BasicComponent.h"

// CMineSweeperDlg ��ܤ��
class CMineSweeperDlg : public CDialogEx
{
// �غc
public:
	CMineSweeperDlg(CWnd* pParent = NULL);	// �зǫغc�禡

// ��ܤ�����
	enum { IDD = IDD_MINESWEEPER_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV �䴩


// �{���X��@
protected:
	HICON m_hIcon;

	// ���ͪ��T�������禡
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()

// Implement
public:
	bool MainFrame(){return false;}
	bool LaunchSource(){return false;}
	bool DrawLayer(){return false;}
	bool RandomMine(){return false;}
	bool EvaluateNumofRoundMine(){return false;}

};
