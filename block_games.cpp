#include<bits/stdc++.h>
#include<sstream>

using namespace std;

int main()
{
	int t, n;
	cin >> t;
	while (t--)
	{
		n = 0;
		cin >> n;
		ostringstream str1;
		str1 << n;
		string s;
		s = str1.str();
		int length = s.length();
		int len2 = length - 1;
		int flag = 0;
		for (int i = 0; i < length / 2; i++)
		{
			if (s[i] == s[len2 - i])
			{
				flag = 1;
			}
			else
			{
				flag = 0;
				break;
			}
		}

		if (flag == 1)
		{
			cout << "wins" << endl;
		}
		else
		{
			cout << "losses" << endl;
		}
	}
}
