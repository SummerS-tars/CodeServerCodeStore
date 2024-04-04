//monotonic(单调的)
#include <iostream>

using namespace std;

const int N =1e5 + 10 ;
int a[ N ] , mstk[ N ] , tt ;

int main()
{
    int n ;
    scanf("%d" , &n ) ;
    for ( int i = 0 ; i < n ; i ++ )
        scanf("%d", &a[ i ] ) ;
    
    for ( int i = 0 ; i < n ; i ++ )
    {
        if ( tt )
        {
            while ( tt && mstk[ tt ] >= a[ i ] )
                tt -- ;//弹出mstk中不小于a[ i ]的元素
            if ( tt ) printf("%d " , mstk[ tt ] ) ;
            else printf("-1 ") ;
        }
        else printf("-1 ") ;
        
        mstk[ ++ tt ] = a[ i ] ;
    }

    return 0 ;
}