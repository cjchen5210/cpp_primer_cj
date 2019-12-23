//比较字符长度大小
#include <iostream>
#include <string>

using namespace std ;

int main()

{
    string s1 ,s2 ;
    cin >> s1 >> s2;
    auto l1 = s1.size();
    auto l2 = s2.size();
    if ( l1 > l2 )
    {
        cout << s1 << endl;
    }
    else if ( l1< l2 )
    {
        cout << s2 << endl;
    }
    else
    {
        cout << "长度相等" << endl ;
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
		if (str1.size() == str2.size())
			cout << "The two strings have the same length." << endl;
		else
			cout << "The longer string is " << ((str1.size() > str2.size()) ? str1 : str2) << endl;
	}

	return 0;
}
*/
