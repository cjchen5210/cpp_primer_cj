//输出链接成的大字符串
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s1 ,s2 ,s3 , s ;
    cin >> s1 >> s2 >> s3 ;
    s = s1 + s2 + s3 ;
    cout << s <<endl;
    return 0;
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
		result += s;
	}
	cout << result << endl;

	return 0;
}
*/
