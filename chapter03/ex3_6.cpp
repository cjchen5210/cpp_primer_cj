//把字符每个元素都换成x
//错误结果，换成了一个x
#include <iostream>
#include <string>

using namespace std;

int main()

{
    string str ;
    cin >> str ;
    for ( auto i : str)
    {
        i = 'x';
        str = i;
    }
    cout << str << endl ;
    return 0;
}

//answer
//带神的答案

#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;

int main()
{
    string str("a simple string");
    for (auto &c : str) c = 'X';
    cout << str << endl;

    return 0;
}

//区别在于引用&
