#include <iostream>

using namespace std;

int main()
{
    int a , b , c , d;

    cin >> a >> b >> c;

    d = ( a + b + abs( a - b )) / 2 ;
    //abd() may calculate the absolute value of the numerical value inside the ().
    
    printf("%d eh o maior", (d + c + abs( d - c ))/2 );
    return 0;
}