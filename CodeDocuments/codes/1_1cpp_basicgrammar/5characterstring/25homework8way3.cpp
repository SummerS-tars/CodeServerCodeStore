#include <iostream>
#include <string>

using namespace std;

int main() 
{
    string l , s ;
    
    while ( cin >> s ) 
    //进一步简化，直接利用单词之间的空格在输入端进行比较
    {
        if ( s.back() == '.' ) s.pop_back() ;

        if ( l.size() < s.size() ) l = s ;
    }

    cout << l << endl ;

    return 0;
}