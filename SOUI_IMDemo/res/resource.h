//stamp:1422710340ddcead
/*<------------------------------------------------------------------------------------------------->*/
/*该文件由uiresbuilder生成，请不要手动修改*/
/*<------------------------------------------------------------------------------------------------->*/
#pragma once
#include <res.mgr/snamedvalue.h>
#define ROBJ_IN_CPP \
namespace SOUI \
{\
    const _R R;\
    const _UIRES UIRES;\
}
namespace SOUI
{
	class _UIRES{
		public:
		class _UIDEF{
			public:
			_UIDEF(){
				XML_INIT = _T("UIDEF:XML_INIT");
			}
			const TCHAR * XML_INIT;
		}UIDEF;
		class _LAYOUT{
			public:
			_LAYOUT(){
				XML_MAINWND = _T("LAYOUT:XML_MAINWND");
				XML_PAGE_LASTTALK = _T("LAYOUT:XML_PAGE_LASTTALK");
				XML_PAGE_CONTACT = _T("LAYOUT:XML_PAGE_CONTACT");
				XML_PAGE_FAVORITES = _T("LAYOUT:XML_PAGE_FAVORITES");
				XML_PAGE_COMMON_PERSONAL = _T("LAYOUT:XML_PAGE_COMMON_PERSONAL");
				XML_PAGE_COMMON_GROUP = _T("LAYOUT:XML_PAGE_COMMON_GROUP");
				XML_PAGE_COMMON_FILEHELPER = _T("LAYOUT:XML_PAGE_COMMON_FILEHELPER");
			}
			const TCHAR * XML_MAINWND;
			const TCHAR * XML_PAGE_LASTTALK;
			const TCHAR * XML_PAGE_CONTACT;
			const TCHAR * XML_PAGE_FAVORITES;
			const TCHAR * XML_PAGE_COMMON_PERSONAL;
			const TCHAR * XML_PAGE_COMMON_GROUP;
			const TCHAR * XML_PAGE_COMMON_FILEHELPER;
		}LAYOUT;
		class _values{
			public:
			_values(){
				string = _T("values:string");
				color = _T("values:color");
				skin = _T("values:skin");
			}
			const TCHAR * string;
			const TCHAR * color;
			const TCHAR * skin;
		}values;
		class _IMG{
			public:
			_IMG(){
				traymenu_icons = _T("IMG:traymenu_icons");
			}
			const TCHAR * traymenu_icons;
		}IMG;
		class _PNG{
			public:
			_PNG(){
				IDB_PNG_DEFAULTLOGO_48P = _T("PNG:IDB_PNG_DEFAULTLOGO_48P");
				IDB_PNG_DEFAULTLOGO_32P = _T("PNG:IDB_PNG_DEFAULTLOGO_32P");
				IDB_PNG_SB = _T("PNG:IDB_PNG_SB");
				IDB_PNG_VSCROLL = _T("PNG:IDB_PNG_VSCROLL");
				IDB_PNG_SHADOW = _T("PNG:IDB_PNG_SHADOW");
				IDB_PNG_GREENSHADOW = _T("PNG:IDB_PNG_GREENSHADOW");
				IDB_PNG_DEFAULTBKGND = _T("PNG:IDB_PNG_DEFAULTBKGND");
				IDB_PNG_COMMON_CLOSE = _T("PNG:IDB_PNG_COMMON_CLOSE");
				IDB_PNG_COMMON_MIN = _T("PNG:IDB_PNG_COMMON_MIN");
				IDB_PNG_COMMON_MAX = _T("PNG:IDB_PNG_COMMON_MAX");
				IDB_PNG_COMMON_RESTORE = _T("PNG:IDB_PNG_COMMON_RESTORE");
				IDB_PNG_MESSAGE = _T("PNG:IDB_PNG_MESSAGE");
				IDB_PNG_CONTACT = _T("PNG:IDB_PNG_CONTACT");
				IDB_PNG_FAVORITES = _T("PNG:IDB_PNG_FAVORITES");
				IDB_PNG_MENU = _T("PNG:IDB_PNG_MENU");
				IDB_PNG_MORE = _T("PNG:IDB_PNG_MORE");
				IDB_PNG_ADD = _T("PNG:IDB_PNG_ADD");
				IDB_PNG_SEARCH = _T("PNG:IDB_PNG_SEARCH");
				IDB_PNG_PERSONAL = _T("PNG:IDB_PNG_PERSONAL");
				IDB_PNG_GROUP = _T("PNG:IDB_PNG_GROUP");
				IDB_PNG_FILEHELPER = _T("PNG:IDB_PNG_FILEHELPER");
				IDB_PNG_GZH = _T("PNG:IDB_PNG_GZH");
				IDB_PNG_DYH = _T("PNG:IDB_PNG_DYH");
				IDB_PNG_NEWS = _T("PNG:IDB_PNG_NEWS");
				IDB_PNG_EMOTION = _T("PNG:IDB_PNG_EMOTION");
				IDB_PNG_IMAGE = _T("PNG:IDB_PNG_IMAGE");
				IDB_PNG_FILE = _T("PNG:IDB_PNG_FILE");
				IDB_PNG_SNAPSHOT = _T("PNG:IDB_PNG_SNAPSHOT");
				IDB_PNG_SNAPSHOT_ARROW = _T("PNG:IDB_PNG_SNAPSHOT_ARROW");
				IDB_PNG_HISTORY = _T("PNG:IDB_PNG_HISTORY");
				IDB_PNG_SEND = _T("PNG:IDB_PNG_SEND");
			}
			const TCHAR * IDB_PNG_DEFAULTLOGO_48P;
			const TCHAR * IDB_PNG_DEFAULTLOGO_32P;
			const TCHAR * IDB_PNG_SB;
			const TCHAR * IDB_PNG_VSCROLL;
			const TCHAR * IDB_PNG_SHADOW;
			const TCHAR * IDB_PNG_GREENSHADOW;
			const TCHAR * IDB_PNG_DEFAULTBKGND;
			const TCHAR * IDB_PNG_COMMON_CLOSE;
			const TCHAR * IDB_PNG_COMMON_MIN;
			const TCHAR * IDB_PNG_COMMON_MAX;
			const TCHAR * IDB_PNG_COMMON_RESTORE;
			const TCHAR * IDB_PNG_MESSAGE;
			const TCHAR * IDB_PNG_CONTACT;
			const TCHAR * IDB_PNG_FAVORITES;
			const TCHAR * IDB_PNG_MENU;
			const TCHAR * IDB_PNG_MORE;
			const TCHAR * IDB_PNG_ADD;
			const TCHAR * IDB_PNG_SEARCH;
			const TCHAR * IDB_PNG_PERSONAL;
			const TCHAR * IDB_PNG_GROUP;
			const TCHAR * IDB_PNG_FILEHELPER;
			const TCHAR * IDB_PNG_GZH;
			const TCHAR * IDB_PNG_DYH;
			const TCHAR * IDB_PNG_NEWS;
			const TCHAR * IDB_PNG_EMOTION;
			const TCHAR * IDB_PNG_IMAGE;
			const TCHAR * IDB_PNG_FILE;
			const TCHAR * IDB_PNG_SNAPSHOT;
			const TCHAR * IDB_PNG_SNAPSHOT_ARROW;
			const TCHAR * IDB_PNG_HISTORY;
			const TCHAR * IDB_PNG_SEND;
		}PNG;
		class _ICON{
			public:
			_ICON(){
				ICON_LOGO = _T("ICON:ICON_LOGO");
			}
			const TCHAR * ICON_LOGO;
		}ICON;
		class _SMENU{
			public:
			_SMENU(){
				menu_tray = _T("SMENU:menu_tray");
			}
			const TCHAR * menu_tray;
		}SMENU;
	};
	const SNamedID::NAMEDVALUE namedXmlID[]={
		{L"_name_start",65535},
		{L"btn_add",65546},
		{L"btn_close",65536},
		{L"btn_contact",65542},
		{L"btn_emotion",65561},
		{L"btn_favorites",65543},
		{L"btn_file",65563},
		{L"btn_history",65566},
		{L"btn_image",65562},
		{L"btn_max",65537},
		{L"btn_menu",65544},
		{L"btn_message",65541},
		{L"btn_min",65539},
		{L"btn_more",65549},
		{L"btn_restore",65538},
		{L"btn_send",65568},
		{L"btn_snapshot",65564},
		{L"btn_snapshot_arrow",65565},
		{L"chattab",65550},
		{L"lasttalk_face",65552},
		{L"lasttalk_message_content",65555},
		{L"lasttalk_message_time",65554},
		{L"lasttalk_name",65553},
		{L"leftlist_tabctrl",65547},
		{L"lv_list_lasttalk",65551},
		{L"lv_new_friends",65557},
		{L"main_logo",65540},
		{L"newfriend_logo",65558},
		{L"newfriend_text",65559},
		{L"page_name",65548},
		{L"recv_richedit",65560},
		{L"search_edit",65545},
		{L"send_richedit",65567},
		{L"tip_new_friends",65556}		};
	class _R{
	public:
		class _name{
		public:
		_name(){
			_name_start = namedXmlID[0].strName;
			btn_add = namedXmlID[1].strName;
			btn_close = namedXmlID[2].strName;
			btn_contact = namedXmlID[3].strName;
			btn_emotion = namedXmlID[4].strName;
			btn_favorites = namedXmlID[5].strName;
			btn_file = namedXmlID[6].strName;
			btn_history = namedXmlID[7].strName;
			btn_image = namedXmlID[8].strName;
			btn_max = namedXmlID[9].strName;
			btn_menu = namedXmlID[10].strName;
			btn_message = namedXmlID[11].strName;
			btn_min = namedXmlID[12].strName;
			btn_more = namedXmlID[13].strName;
			btn_restore = namedXmlID[14].strName;
			btn_send = namedXmlID[15].strName;
			btn_snapshot = namedXmlID[16].strName;
			btn_snapshot_arrow = namedXmlID[17].strName;
			chattab = namedXmlID[18].strName;
			lasttalk_face = namedXmlID[19].strName;
			lasttalk_message_content = namedXmlID[20].strName;
			lasttalk_message_time = namedXmlID[21].strName;
			lasttalk_name = namedXmlID[22].strName;
			leftlist_tabctrl = namedXmlID[23].strName;
			lv_list_lasttalk = namedXmlID[24].strName;
			lv_new_friends = namedXmlID[25].strName;
			main_logo = namedXmlID[26].strName;
			newfriend_logo = namedXmlID[27].strName;
			newfriend_text = namedXmlID[28].strName;
			page_name = namedXmlID[29].strName;
			recv_richedit = namedXmlID[30].strName;
			search_edit = namedXmlID[31].strName;
			send_richedit = namedXmlID[32].strName;
			tip_new_friends = namedXmlID[33].strName;
		}
		 const wchar_t * _name_start;
		 const wchar_t * btn_add;
		 const wchar_t * btn_close;
		 const wchar_t * btn_contact;
		 const wchar_t * btn_emotion;
		 const wchar_t * btn_favorites;
		 const wchar_t * btn_file;
		 const wchar_t * btn_history;
		 const wchar_t * btn_image;
		 const wchar_t * btn_max;
		 const wchar_t * btn_menu;
		 const wchar_t * btn_message;
		 const wchar_t * btn_min;
		 const wchar_t * btn_more;
		 const wchar_t * btn_restore;
		 const wchar_t * btn_send;
		 const wchar_t * btn_snapshot;
		 const wchar_t * btn_snapshot_arrow;
		 const wchar_t * chattab;
		 const wchar_t * lasttalk_face;
		 const wchar_t * lasttalk_message_content;
		 const wchar_t * lasttalk_message_time;
		 const wchar_t * lasttalk_name;
		 const wchar_t * leftlist_tabctrl;
		 const wchar_t * lv_list_lasttalk;
		 const wchar_t * lv_new_friends;
		 const wchar_t * main_logo;
		 const wchar_t * newfriend_logo;
		 const wchar_t * newfriend_text;
		 const wchar_t * page_name;
		 const wchar_t * recv_richedit;
		 const wchar_t * search_edit;
		 const wchar_t * send_richedit;
		 const wchar_t * tip_new_friends;
		}name;

