#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> a ;

    for ( int i = 1 ; i <= 6 ; i ++ )
        a.push_back( i ) ;

    random_shuffle( a.begin() , a.end() ) ;

    for ( int i = 0 ; i < a.size() ; i ++ )
        printf ( "%d " , a [ i ] ) ;

    return 0 ;
}