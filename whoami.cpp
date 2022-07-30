#include <iostream>
using namespace std;
#include <string>
#include <windows.h>
#include <Lmcons.h>
#include <fstream>

int main()
{
	TCHAR name[UNLEN + 1];
	DWORD size = UNLEN + 1;

	if (GetUserName((TCHAR*)name,&size)) {
		wcout << name;
		ofstream outfile;
		outfile.open("user.txt");
		outfile << name;
		std::cout << name;
	}
}