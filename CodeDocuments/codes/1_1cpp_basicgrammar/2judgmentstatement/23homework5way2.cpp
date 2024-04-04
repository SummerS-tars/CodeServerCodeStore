#include <cstdio>

int main()
{
    int a , b , c , d ;

    scanf ("%d%d%d%d", &a , &b , &c , &d ) ;

    int n1 = a * 60 + b , n2 = c * 60 + d ;

    if ( n1 < n2 )
        printf ("O JOGO DUROU %d HORA(S) E %d MINUTO(S)", (n2 - n1 ) / 60 , ( n2 - n1 ) % 60 ) ;
    else    
        printf ("O JOGO DUROU %d HORA(S) E %d MINUTO(S)", (n2 + 24 * 60 - n1 ) / 60 , ( n2 + 24 * 60 - n1 ) % 60 ) ;

    return 0;
}