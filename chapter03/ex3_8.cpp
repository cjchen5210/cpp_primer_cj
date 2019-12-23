//用while和for输出全部X
#include <iostream>
#include <string>

using namespace std;

int main()

{
    string str ;
    cin >> str ;
    decltype(str.size()) i = 0;
    while (i < str.size()) str[i++] = 'X';
    cout << str << endl ;
    for ( i = 0 ; i < str.size(); str[i++] = 'Y')
    cout << str << endl;
    
    return 0 ;
}
