// MainDlg.h : interface of the CMainDlg class
//
/////////////////////////////////////////////////////////////////////////////
#pragma once

#include "Adapter_MessageList.h"
#include "Adapters_ContactList.h"

#include "IAdapterCallback.h"

class CMainDlg : public SHostWnd
	, public IAdapterLasttalk_Callback
{
public:
	CMainDlg();
	~CMainDlg();

	void OnClose();
	void OnMaximize();
	void OnRestore();
	void OnMinimize();
	void OnSize(UINT nType, CSize size);
	//托盘通知消息处理函数
	//LRESULT OnIconNotify(UINT uMsg, WPARAM wParam, LPARAM lParam, BOOL/* bHandled*/);
	//演示如何响应菜单事件
	void OnCommand(UINT uNotifyCode, int nID, HWND wndCtl);
	int OnCreate(LPCREATESTRUCT lpCreateStruct);
	BOOL OnInitDialog(HWND wndFocus, LPARAM lInitParam);

public:
	virtual void OnLasttalkListItemClick(int nType, const std::string& strID);
	virtual void OnLasttalkListItemRClick(int nType, const std::string& strID);
protected:
	void OnBnClickMessage();
	void OnBnClickContact();
	void OnBnClickFavorites();
	void OnBnClickMenu();
protected:
	//soui消息
	EVENT_MAP_BEGIN()
		EVENT_NAME_COMMAND(L"btn_close", OnClose)
		EVENT_NAME_COMMAND(L"btn_min", OnMinimize)
		EVENT_NAME_COMMAND(L"btn_max", OnMaximize)
		EVENT_NAME_COMMAND(L"btn_restore", OnRestore)

		EVENT_NAME_COMMAND(L"btn_message", OnBnClickMessage)
		EVENT_NAME_COMMAND(L"btn_contact", OnBnClickContact)
		EVENT_NAME_COMMAND(L"btn_favorites", OnBnClickFavorites)
		EVENT_NAME_COMMAND(L"btn_menu", OnBnClickMenu)
	EVENT_MAP_END()
		
	//HostWnd真实窗口消息处理
	BEGIN_MSG_MAP_EX(CMainDlg)
		MSG_WM_CREATE(OnCreate)
		MSG_WM_INITDIALOG(OnInitDialog)
		MSG_WM_CLOSE(OnClose)
		MSG_WM_SIZE(OnSize)
	//托盘消息处理
		//MESSAGE_HANDLER(WM_ICONNOTIFY, OnIconNotify)
		MSG_WM_COMMAND(OnCommand)
		CHAIN_MSG_MAP(SHostWnd)
		REFLECT_NOTIFICATIONS_EX()
	END_MSG_MAP()
private:
	BOOL			m_bLayoutInited;	

	CAdapter_MessageList* m_pAdapterLasttalk;

	LASTTALK_CURSEL	m_LasttalkCurSel;

	CAdapter_Common*	m_pAdapterNewFriends;
	CAdapter_Common*	m_pAdapterGZH;
	CAdapter_Common*	m_pAdapterCompany;
	CAdapter_Common*	m_pAdapterGroup;
	CAdapter_Common*	m_pAdapterPersonalA;
	CAdapter_Common*	m_pAdapterPersonalB;
	CAdapter_Common*	m_pAdapterPersonalC;
	CAdapter_Common*	m_pAdapterPersonalD;
	CAdapter_Common*	m_pAdapterPersonalE;
	CAdapter_Common*	m_pAdapterPersonalF;
	CAdapter_Common*	m_pAdapterPersonalG;
	CAdapter_Common*	m_pAdapterPersonalH;
	CAdapter_Common*	m_pAdapterPersonalI;
	CAdapter_Common*	m_pAdapterPersonalJ;
	CAdapter_Common*	m_pAdapterPersonalK;
	CAdapter_Common*	m_pAdapterPersonalL;
	CAdapter_Common*	m_pAdapterPersonalM;
	CAdapter_Common*	m_pAdapterPersonalN;
	CAdapter_Common*	m_pAdapterPersonalO;
	CAdapter_Common*	m_pAdapterPersonalP;
	CAdapter_Common*	m_pAdapterPersonalQ;
	CAdapter_Common*	m_pAdapterPersonalR;
	CAdapter_Common*	m_pAdapterPersonalS;
	CAdapter_Common*	m_pAdapterPersonalT;
	CAdapter_Common*	m_pAdapterPersonalU;
	CAdapter_Common*	m_pAdapterPersonalV;
	CAdapter_Common*	m_pAdapterPersonalW;
	CAdapter_Common*	m_pAdapterPersonalX;
	CAdapter_Common*	m_pAdapterPersonalY;
	CAdapter_Common*	m_pAdapterPersonalZ;
	CAdapter_Common*	m_pAdapterPersonalABC;
};
