#ifndef _HOST_LITERALS_H_
#define _HOST_LITERALS_H_

#define U16_LITERAL_NEWLINE_VAR			{'\n',0}
#define U16_LITERAL_NEWLINE_CONST		(uint16_t[]){'\n',0}

#define U16_LITERAL_NULL_STRING			(uint16_t[]){0}
#define U16_LITERAL_EMPTY_STRING		(uint16_t[]){' ',0}
#define U16_LITERAL_DASH			(uint16_t[]){'-',0}
#define U16_LITERAL_EQUALS			(uint16_t[]){'=',0}
#define U16_LITERAL_AT				(uint16_t[]){'@',0}
#define U16_LITERAL_PO				(uint16_t[]){'.','p','o',0}
#define U16_LITERAL_X				(uint16_t[]){'X',0}
#define U16_LITERAL_RIGHT_ARROW			(uint16_t[]){'>',0}
#define U16_LITERAL_LEFT_ARROW			(uint16_t[]){'<',0}
#define U16_LITERAL_BUTTON			(uint16_t[]){'B','U','T','T','O','N',0}
#define U16_LITERAL_DOS_BASE			(uint16_t[]){'\\','\\','?','\\',0}
#define U16_LITERAL_UNC_BASE			(uint16_t[]){'\\','\\','?','\\','U','N','C','\\',0}
#define U16_LITERAL_INTEGRAL_FAKED		(uint16_t[]){'/','/','\\','|','|','|',0}
#define U16_LITERAL_LUCIDA_CONSOLE		(uint16_t[]){'L','u','c','i','d','a',' ','C','o','n','s','o','l','e',0}
#define U16_LITERAL_DISPFILENAME 		(uint16_t[]){'D','i','s','p','F','i','l','e','N','a','m','e',0}
#define U16_LITERAL_CFG_DEFAULT 		(uint16_t[]){'*',0}
#define U16_LITERAL_LANG_PO 			(uint16_t[]){'l','a','n','g','/','*','.','p','o',0}
#define U16_LITERAL_SOUNDS 			(uint16_t[]){'s','o','u','n','d','s','/','*','.','w','a','v',0}
#define U16_LITERAL_THEMES 			(uint16_t[]){'t','h','e','m','e','s','/','*',0}
#define U16_LITERAL_CFG_DOWNLOADED 		(uint16_t[]){'@','/','@',0}
#define U16_LITERAL_THIN 			(uint16_t[]){'T','h','i','n',0}
#define U16_LITERAL_EXTRALIGHT 			(uint16_t[]){'E','x','t','r','a','l','i','g','h','t',0}
#define U16_LITERAL_LIGHT 			(uint16_t[]){'L','i','g','h','t',0}
#define U16_LITERAL_REGULAR 			(uint16_t[]){'R','e','g','u','l','a','r',0}
#define U16_LITERAL_MEDIUM 			(uint16_t[]){'M','e','d','i' ,'u','m',0}
#define U16_LITERAL_SEMIBOLD 			(uint16_t[]){'S','e','m','i','b','o','l','d',0}
#define U16_LITERAL_BOLD 			(uint16_t[]){'B','o','l','d',0}
#define U16_LITERAL_EXTRABOLD 			(uint16_t[]){'E','x','t','r','a','b','o','l','d',0}
#define U16_LITERAL_HEAVY 			(uint16_t[]){'H','e','a','v','y',0}
#define U16_LITERAL_ULTRALIGHT 			(uint16_t[]){'U','l','t','r','a','l','i','g','h','t',0}
#define U16_LITERAL_NORMAL 			(uint16_t[]){'N','o','r','m','a','l',0}
#define U16_LITERAL_DEMIBOLD 			(uint16_t[]){'D','e','m','i','b','o','l','d',0}
#define U16_LITERAL_ULTRABOLD 			(uint16_t[]){'U','l','t','r','a','b','o','l','d',0}
#define U16_LITERAL_BLACK 			(uint16_t[]){'B','l','a','c','k',0}
#define U16_LITERAL_BOOK 			(uint16_t[]){'B','o','o','k',0}
#define U16_LITERAL_DEMI 			(uint16_t[]){'D','e','m','i',0}
#define U16_LITERAL_EXTRABLACK 			(uint16_t[]){'E','x','t','r','a','b','l','a','c','k',0}
#define U16_LITERAL_FAT 			(uint16_t[]){'F','a','t',0}
#define U16_LITERAL_POSTER 			(uint16_t[]){'P','o','s','t','e','r',0}
#define U16_LITERAL_ULTRABLACK 			(uint16_t[]){'U','l','t','r','a','b','l','a','c','k',0}
#define U16_LITERAL_OBLIQUE 			(uint16_t[]){'O','b','l','i','q','u','e',0}
#define U16_LITERAL_0123456789 			(uint16_t[]){'0','1','2','3','4','5','6','7','8','9',0}
#define U16_LITERAL_COLOR_SCHEME_DESIGNER 	(uint16_t[]){'h','t','t','p',':','/','/','c','i','e','m','b','o','r','.','g','i','t','h','u','b','.','i','o','/','4','b','i','t','/',0}
#define U16_LITERAL_NONE			(uint16_t[]){'-',' ','N','o','n','e',' ','-',0}
#define U16_LITERAL_WINLOC			(uint16_t[]){'@',' ','W','i','n','d','o','w','s',' ','l','a','n','g','u' ,'a','g','e',' ','@',0}
#define U16_LITERAL_LOCENV			(uint16_t[]){'*',' ','L','o','c','a','l','e',' ','e','n','v','i','r','o','n','m',0}
#define U16_LITERAL_LOCALE			(uint16_t[]){'=',' ','c','f','g','.',' ','T','e','x','t',' ','L','o','c','a','l','e',' ','=',0}
#define U16_LITERAL_DOWNLOADED			(uint16_t[]){'d','o','w','n','l','o','a','d','e','d',' ','/',' ','g','i','v','e',' ','m','e',' ','a',' ','n','a','m','e',0}
#define U16_LITERAL_LANG			(uint16_t[]){'l','a','n','g',0}
#define U16_LITERAL_DEFAULTBEEP			(uint16_t[]){'.','D','e','f','a','u','l','t',0}
#define U16_LITERAL_CRITICALSTOP		(uint16_t[]){'S','y','s','t','e','m','H','a','n','d',0}
#define U16_LITERAL_QUESTION			(uint16_t[]){'S','y','s','t','e','m','Q','u','e','s','t','i','o','n',0}
#define U16_LITERAL_EXCLAMATNION		(uint16_t[]){'S','y','s','t','e','m','E','x','c','l','a','m','a','t','i','o','n',0}
#define U16_LITERAL_ASTERISK			(uint16_t[]){'S','y','s','t','e','m','A','s','t','e','r','i','s','k',0}
#define U16_LITERAL_DATA_TEXT_PLAIN		(uint16_t[]){'d','a','t','a',':','t','e','x','t','/','p','l','a','i','n',0}
#define U16_LITERAL_HTTP			(uint16_t[]){'h','t','t','p',':',0}
#define U16_LITERAL_HTTPS			(uint16_t[]){'h','t','t','p','s',':',0}
#define U16_LITERAL_FTP				(uint16_t[]){'f','t','p',':',0}
#define U16_LITERAL_FTPS			(uint16_t[]){'f','t','p','s',':',0}
#define U16_LITERAL_THEME			(uint16_t[]){'t','h','e','m','e','s',0}
#define U16_LITERAL_DEFAULT_PRINTER		(uint16_t[]){'*',' ','D','e','f','a','u','l','t',' ','p','r','i','n','t','e','r',' ','*',0}
#define U16_LITERAL_NO_PRINTER			(uint16_t[]){'*',' ','N','o','n','e',' ','(','p','r','i','n','t','i','n','g',' ','d','i','s','a','b','l','e','d',')',' ','*',0}
#define U16_LITERAL_NO_SOUND			(uint16_t[]){'*',' ','N','o','n','e',' ','(','s','y','s','t','e','m',' ','s','o','u','n','d',')',' ','*',0}
#define U16_LITERAL_NONE2			(uint16_t[]){'*',' ','N','o','n','e',' ','*',0}
#define U16_LITERAL_FRAKTUR			(uint16_t[]){'F','r','a','k','t','u','r',0}
#define U16_LITERAL_BLACKLETTER			(uint16_t[]){'B','l','a','c','k','l','e','t','t','e','r',0}
#define U16_LITERAL_INFO			(uint16_t[]){'i','n','f','o',0}
#define U16_LITERAL_CHARNAMES_TXT		(uint16_t[]){'c','h','a','r','n','a','m','e','s','.','t','x','t',0}
#define U16_LITERAL_CACHE			(uint16_t[]){'c','a','c','h','e',0}
#define U16_LITERAL_DATA			(uint16_t[]){'d','a','t','a',0}
#define U16_LITERAL_HOME			(uint16_t[]){'h','o','m','e',0}
#define U16_LITERAL_MNT				(uint16_t[]){'m','n','t',0}
#define U16_LITERAL_WWW				(uint16_t[]){'w','w','w','.',0}
#define U16_LITERAL_ROOT			(uint16_t[]){'r','o','o','t',0}
#define U16_LITERAL_ROOTFS			(uint16_t[]){'/','r','o','o','t','f','s',0}
#define U16_LITERAL_LXSS			(uint16_t[]){'/','l','x','s','s',0}
#define U16_LITERAL_MNT_FS			(uint16_t[]){'/','m','n','t','/',0}
#define U16_LITERAL_DEV_FS			(uint16_t[]){'/','d','e','v','/','f','s',0}
#define U16_LITERAL_BASIC_COLOURS		(uint16_t[]){'B','&','a','s','i','c',' ','C','o','l','o','u','r','s',0}
#define U16_LITERAL_STATIC			(uint16_t[]){'S','t','a','t','i','c',0}
#define U16_LITERAL_SESSION_SWITCHER		(uint16_t[]){'S','e','s','s','i','o','n',' ','s','w','i','t','c','h','e','r',0}
#define U16_LITERAL_SESSION_LAUNCHER		(uint16_t[]){'S','s','s','s','i','o','n',' ','l','a','u','n','c','h','e','r',0}
#define U16_LITERAL_CTRL_PLUS			(uint16_t[]){'C','t','r','l','+',0}
#define U16_LITERAL_ALT_PLUS			(uint16_t[]){'A','l','t','+',0}
#define U16_LITERAL_SHIFT_PLUS			(uint16_t[]){'S','h','i','f','t','+',0}
#define U16_LITERAL_ALT_F4			(uint16_t[]){'A','l','t','+','F','4',0}
#define U16_LITERAL_ALT_F3			(uint16_t[]){'A','l','t','+','F','4',0}
#define U16_LITERAL_ALT_F2			(uint16_t[]){'A','l','t','+','F','4',0}
#define U16_LITERAL_ALT_F8			(uint16_t[]){'A','l','t','+','F','4',0}
#define U16_LITERAL_ALT_F10			(uint16_t[]){'A','l','t','+','F','1','0',0}
#define U16_LITERAL_ALT_F11			(uint16_t[]){'A','l','t','+','F','1','1',0}
#define U16_LITERAL_ALT_F12			(uint16_t[]){'A','l','t','+','F','1','2',0}
#define U16_LITERAL_CTRL_SHIFT_W		(uint16_t[]){'C','t','r','l','+','S','h','i','f','t','+','W',0}
#define U16_LITERAL_CTRL_SHIFT_N		(uint16_t[]){'C','t','r','l','+','S','h','i','f','t','+','N',0}
#define U16_LITERAL_CTRL_SHIFT_C		(uint16_t[]){'C','t','r','l','+','S','h','i','f','t','+','C',0}
#define U16_LITERAL_CTRL_SHIFT_V		(uint16_t[]){'C','t','r','l','+','S','h','i','f','t','+','V',0}
#define U16_LITERAL_CTRL_SHIFT_D		(uint16_t[]){'C','t','r','l','+','S','h','i','f','t','+','D',0}
#define U16_LITERAL_CTRL_SHIFT_F		(uint16_t[]){'C','t','r','l','+','S','h','i','f','t','+','F',0}
#define U16_LITERAL_CTRL_SHIFT_H		(uint16_t[]){'C','t','r','l','+','S','h','i','f','t','+','H',0}
#define U16_LITERAL_CTRL_SHIFT_R                (uint16_t[]){'C','t','r','l','+','S','h','i','f','t','+','R',0}
#define U16_LITERAL_CTRL_SHIFT_S		(uint16_t[]){'C','t','r','l','+','S','h','i','f','t','+','S',0}
#define U16_LITERAL_T                           (uint16_t[]){'\t',0}
#define U16_LITERAL_CTRL_INS			(uint16_t[]){'C','t','r','l','+','I','n','s',0}
#define U16_LITERAL_SHIFT_INS			(uint16_t[]){'S','h','i','f','t','+','I','n','s',0}
#define U16_LITERAL_CTRL_SHIFT_INS		(uint16_t[]){'C','t','r','l','+','S','h','i','f','t','+','I','n','s',0}


