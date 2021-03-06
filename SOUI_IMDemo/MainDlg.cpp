// MainDlg.cpp : implementation of the CMainDlg class
//
/////////////////////////////////////////////////////////////////////////////

#include "stdafx.h"
#include "MainDlg.h"	
#include "TreeViewAdapter.h"
	
CMainDlg::CMainDlg() : SHostWnd(_T("LAYOUT:XML_MAINWND"))
{
	m_bLayoutInited = FALSE;
}

CMainDlg::~CMainDlg()
{
}

int CMainDlg::OnCreate(LPCREATESTRUCT lpCreateStruct)
{
	SetMsgHandled(FALSE);
	return 0;
}

BOOL CMainDlg::OnInitDialog(HWND hWnd, LPARAM lParam)
{
	m_bLayoutInited = TRUE;
	//SShellNotifyIcon *notify = FindChildByID2<SShellNotifyIcon>(110);
	//notify->ShowNotify(L"Hello SOUI",L"这可能是一个提示");

	SImageButton* pBtnMessage = FindChildByName2<SImageButton>(L"btn_message");
	SImageButton* pBtnContact = FindChildByName2<SImageButton>(L"btn_contact");
	SImageButton* pBtnFavorites = FindChildByName2<SImageButton>(L"btn_favorites");
	SASSERT(pBtnMessage);
	SASSERT(pBtnContact);
	SASSERT(pBtnFavorites);

	pBtnMessage->SetCheck(TRUE);
	pBtnContact->SetCheck(FALSE);
	pBtnFavorites->SetCheck(FALSE);

	SListView* pLasttalkList = FindChildByName2<SListView>(L"lv_list_lasttalk");
	SASSERT(pLasttalkList);
	pLasttalkList->EnableScrollBar(SSB_HORZ, FALSE);

	m_pAdapterLasttalk = new CAdapter_MessageList(pLasttalkList, this);
	pLasttalkList->SetAdapter(m_pAdapterLasttalk);
	m_pAdapterLasttalk->Release();


	STabCtrl* pChatTab = FindChildByName2<STabCtrl>(L"chattab");
	SASSERT(pChatTab);
	//添加测试数据
	m_pAdapterLasttalk->AddItem(0, "1001");
	//添加聊天页面
	{
		SStringW sstrPage;
		sstrPage.Format(L"<page title='%s'><include src='layout:XML_PAGE_COMMON_FILEHELPER'/></page>", L"1001");
		pChatTab->InsertItem(sstrPage);
	}

	m_pAdapterLasttalk->AddItem(1, "2001");
	//添加聊天页面
	{
		SStringW sstrPage;
		sstrPage.Format(L"<page title='%s'><include src='layout:XML_PAGE_COMMON_PERSONAL'/></page>", L"2001");
		pChatTab->InsertItem(sstrPage);
	}

	m_pAdapterLasttalk->AddItem(2, "3001");
	//添加聊天页面
	{
		SStringW sstrPage;
		sstrPage.Format(L"<page title='%s'><include src='layout:XML_PAGE_COMMON_GROUP'/></page>", L"3001");
		pChatTab->InsertItem(sstrPage);
	}
	m_pAdapterLasttalk->AddItem(3, "4001");
	m_pAdapterLasttalk->AddItem(4, "5002");
	m_pAdapterLasttalk->AddItem(5, "6003");


	SStatic* pCurName = FindChildByName2<SStatic>(L"page_name");
	SASSERT(pCurName);
	pCurName->SetVisible(FALSE);

	SImageButton* pImgBtnMore = FindChildByName2<SImageButton>(L"btn_more");
	SASSERT(pImgBtnMore);
	pImgBtnMore->SetVisible(FALSE);


	STreeView * pTreeView = FindChildByName2<STreeView>("tv_Friend");
	if (pTreeView)
	{
		CFriendTreeViewAdapter * pTreeViewAdapter = new CFriendTreeViewAdapter();
		pTreeView->SetAdapter(pTreeViewAdapter);
		pTreeViewAdapter->Release();
	}
	return 0;
}
//TODO:消息映射
void CMainDlg::OnClose()
{
	CSimpleWnd::DestroyWindow();
}

void CMainDlg::OnMaximize()
{
	SendMessage(WM_SYSCOMMAND, SC_MAXIMIZE);
}
void CMainDlg::OnRestore()
{
	SendMessage(WM_SYSCOMMAND, SC_RESTORE);
}
void CMainDlg::OnMinimize()
{
	SendMessage(WM_SYSCOMMAND, SC_MINIMIZE);
}

void CMainDlg::OnSize(UINT nType, CSize size)
{
	SetMsgHandled(FALSE);
	if (!m_bLayoutInited) return;
	
	SWindow *pBtnMax = FindChildByName(L"btn_max");
	SWindow *pBtnRestore = FindChildByName(L"btn_restore");
	if(!pBtnMax || !pBtnRestore) return;
	
	if (nType == SIZE_MAXIMIZED)
	{
		pBtnRestore->SetVisible(TRUE);
		pBtnMax->SetVisible(FALSE);
	}
	else if (nType == SIZE_RESTORED)
	{
		pBtnRestore->SetVisible(FALSE);
		pBtnMax->SetVisible(TRUE);
	}
}


//演示如何响应菜单事件
void CMainDlg::OnCommand(UINT uNotifyCode, int nID, HWND wndCtl)
{
	if (uNotifyCode == 0)
	{
		switch (nID)
		{
		case 6:
			PostMessage(WM_CLOSE);
			break;
		default:
			break;
		}
	}
}


