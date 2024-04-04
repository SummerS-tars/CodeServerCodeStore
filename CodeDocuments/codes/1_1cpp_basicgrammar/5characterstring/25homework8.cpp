#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s ;
    getline ( cin , s ) ;

    string a [ 500 ] ;
    int k = 0 ;
    for ( char c : s ) 
    {
        if ( c == ' ' ) 
        {
            k ++ ;
            continue ;
        }
        //k记录了正在录入的单词的序列号
        else if ( c == '.' ) continue ;
        else a [ k ] += c ;
    }

    int max = 0 , d = 0 ;
    for ( int i = 0 ; i <= k ; i ++ )
        if ( max < a [ i ].size() ) 
        {
            max = a [ i ].size() ;
            d = i ;
        }
    
    cout << a [ d ] << endl ;

    return 0;
}