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
