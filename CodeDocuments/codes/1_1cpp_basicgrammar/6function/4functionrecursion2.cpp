#include <iostream>

using namespace std;

int fact ( int n )
{
    if ( n == 1 ) return 1 ;
    //此处1即是递归边界

    return n * fact ( n - 1 ) ;
}
//多去适应一下递归得思维模式
/*
f ( 5 )
5 * f ( 4 )
5 * 4 * f ( 3 ) 
5 * 4 * 3 * f ( 2 )
5 * 4 * 3 * 2 * f ( 1 ) 
5 * 4 * 3 * 2 * 1 
5 * 4 * 3 * 2
5 * 4 * 6
5 * 24
120
*/

int main()
{
    cout << fact ( 5 ) << endl ;

    return 0;
}