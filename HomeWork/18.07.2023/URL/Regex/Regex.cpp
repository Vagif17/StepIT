#include <iostream>
#include <regex>
#include <string>
using namespace std;

int main()
{
	regex correct_URL("^(https:\/\/)([0-9a-zA-Z]+).([a-zA-Z]+)(((\/)([0-9a-zA-Z-_.%]+))+)*");
	string text{ "Example of finding URL in text :https://text.ru/seo" };
	char* to_find = new char[20];
	int b{};
	
	for (size_t c = 0; c < 2; c++)
	{
		if (c == 0) {
			for (size_t i = text.find("https"); i < text.size(); i++)
			{
				if (text[i] == ' ')
				{
					break;
				}

				b++;
			}
			b = 0;
		}

		else
		{
			for (size_t i = text.find("https"); i < text.size(); i++)
			{
				if (text[i] == ' ')
				{
					break;
				}

				to_find[b] = text[i];
				b++;

			}
			to_find[b] = '\0';
		}


	}

	if (regex_match(to_find, correct_URL))
	{
		cout << "Finded URL : " << to_find;
	}

	else
	{
		cout << "URL is not found";
	}
	return 0;
}
