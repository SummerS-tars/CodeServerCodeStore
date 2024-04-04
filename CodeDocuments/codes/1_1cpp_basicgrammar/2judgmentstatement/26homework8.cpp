#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double a , b , c ;

    cin >> a >> b >> c ;
    double d =  b * b - 4 * a * c ;

    if ( d < 0 || a == 0 ) cout << "Impossivel calcular" << endl ;
    else 
    {
        double n1 = ( 0 - b + sqrt(d) ) / ( 2 * a ) , n2 = ( 0 - b - sqrt(d) ) / ( 2 * a ) ;
        printf ("R1 = %.5lf\nR2 = %.5lf" , n1 , n2 ) ;

    }

    return 0;

}