#include <iostream>

using namespace std;

int main()
{
    float n ;
    scanf ("%f" , &n ) ;

    /*需要进行分类讨论：
    1.大于等于1 l = 1 , r = n 
    2.大于等于0小于1 l = n , r = 1  
    3.大于等于-1小于0 l = -1 , r = n 
    4.小于-1 l = n , r = -1*/
    double l , r ;
    if ( n >= 1 ) l = 1 , r = n ;
    else if ( n >= 0 && n < 1 ) l = n , r = 1 ;
    else if ( n >= -1 && n < 0 ) l = -1 , r = n ;
    else l = n , r = -1 ;
    while ( abs ( l - n ) > 0.000001 )
    {
        double mid = ( l + r ) / 2 ;
        if ( mid * mid * mid > n ) r = mid ;
        else l = mid ;
    }

    printf ( "%.6lf\n" , l ) ;

    return 0 ;
}