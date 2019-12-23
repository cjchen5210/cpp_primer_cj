//错误❌答案
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    getline(cin,s);
    decltype(s.size()) i = 0;
    for (i = 0; i < s.size() - 1 ; s[i++])
    {
        cout << s[i] << endl;
    }
    return 0 ;
    
}
