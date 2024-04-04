//思路一，使用reverse
#include <iostream>
#include <algorithm>
#include <cstring>

using namespace std;

int main()
{
    char str1 [ 30 ] , str2 [ 30 ] ;
    cin >> str1 >> str2 ;
    if ( strlen( str1 ) < strlen( str2 ) ) swap ( str1 , str2 ) ;
    //调整前者为长字符串

    int l = strlen( str1 ) ;
    for ( int j = 0 ; j < l ; j ++  )
    {
        //reverse的逆转操作
        reverse ( str1 , str1 + l ) ;
        reverse ( str1 , str1 + j ) ;
        reverse ( str1 + j , str1 + l ) ;

        //是否存在包含关系的判断
        string s1 = str1 , s2 = str2 ;
        if ( s1.size() < s2.size() ) swap ( s1 , s2 ) ;

        string a ;
        int i = 0 ;
        for ( char c : s1 ) 
        {
            //借助第三字符串来进行开头核对与积累比较
            if ( c == s2 [ i ] ) 
            {
                i ++ ;
                a += c ;
            }
            else
            {
                i = 0 ;
                a = '\0' ;
            }

            //当i达到s2的长度时说明a与s2相同了
            if ( i == s2.size() ) 
            {
                cout << "true" << endl ;
        
                return 0 ;
            }
        }
    }

    cout << "false" << endl ;

    return 0;
}