//比较两个字符大小
#include <iostream>
#include <string>

using namespace std;

int main ()
{
    string s1 ,s2;
    cin >> s1 >> s2;
    if (s1 > s2)
    {
        cout << s1 << endl;
        
    }
    else if ( s1 < s2)
    {
        cout << s2 << endl ;
    }
    else
    {
        cout << s1 <<  " " << s2 << endl;
    }
    return 0 ;
}

//answer
/*
#include <iostream>
#include <string>
using std::string;
using std::cin;
using std::cout;
using std::endl;

int main()
{
	string str1, str2;
	while (cin >> str1 >> str2)
	{
		if (str1 == str2)
			cout << "The two strings are equal." << endl;
		else
			cout << "The larger string is " << ((str1 > str2) ? str1 : str2);
	}

	return 0;
}

*/
