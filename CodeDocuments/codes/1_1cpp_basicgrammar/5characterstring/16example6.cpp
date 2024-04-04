#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str , substr ;
    while ( cin >> str >> substr ) 
    {
        int max = str [ 0 ] , d = 0 ;
        for ( int i = 1 ; i < str.size() ; i ++ )
            if ( max < str [ i ] ) 
                max = str [ i ] , d = i ;

        //此处如何较好的操作存在疑问
        for ( int i = 0 ; i < str.size() ; i ++ )
        {
            cout << str [ i ] ; 
            if ( i == d ) cout << substr ;
        }

        cout << endl ;
    }

    return 0 ;
}