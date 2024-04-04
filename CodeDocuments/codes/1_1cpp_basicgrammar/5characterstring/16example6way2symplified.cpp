#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str , substr ;
    while ( cin >> str >> substr ) 
    {
        //寻找最大值的简化方式
        int p = 0 ;
        for ( int i = 1 ; i < str.size() ; i ++ )
            if ( str [ p ] < str [ i ] ) p = i ;
        
        cout << str.substr ( 0 , p + 1 ) + substr + str.substr ( p + 1 ) << endl ;
    }

    return 0 ;
}