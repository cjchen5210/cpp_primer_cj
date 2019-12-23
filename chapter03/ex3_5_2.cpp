//输出多个字符分隔开来
#include <iostream>
#include <string>

using namespace std ;

int main()
{
    string s  ;
    while (getline(cin,s))
    {
        cout << s << endl;
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
	string result, s;
	while (cin >> s)
	{
		result += s + " ";
	}
	cout << result << endl;

	return 0;
}
*/
