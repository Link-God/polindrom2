#include "stdafx.h"
#include <string> 
#include <iostream>

using namespace std;

int main()
{
	string str1, str2, str3;
	int g, y, f, k, i1, i2, h1, h2;
	k = 0;
	h2 = 0;
	getline(cin, str1);



	i1 = size(str1);
	str3 = str1;


	for (h1 = 0; h1 < i1; h1++)
	{
		f = int(str1.at(h1));
		if ((f <= 122) && (f >= 65)) {
			str3.at(h2) = str1.at(h1);
			h2++;
		}
	}


	str3.erase(h2, i1 - 1);

	i2 = size(str3);

	for (h1 = 0; h1 < i2; h1++)
	{
		if ((g = str3.at(h1) < 97) && (g = str3.at(h1) > 64))
		{
			g = str3.at(h1);
			y = int(g) + 32;
			str3.at(h1) = char(y);
		}
	}

	str2 = str3;
	for (i2 = i2 - 1; i2 >= 0; i2--, k++)
	{

		str2.at(k) = str3.at(i2);


	}
	if (str3 == str2)
	{
		cout << "1" << endl;
	}

	else
	{
		cout << "0" << endl;
	}
	system("pause");
}