#define U16_LITERAL_NEW				(uint16_t[]){'N','e','&','w',0}
#define U16_LITERAL_COPY			(uint16_t[]){'&','C','o','p','y',0}
#define U16_LITERAL_RESTORE			(uint16_t[]){'&','R','e','s','t','o','r','e',0}
#define U16_LITERAL_MOVE			(uint16_t[]){'&','M','o','v','e',0}
#define U16_LITERAL_SIZE			(uint16_t[]){'&','S','i','z','e',0}
#define U16_LITERAL_PASTE			(uint16_t[]){'&','P','a','s','t','e',' ',0}
#define U16_LITERAL_COPY_PASTE			(uint16_t[]){'C','o','p','y',' ','-',' ','P','a','s','t','e',0}
#define U16_LITERAL_SEARCH			(uint16_t[]){'S','&','e','a','r','c','h',0}
#define U16_LITERAL_LOG_TO_FILE			(uint16_t[]){'&','L','o','g',' ','t','o',' ','F','i','l','e',0}
#define U16_LITERAL_CHARACTER_INFO		(uint16_t[]){'C','h','a','r','a','c','t','e','r',' ','&','I','n','f','o',0}
#define U16_LITERAL_RESET			(uint16_t[]){'&','R','e','s','e','t',0}
#define U16_LITERAL_DEFAULT_SIZE		(uint16_t[]){'&','D','e','f','a','u','l','t',' ','S','i','z','e',0}
#define U16_LITERAL_FULL_SCREEN			(uint16_t[]){'&','F','u','l','l',' ','S','c','r','e','e','n',0}
#define U16_LITERAL_FLIP_SCREEN			(uint16_t[]){'F','l','i','p',' ','&','S','c','r','e','e','n',0}
#define U16_LITERAL_COPY_TITLE			(uint16_t[]){'C','o','p','y',' ','&','T','i','t','l','e'}
#define U16_LITERAL_OPTIONS			(uint16_t[]){'&','O','p','t','i','o','n','s','.','.','.',0}
#define U16_LITERAL_OPEN			(uint16_t[]){'O','p','e','&','n',0}
#define U16_LITERAL_SELECT_ALL			(uint16_t[]){'S','e','l','e','c','t',' ','&','A','l','l',0}
#define U16_LITERAL_CLEAR_SCROLLBACK		(uint16_t[]){'C','l','e','a','r',' ','S','c','r','o','l','l','b','a','c','k',0}
#define U16_LITERAL_WAV				(uint16_t[]){'.','w','a','v',0}
#define U16_LITERAL_SOUNDS2			(uint16_t[]){'s','o','u','n','d','s',0}
#define U16_LITERAL_DISTRIBUTION_NAME		(uint16_t[]){'D','i','s','t','r','i','b','u','t','i','o','n','N','a','m','e',0}
#define U16_LITERAL_BASEPATH			(uint16_t[]){'B','a','s','e','P','a','t','h',0}
#define U16_LITERAL_PACKAGE_FAMILY_NAME		(uint16_t[]){'P','a','c','k','a','g','e','F','a','m','i','l','y','N','a','m','e',0}
#define U16_LITERAL_MSG_PRE			(uint16_t[]){'P','r','o','c','e','s','s','e','s',' ','a','r','e',' ','r','u','n','n','i','n','g',' ','i','n',' ','s','e','s','s','i','o','n',':',0}
#define U16_LITERAL_MSG_POST			(uint16_t[]){'C','l','o','s','e',' ','a','n','y','w','a','y',0}
#define U16_LITERAL_PACKAGE_FULL_NAME		(uint16_t[]){'P','a','c','k','a','g','e','F','u','l','l','N','a','m','e',0}
#define U16_LITERAL_SCHEMAS			(uint16_t[]){'S','c','h','e','m','a','s',0}
#define U16_LITERAL_DEFAULT_DISTRIBUTION	(uint16_t[]){'D','e','f','a','u','l','t','D','i','s','t','r','i','b','u','t','i','o','n',0}
#define U16_LITERAL_LXSS_BASH_ICO		(uint16_t[]){'\\','\\','l','x','s','s','\\','\\','b','a','s','h','.','i','c','o',0}
#define U16_LITERAL_LXSS_ROOTFS			(uint16_t[]){'\\','\\','r','o','o','t','f','s',0}
#define U16_LITERAL_LXSS_REGISTRY		(uint16_t[]){'S','O','F','T','W','A','R','E','\\','\\','M','i','c','r','o','s','o','f','t','\\','\\','C','u','r','r','e','n','t','V','e','r','s','i','o','n','\\','\\','L','x','s','s',0}
#define U16_LITERAL_APPMODEL_REGISTRY		(uint16_t[]){'S','o','f','t','w','a','r','e','\\','\\','C','l','a','s','s','e','s','\\','\\','L','o','c','a','l',' ','S','e','t','t','i','n','g','s','\\','\\','S','o','f','t','w','a','r','e','\\','\\','M','i','c','r','o','s','o','f','t','\\','\\','W','i','n','d','o','w','s','\\','\\','C','u','r','r','e','n','t','V','e','r','s','i','o','n','\\','\\','A','p','p','M','o','d','e','l','\\','\\','S','y','s','t','e','m','A','p','p','D','a','t','a',0}
#define U16_LITERAL_WINDOWS_APPS		(uint16_t[]){'\\','\\','W','i','n','d','o','w','s','\\','\\',0}
#define U16_LITERAL_IMAGES_ICON			(uint16_t[]){'\\','\\','i','m','a','g','e','s','\\','\\','i','c','o','n','.','i','c','o',0}
#define U16_LITERAL_LXSS_ROOT			(uint16_t[]){'\\','\\','l','x','s','s',0}


