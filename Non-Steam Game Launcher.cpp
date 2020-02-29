#include <windows.h> 
#include <iostream>
using namespace std;

int main()
{
	char url[100] = "www.google.com"; //<<<<<Add game's URL shortcut here, add more chars if needed.
	ShellExecuteA(NULL, "open", url, NULL, NULL, SW_SHOWNORMAL);
	cin.get(); //close this window when game closes
	return 0;
}