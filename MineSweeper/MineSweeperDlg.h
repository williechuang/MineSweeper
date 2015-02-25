
// MineSweeperDlg.h : 標頭檔
//

#pragma once
#include "BasicComponent.h"

// CMineSweeperDlg 對話方塊
class CMineSweeperDlg : public CDialogEx
{
// 建構
public:
	CMineSweeperDlg(CWnd* pParent = NULL);	// 標準建構函式

// 對話方塊資料
	enum { IDD = IDD_MINESWEEPER_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支援


// 程式碼實作
protected:
	HICON m_hIcon;

	// 產生的訊息對應函式
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
