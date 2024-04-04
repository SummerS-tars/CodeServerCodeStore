#include <iostream>

using namespace std;

int main()
{
    int n ;
    cin >> n ;

    for ( int i = 1 ; i <= n ; i ++ )
    {
        if ( n % i == 0 ) cout << i << endl ;
        //判断约数——模等于0
        
    }
     return 0;
}