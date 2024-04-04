#include <cstdio>
#include <iostream>

using namespace std;

int main()
{
    double A , B , C ;
    //sometime although the A , B , C dont have too many decimal places,but it is some kine big ,we use double to confirm it psession.

    scanf("%lf%lf%lf", &A , &B , &C );

    printf("TRIANGULO: %.3lf\n", A * C / 2 );
    printf("CIRCULO: %.3lf\n", 3.14159 * C * C );
    printf("TRAPEZIO: %.3lf\n", ( A + B ) * C / 2 );
    printf("QUADRADO: %.3lf\n", B * B );
    printf("RETANGULO: %.3lf\n", A * B );
    //printf will not automatically plus \n so we should manually plus \n in "".

    return 0;
}