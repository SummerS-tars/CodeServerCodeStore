#include <iostream>

using namespace std;

int main()
{
    double a , p1 , p2 ;
    scanf ( "%lf" , &a ) ;
    if ( a >= 1 ) p1 = 1 , p2 = a ;
    else p1 = a , p2 = 1 ;

/*    while ( abs ( p1 * p1 - a ) > 1e-8 && abs ( p2 * p2 - a ) > 1e-8 )
    {
        double mid = ( p1 + p2 ) / 2 ;
        if ( mid * mid > a ) p2 = mid ;
        else p1 = mid ;
    }

    if ( abs ( p1 * p1 -a ) > abs ( p2 * p2  - a ) ) printf ( "%.6lf" , p2 ) ;
    else printf ( "%.6lf" , p1 ) ;*/

    //判定方式的升级，区间判断
    while ( p2 - p1 > 1e-8 )//经验问题，一般精度高两位
    {
        double mid = ( p1 + p2 ) / 2 ;
        if ( mid * mid > a ) p2 = mid ;
        else p1 = mid ;
    }

    printf ( "%.6lf\n" , p1 ) ;

    return 0 ;
}