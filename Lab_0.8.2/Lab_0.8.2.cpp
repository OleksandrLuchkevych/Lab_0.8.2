#include <iostream>
#include <string>
using namespace std;

string Change(string& s)
{
	int i = 0;
	int len = s.length();
	size_t pos = 0;

	while ((pos = s.find('.', pos)) < (len / 1) * 1 - 1)
	{
		s[pos+1] = toupper(s[pos+1]);
		pos++;
	}
	return s;
}

int main()
{
	string str;
	cout << "Enter string:" << endl;
	getline(cin, str);
	string dest = Change(str);
	
	cout << "Modified string (result): " << dest << endl;
	return 0;
}