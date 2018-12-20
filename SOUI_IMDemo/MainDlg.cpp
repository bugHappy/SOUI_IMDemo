// MainDlg.cpp : implementation of the CMainDlg class
//
/////////////////////////////////////////////////////////////////////////////

#include "stdafx.h"
#include "MainDlg.h"	
	
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


	SListView* pListNewFriend = FindChildByName2<SListView>(L"lv_newfriend");
	SASSERT(pListNewFriend);
	m_pAdapterNewFriends = new CAdapter_Common(pListNewFriend);
	pListNewFriend->SetAdapter(m_pAdapterNewFriends);
	m_pAdapterNewFriends->Release();

	SListView* pListGZH = FindChildByName2<SListView>(L"lv_gzh");
	SASSERT(pListGZH);
	m_pAdapterGZH = new CAdapter_Common(pListGZH);
	pListGZH->SetAdapter(m_pAdapterGZH);
	m_pAdapterGZH->Release();

	SListView* pListCompany = FindChildByName2<SListView>(L"lv_company");
	SASSERT(pListCompany);
	m_pAdapterCompany = new CAdapter_Common(pListCompany);
	pListCompany->SetAdapter(m_pAdapterCompany);
	m_pAdapterCompany->Release();

	SListView* pListGroup = FindChildByName2<SListView>(L"lv_group");
	SASSERT(pListGroup);
	m_pAdapterGroup = new CAdapter_Common(pListGroup);
	pListGroup->SetAdapter(m_pAdapterGroup);
	m_pAdapterGroup->Release();

	SListView* pListPersonalA = FindChildByName2<SListView>(L"lv_personal_a");
	SASSERT(pListPersonalA);
	m_pAdapterPersonalA = new CAdapter_Common(pListPersonalA);
	pListPersonalA->SetAdapter(m_pAdapterPersonalA);
	m_pAdapterPersonalA->Release();

	SListView* pListPersonalB = FindChildByName2<SListView>(L"lv_personal_b");
	SASSERT(pListPersonalB);
	m_pAdapterPersonalB = new CAdapter_Common(pListPersonalB);
	pListPersonalB->SetAdapter(m_pAdapterPersonalB);
	m_pAdapterPersonalB->Release();

	SListView* pListPersonalC = FindChildByName2<SListView>(L"lv_personal_c");
	SASSERT(pListPersonalC);
	m_pAdapterPersonalC = new CAdapter_Common(pListPersonalC);
	pListPersonalC->SetAdapter(m_pAdapterPersonalC);
	m_pAdapterPersonalC->Release();

	SListView* pListPersonalD = FindChildByName2<SListView>(L"lv_personal_d");
	SASSERT(pListPersonalD);
	m_pAdapterPersonalD = new CAdapter_Common(pListPersonalD);
	pListPersonalD->SetAdapter(m_pAdapterPersonalD);
	m_pAdapterPersonalD->Release();

	SListView* pListPersonalE = FindChildByName2<SListView>(L"lv_personal_e");
	SASSERT(pListPersonalE);
	m_pAdapterPersonalE = new CAdapter_Common(pListPersonalE);
	pListPersonalE->SetAdapter(m_pAdapterPersonalE);
	m_pAdapterPersonalE->Release();

	SListView* pListPersonalF = FindChildByName2<SListView>(L"lv_personal_f");
	SASSERT(pListPersonalF);
	m_pAdapterPersonalF = new CAdapter_Common(pListPersonalF);
	pListPersonalF->SetAdapter(m_pAdapterPersonalF);
	m_pAdapterPersonalF->Release();

	SListView* pListPersonalG = FindChildByName2<SListView>(L"lv_personal_g");
	SASSERT(pListPersonalG);
	m_pAdapterPersonalG = new CAdapter_Common(pListPersonalG);
	pListPersonalG->SetAdapter(m_pAdapterPersonalG);
	m_pAdapterPersonalG->Release();

	SListView* pListPersonalH = FindChildByName2<SListView>(L"lv_personal_h");
	SASSERT(pListPersonalH);
	m_pAdapterPersonalH = new CAdapter_Common(pListPersonalH);
	pListPersonalH->SetAdapter(m_pAdapterPersonalH);
	m_pAdapterPersonalH->Release();

	SListView* pListPersonalI = FindChildByName2<SListView>(L"lv_personal_i");
	SASSERT(pListPersonalI);
	m_pAdapterPersonalI = new CAdapter_Common(pListPersonalI);
	pListPersonalI->SetAdapter(m_pAdapterPersonalI);
	m_pAdapterPersonalI->Release();

	SListView* pListPersonalJ = FindChildByName2<SListView>(L"lv_personal_j");
	SASSERT(pListPersonalJ);
	m_pAdapterPersonalJ = new CAdapter_Common(pListPersonalJ);
	pListPersonalJ->SetAdapter(m_pAdapterPersonalJ);
	m_pAdapterPersonalJ->Release();

	SListView* pListPersonalK = FindChildByName2<SListView>(L"lv_personal_k");
	SASSERT(pListPersonalK);
	m_pAdapterPersonalK = new CAdapter_Common(pListPersonalK);
	pListPersonalK->SetAdapter(m_pAdapterPersonalK);
	m_pAdapterPersonalK->Release();

	SListView* pListPersonalL = FindChildByName2<SListView>(L"lv_personal_l");
	SASSERT(pListPersonalL);
	m_pAdapterPersonalL = new CAdapter_Common(pListPersonalL);
	pListPersonalL->SetAdapter(m_pAdapterPersonalL);
	m_pAdapterPersonalL->Release();

	SListView* pListPersonalM = FindChildByName2<SListView>(L"lv_personal_m");
	SASSERT(pListPersonalM);
	m_pAdapterPersonalM = new CAdapter_Common(pListPersonalM);
	pListPersonalM->SetAdapter(m_pAdapterPersonalM);
	m_pAdapterPersonalM->Release();

	SListView* pListPersonalN = FindChildByName2<SListView>(L"lv_personal_n");
	SASSERT(pListPersonalN);
	m_pAdapterPersonalN = new CAdapter_Common(pListPersonalN);
	pListPersonalN->SetAdapter(m_pAdapterPersonalN);
	m_pAdapterPersonalN->Release();

	SListView* pListPersonalO = FindChildByName2<SListView>(L"lv_personal_o");
	SASSERT(pListPersonalO);
	m_pAdapterPersonalO = new CAdapter_Common(pListPersonalO);
	pListPersonalO->SetAdapter(m_pAdapterPersonalO);
	m_pAdapterPersonalO->Release();

	SListView* pListPersonalP = FindChildByName2<SListView>(L"lv_personal_p");
	SASSERT(pListPersonalP);
	m_pAdapterPersonalP = new CAdapter_Common(pListPersonalP);
	pListPersonalP->SetAdapter(m_pAdapterPersonalP);
	m_pAdapterPersonalP->Release();

	SListView* pListPersonalQ = FindChildByName2<SListView>(L"lv_personal_q");
	SASSERT(pListPersonalQ);
	m_pAdapterPersonalQ = new CAdapter_Common(pListPersonalQ);
	pListPersonalQ->SetAdapter(m_pAdapterPersonalQ);
	m_pAdapterPersonalQ->Release();

	SListView* pListPersonalR = FindChildByName2<SListView>(L"lv_personal_r");
	SASSERT(pListPersonalR);
	m_pAdapterPersonalR = new CAdapter_Common(pListPersonalR);
	pListPersonalR->SetAdapter(m_pAdapterPersonalR);
	m_pAdapterPersonalR->Release();

	SListView* pListPersonalS = FindChildByName2<SListView>(L"lv_personal_s");
	SASSERT(pListPersonalS);
	m_pAdapterPersonalS = new CAdapter_Common(pListPersonalS);
	pListPersonalS->SetAdapter(m_pAdapterPersonalS);
	m_pAdapterPersonalS->Release();

	SListView* pListPersonalT = FindChildByName2<SListView>(L"lv_personal_t");
	SASSERT(pListPersonalT);
	m_pAdapterPersonalT = new CAdapter_Common(pListPersonalT);
	pListPersonalT->SetAdapter(m_pAdapterPersonalT);
	m_pAdapterPersonalT->Release();

	SListView* pListPersonalU = FindChildByName2<SListView>(L"lv_personal_u");
	SASSERT(pListPersonalU);
	m_pAdapterPersonalU = new CAdapter_Common(pListPersonalU);
	pListPersonalU->SetAdapter(m_pAdapterPersonalU);
	m_pAdapterPersonalU->Release();

	SListView* pListPersonalV = FindChildByName2<SListView>(L"lv_personal_v");
	SASSERT(pListPersonalV);
	m_pAdapterPersonalV = new CAdapter_Common(pListPersonalV);
	pListPersonalV->SetAdapter(m_pAdapterPersonalV);
	m_pAdapterPersonalV->Release();

	SListView* pListPersonalW = FindChildByName2<SListView>(L"lv_personal_w");
	SASSERT(pListPersonalW);
	m_pAdapterPersonalW = new CAdapter_Common(pListPersonalW);
	pListPersonalW->SetAdapter(m_pAdapterPersonalW);
	m_pAdapterPersonalW->Release();

	SListView* pListPersonalX = FindChildByName2<SListView>(L"lv_personal_x");
	SASSERT(pListPersonalX);
	m_pAdapterPersonalX = new CAdapter_Common(pListPersonalX);
	pListPersonalX->SetAdapter(m_pAdapterPersonalX);
	m_pAdapterPersonalX->Release();

	SListView* pListPersonalY = FindChildByName2<SListView>(L"lv_personal_y");
	SASSERT(pListPersonalY);
	m_pAdapterPersonalY = new CAdapter_Common(pListPersonalY);
	pListPersonalY->SetAdapter(m_pAdapterPersonalY);
	m_pAdapterPersonalY->Release();

	SListView* pListPersonalZ = FindChildByName2<SListView>(L"lv_personal_z");
	SASSERT(pListPersonalZ);
	m_pAdapterPersonalZ = new CAdapter_Common(pListPersonalZ);
	pListPersonalZ->SetAdapter(m_pAdapterPersonalZ);
	m_pAdapterPersonalZ->Release();

	SListView* pListPersonalABC = FindChildByName2<SListView>(L"lv_personal_#");
	SASSERT(pListPersonalABC);
	m_pAdapterPersonalABC = new CAdapter_Common(pListPersonalABC);
	pListPersonalABC->SetAdapter(m_pAdapterPersonalABC);
	m_pAdapterPersonalABC->Release();


	STabCtrl* pLeftTab = FindChildByName2<STabCtrl>(L"leftlist_tabctrl");
	SASSERT(pLeftTab);
	SWindow* pContactPage = pLeftTab->GetPage(L"contact_page", TRUE);
	SASSERT(pContactPage);

	SWindow* pWndNewFriend = pContactPage->FindChildByName2<SWindow>(L"wnd_newfriend");
	SASSERT(pWndNewFriend);
	SStatic* pNewFriendTitle = pWndNewFriend->FindChildByName2<SStatic>(L"title_newfriend");
	SASSERT(pNewFriendTitle);
	SStringW sstrNewFriendWndPos, sstrNewFriendTitlePos, sstrNewFriendLvPos;
	sstrNewFriendWndPos.Format(L"%d,%d,@%d,@%d", 0,0,310,91);
	sstrNewFriendTitlePos.Format(L"%d,%d,@%d,@%d", 0,0,310,30);
	sstrNewFriendLvPos.Format(L"%d,%d,@%d,@%d", 0,0,310,90);

	pWndNewFriend->SetAttribute(L"pos", sstrNewFriendWndPos, TRUE);
	pNewFriendTitle->SetAttribute(L"pos", sstrNewFriendTitlePos, TRUE);
	pNewFriendTitle->SetAttribute(L"show", L"1", TRUE);
	pListNewFriend->SetAttribute(L"pos", sstrNewFriendLvPos, TRUE);

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