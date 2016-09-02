#include <iostream>
#include <iomanip>
#include <string>
#include <cstring>
#include <cstdlib>
#include <limits>

using namespace std;

int  calcStringLexVal(string s)
{
	int ret = 0;
	for(unsigned int i = 0; i < s.length(); i++)
	{
		ret += (int)s[i];
	}
	return ret;
}

string findMinShiftSubString(string s)
{
	string ret(s);
	int min_lex = calcStringLexVal(s);
	for(unsigned int i = 0; i < s.length(); i++)
	{
		for(unsigned int j = i; j < s.length(); j++)
		{
			// shift
			string temp_s(s);
			for(unsigned int k = i; k <= j; k++)
			{
				if(temp_s[k] != 'a')
					temp_s[k] = temp_s[k] - 1;
				else
					break;
			}
			
			// compare
			int lhs = calcStringLexVal(temp_s);

			if(lhs < min_lex)
				{
					ret = temp_s;
					min_lex = lhs;
				}
		}
	}
	return ret;
}

int main()
{
	string input;
	getline(cin, input);
	cout << findMinShiftSubString(input) << endl;
	return(0);
}
