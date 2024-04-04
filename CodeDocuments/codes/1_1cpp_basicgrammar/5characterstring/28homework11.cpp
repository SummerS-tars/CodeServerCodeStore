#include <iostream>
#include <string>

using namespace std;

int main()
{
    /*实现思路；
    1.因式分解
    2.分块
    3.核对
        way1 全拆解再核对
        way2 使用第一个部分还原等长字符串再核对*/
    string s ;
    while ( cin >> s && s != ".") 
    {
        int l = s.size() ;

        for ( int i = 1 ; i <= l ; i ++ )
        {
            //way1
            if ( l % i != 0 ) continue ;
            else
            {
                int n = l / i ;
                string a [ n ] ;
                int k = 0 , j = 0 ;
                for ( char c : s )
                {
                    a [ k ] += c ;
                    j ++ ;

                    if ( j == i ) 
                    {
                        k ++ ;
                        j = 0 ;
                    }
                }

                bool equal = true ;
                for ( int x = 0 ; x < n ; x ++ )
                    if ( a [ x ] != a [ 0 ] ) equal = false ;
                
                if ( equal )
                {
                    cout << n << endl ;
                    break ;
                }
            }
        }
    }

    return 0;
}