#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	char firstStr[] = "This is softwareTestingHelp.com";
	char secStr[] = "a testing platform";
	int len = strlen(firstStr);
	cout << "Length of firstStr : " << len;
	strcpy(secStr, "softwareTesting");
	cout << "\nResultant string (secStr):" << secStr;
	cout << "\nComparing firstStr and secStr :" << strcmp(firstStr, secStr);
	strcat(secStr, " for you");
	cout << "\nConcatenated secStr: " << secStr;
	cout << "\nFirst occurence of i in firststr at:" << strchr(firstStr, 'T');
	return 0;
}
