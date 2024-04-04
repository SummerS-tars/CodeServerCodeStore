#include <iostream>
#include <string>

using namespace std;

int main()
{
    string a [ 100 ] ;
    int k = 0 ;
    while ( cin >> a [ k ] ) k ++ ;

    for ( int i = 0 ; i < k ; i ++ ) 
        printf ( "%s " , a [ k - 1 - i ].c_str() ) ;
        //注意此处k要先减去1,因为实际上k是单词数还加上1

    return 0;
}