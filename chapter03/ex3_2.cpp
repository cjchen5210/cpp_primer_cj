//读取一行
//writed by myself
//自己的答案是错的
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string a;
    while(cin >> a)
        cout << a << endl;
    return 0;
}

//answer
/*
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s ;
    while (getline(cin,s))
    {
        cout << s << endl;
        
    }
    return 0;
}
*/


//带神的答案
#include <iostream>
#include <string>

using std::string;
using std::cin;
using std::cout;
using std::endl;
using std::getline;

int main()
{
    for (string str; getline(cin, str); cout << str << endl);
    return 0;
}
