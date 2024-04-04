#include <iostream>
#include <string>

using namespace std;

int main()
{
    //转化法，比如统一转化为小写字母
    string s1 , s2 ;
    getline ( cin , s1 ) ;
    getline ( cin , s2 ) ;
    //一定要注意输入字符串时候含有空格
    //getline很容易多出回车 '\n'

    for ( int i = 0 ; i < s1.size() ; i ++ ) 
        if ( s1 [ i ] >= 'A' && s1 [ i ] <= 'Z' ) 
            s1[ i ] = s1 [ i ] + 'a' - 'A' ;

    for ( int i = 0 ; i < s2.size() ; i ++ ) 
        if ( s2 [ i ] >= 'A' && s2 [ i ] <= 'Z' ) 
            s2[ i ] = s2 [ i ] + 'a' - 'A' ;

    if ( s1 < s2 ) cout << '<' << endl ;
    else if ( s1 == s2 ) cout << '=' << endl ;
    else cout << '>' << endl ;

    return 0;
}