		class _id{
		public:
		const static int _name_start	=	65535;
		const static int btn_add	=	65546;
		const static int btn_close	=	65536;
		const static int btn_contact	=	65542;
		const static int btn_emotion	=	65561;
		const static int btn_favorites	=	65543;
		const static int btn_file	=	65563;
		const static int btn_history	=	65566;
		const static int btn_image	=	65562;
		const static int btn_max	=	65537;
		const static int btn_menu	=	65544;
		const static int btn_message	=	65541;
		const static int btn_min	=	65539;
		const static int btn_more	=	65549;
		const static int btn_restore	=	65538;
		const static int btn_send	=	65568;
		const static int btn_snapshot	=	65564;
		const static int btn_snapshot_arrow	=	65565;
		const static int chattab	=	65550;
		const static int lasttalk_face	=	65552;
		const static int lasttalk_message_content	=	65555;
		const static int lasttalk_message_time	=	65554;
		const static int lasttalk_name	=	65553;
		const static int leftlist_tabctrl	=	65547;
		const static int lv_list_lasttalk	=	65551;
		const static int lv_new_friends	=	65557;
		const static int main_logo	=	65540;
		const static int newfriend_logo	=	65558;
		const static int newfriend_text	=	65559;
		const static int page_name	=	65548;
		const static int recv_richedit	=	65560;
		const static int search_edit	=	65545;
		const static int send_richedit	=	65567;
		const static int tip_new_friends	=	65556;
		}id;

		class _string{
		public:
		const static int title	=	0;
		const static int ver	=	1;
		}string;

		class _color{
		public:
		const static int blue	=	0;
		const static int gray	=	1;
		const static int green	=	2;
		const static int red	=	3;
		const static int white	=	4;
		}color;

	};

#ifdef R_IN_CPP
	 extern const _R R;
	 extern const _UIRES UIRES;
#else
	 extern const __declspec(selectany) _R & R = _R();
	 extern const __declspec(selectany) _UIRES & UIRES = _UIRES();
#endif//R_IN_CPP
}
