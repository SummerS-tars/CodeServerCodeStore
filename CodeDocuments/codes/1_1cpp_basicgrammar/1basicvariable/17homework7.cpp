#include <cstdio>
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double x1 , x2 , y1 , y2 ;

    cin >> x1 >> y1 ;
    cin >> x2 >> y2 ;

    printf("%.4lf", sqrt( ( x1 - x2 ) * ( x1 - x2 ) + ( y1 - y2 ) * ( y1 - y2 ) ));

    return 0;
}