void CMainDlg::OnBnClickMessage()
{
	SImageButton* pBtnMessage = FindChildByName2<SImageButton>(L"btn_message");
	SImageButton* pBtnContact = FindChildByName2<SImageButton>(L"btn_contact");
	SImageButton* pBtnFavorites = FindChildByName2<SImageButton>(L"btn_favorites");
	SASSERT(pBtnMessage);
	SASSERT(pBtnContact);
	SASSERT(pBtnFavorites);

	pBtnMessage->SetCheck(TRUE);
	pBtnContact->SetCheck(FALSE);
	pBtnFavorites->SetCheck(FALSE);

	STabCtrl* pLeftListTab = FindChildByName2<STabCtrl>(L"leftlist_tabctrl");
	SASSERT(pLeftListTab);
	pLeftListTab->SetCurSel(L"lasttalk_page", TRUE);

	if ("" != m_LasttalkCurSel.m_strID)
	{
		SStatic* pCurName = FindChildByName2<SStatic>(L"page_name");
		SASSERT(pCurName);
		pCurName->SetVisible(TRUE);
		pCurName->Invalidate();
	}

	if (3 == m_LasttalkCurSel.m_nType ||
		4 == m_LasttalkCurSel.m_nType ||
		5 == m_LasttalkCurSel.m_nType)
	{

		SImageButton* pImgBtnMore = FindChildByName2<SImageButton>(L"btn_more");
		SASSERT(pImgBtnMore);
		pImgBtnMore->SetVisible(FALSE);
		pImgBtnMore->Invalidate();
	}
}

void CMainDlg::OnBnClickContact()
{
	SImageButton* pBtnMessage = FindChildByName2<SImageButton>(L"btn_message");
	SImageButton* pBtnContact = FindChildByName2<SImageButton>(L"btn_contact");
	SImageButton* pBtnFavorites = FindChildByName2<SImageButton>(L"btn_favorites");
	SASSERT(pBtnMessage);
	SASSERT(pBtnContact);
	SASSERT(pBtnFavorites);

	pBtnMessage->SetCheck(FALSE);
	pBtnContact->SetCheck(TRUE);
	pBtnFavorites->SetCheck(FALSE);

	STabCtrl* pLeftListTab = FindChildByName2<STabCtrl>(L"leftlist_tabctrl");
	SASSERT(pLeftListTab);
	pLeftListTab->SetCurSel(L"contact_page", TRUE);

	STabCtrl* pChatTab = FindChildByName2<STabCtrl>(L"chattab");
	SASSERT(pChatTab);
	pChatTab->SetCurSel(0);

	SStatic* pCurName = FindChildByName2<SStatic>(L"page_name");
	SASSERT(pCurName);
	pCurName->SetVisible(FALSE);
	pCurName->Invalidate();

	SImageButton* pImgBtnMore = FindChildByName2<SImageButton>(L"btn_more");
	SASSERT(pImgBtnMore);
	pImgBtnMore->SetVisible(FALSE);
	pImgBtnMore->Invalidate();
}

void CMainDlg::OnBnClickFavorites()
{
	SImageButton* pBtnMessage = FindChildByName2<SImageButton>(L"btn_message");
	SImageButton* pBtnContact = FindChildByName2<SImageButton>(L"btn_contact");
	SImageButton* pBtnFavorites = FindChildByName2<SImageButton>(L"btn_favorites");
	SASSERT(pBtnMessage);
	SASSERT(pBtnContact);
	SASSERT(pBtnFavorites);

	pBtnMessage->SetCheck(FALSE);
	pBtnContact->SetCheck(FALSE);
	pBtnFavorites->SetCheck(TRUE);

	STabCtrl* pLeftListTab = FindChildByName2<STabCtrl>(L"leftlist_tabctrl");
	SASSERT(pLeftListTab);
	pLeftListTab->SetCurSel(L"favorites_page", TRUE);

	STabCtrl* pChatTab = FindChildByName2<STabCtrl>(L"chattab");
	SASSERT(pChatTab);
	pChatTab->SetCurSel(0);

	SStatic* pCurName = FindChildByName2<SStatic>(L"page_name");
	SASSERT(pCurName);
	pCurName->SetVisible(FALSE);
	pCurName->Invalidate();

	SImageButton* pImgBtnMore = FindChildByName2<SImageButton>(L"btn_more");
	SASSERT(pImgBtnMore);
	pImgBtnMore->SetVisible(FALSE);
	pImgBtnMore->Invalidate();
}

void CMainDlg::OnBnClickMenu()
{
	//TODO:
}

void CMainDlg::OnLasttalkListItemClick(int nType, const std::string& strID)
{
	STabCtrl* pChatTab = FindChildByName2<STabCtrl>(L"chattab");
	SASSERT(pChatTab);
	pChatTab->SetCurSel(L"2001", TRUE);

	SStatic* pCurName = FindChildByName2<SStatic>(L"page_name");
	SASSERT(pCurName);
	pCurName->SetVisible(TRUE);
	pCurName->Invalidate();

	SImageButton* pImgBtnMore = FindChildByName2<SImageButton>(L"btn_more");
	SASSERT(pImgBtnMore);
	pImgBtnMore->SetVisible(TRUE);
	pImgBtnMore->Invalidate();

	m_LasttalkCurSel.m_nType = nType;
	m_LasttalkCurSel.m_strID = strID;

	if (3 == m_LasttalkCurSel.m_nType ||
		4 == m_LasttalkCurSel.m_nType ||
		5 == m_LasttalkCurSel.m_nType)
	{

		SImageButton* pImgBtnMore = FindChildByName2<SImageButton>(L"btn_more");
		SASSERT(pImgBtnMore);
		pImgBtnMore->SetVisible(FALSE);
		pImgBtnMore->Invalidate();
	}
}

void CMainDlg::OnLasttalkListItemRClick(int nType, const std::string& strID)
{
	//Show R_Menu
}