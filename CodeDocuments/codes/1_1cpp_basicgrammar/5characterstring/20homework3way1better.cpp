#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s ;
    getline ( cin , s ) ;

    string r ;
    for ( int i = 0 ; i < s.size() ; i ++ )
        if ( s [ i ] != ' ' ) r += s [ i ] ;
        else 
        {
            r += ' ' ;
            
            int j = i ;
            while ( j < s.size() && s[ j ] == ' ' ) j ++ ;
            //双指针算法
            i = j - 1 ;
        }

    cout << r << endl ;

    return 0;
}