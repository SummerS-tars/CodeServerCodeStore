#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    string s , s1 , s2 , str , str1 [ 3 ] ;
    cin >> str ;

    int i = 0 ;
    for ( char c : str )
    {
        if ( c == ',' ) 
        {
            i ++ ;
            continue ;
        }
        else str1 [ i ] += c ;
    }

    s = str1 [ 0 ] , s1 = str1 [ 1 ] , s2 = str1 [ 2 ] ;

    //第一部分；寻找最靠左的s1开头坐标
    string a ;
    i = 0 ;
    int j = 0 , d1 = -1 ;
    for ( char c : s ) 
    {
        if ( c == s1 [ i ] ) 
        {
            i ++ ;
            a += c ;
        }
        else
        {
            i = 0 ;
            a = '\0' ;
        }
        j ++ ;
        
        if ( i == s1.size() )
        {
            d1 = j - i ;
            break ;
        }
    }
    
    if ( d1 == -1 ) 
    {
        cout << "-1" << endl ;

        return 0;
    }

    //第二部分：逆转s与s2，再参照第一部分步骤即可
    //way1
    reverse ( s.begin() , s.end() ) ;
    reverse ( s2.begin() , s2.end() ) ;

    a = '\0' ;
    i = 0 ;
    j = 0 ;
    int d2 = -1 ;
    for ( char c : s ) 
    {
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
        j ++ ;
        
        if ( i == s2.size() )  
        {
            d2 = j - i ;
            break ;
        }
    }
    
    if ( d2 == -1 ) 
    {
        cout << "-1" << endl ;

        return 0;
    }

    int l = s.size() , l1 = s1.size() , l2 = s2.size() ;
    if ( l - d1 - d2 < l1 + l2 ) 
    {
        cout << "-1" << endl ;

        return 0 ;
    }
    else cout << l - d1 - d2 - l1 - l2 << endl ;

    return 0;
}