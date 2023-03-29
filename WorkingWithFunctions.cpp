#include <iostream>
#include<string.h>

using namespace std;

// #1 Replace first and last positions of string with char
string replaceStr(string str, char ch ) {
	int leng = str.length();
	str[0] = ch;
	str[leng - 1] = ch;
	return str;
}


// #2 Remove whitespaces from begining and end of the string
string removeSpaces(string str)
{
	for (int i = 0; i < str.length(); i++)
	{
		if (str[i] == ' ')
		{
			str.erase(i, 1);
			i--;
		}
	}
	return str;
}

int main()
{

	string str1 = "test1", str2 = "   test2    ";
	char ch = 'a';
	cout << replaceStr(str1, ch) << endl;
	cout << removeSpaces(str2);
}