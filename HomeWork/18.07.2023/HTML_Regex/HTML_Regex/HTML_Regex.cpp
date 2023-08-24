#include <iostream>
#include<regex>
#include<string>
using namespace std;

int main()
{
	string text = "Example of HTML : <strong>\0 ";
	regex regex_HTML("^(<[a-zA-Z]+>)");
	int b = 0;
	 
	int start = text.find("<");
	int end = text.find(">") + 1;

	for (size_t i = start; i < end; i++)
	{
		b++;
	}
	
	char* finded = new char[b];
	b = 0;

	for (size_t i = start; i < end; i++)
	{
		finded[b] = text[i];
		b++;
	}
	finded[b] = '\0';



	if (regex_match(finded, regex_HTML))
	{
		cout << finded;
	}

	return 0;
}
