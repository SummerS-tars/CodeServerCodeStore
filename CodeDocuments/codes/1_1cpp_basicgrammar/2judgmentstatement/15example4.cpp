#include <iostream>

using namespace std;

int main()
{
    double a , b , c ;

    cin >> a >> b >> c ;

    if ( a + b <= c || a + c <= b || b + c <= a ) printf ( "Area = %.1lf" , ( a + b ) * c / 2.0 ) ;
    else printf ("Perimetro = %.1lf" , a + b + c ) ;
    
    return 0;
}