#define U16_LITERAL_APP_NAME			(uint16_t[]){'m','i','n','t','t','y',0}
#define U16_LITERAL_DIALOG_CLASS		(uint16_t[]){'C','o','n','f','i','g','B','o','x',0}


#define U16_LITERAL_NRC_DUTCH			(uint16_t[]){0}
#define U16_LITERAL_NRC_FINNISH			(uint16_t[]){0}
#define U16_LITERAL_NRC_FRENCH			(uint16_t[]){0}
#define U16_LITERAL_NRC_FRENCH_CANADIAN		(uint16_t[]){0}
#define U16_LITERAL_NRC_GERMAN			(uint16_t[]){0}
#define U16_LITERAL_NRC_ITALIAN			(uint16_t[]){0}
#define U16_LITERAL_NRC_DANISH_NORWEGIAN	(uint16_t[]){0}
#define U16_LITERAL_NRC_PORTUGUESE		(uint16_t[]){0}
#define U16_LITERAL_NRC_SPANISH			(uint16_t[]){0}
#define U16_LITERAL_NRC_SWEDISH			(uint16_t[]){0}
#define U16_LITERAL_NRC_SWISS			(uint16_t[]){0}

#define U16_LITERAL_MANY_SYMBOLS		(uint16_t[]){0}
#define U16_LITERAL_CRYPTIC_QUESTION		(uint16_t[]){0}

#endif
