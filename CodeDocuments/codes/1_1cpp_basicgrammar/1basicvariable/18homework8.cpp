#include <cstdio>
#include <iostream>

using namespace std;

int main ()
{
    int N , n1 , n2 , n3 , n4 , n5 , n6 , n7 ;

    cin >> N ;
    printf("%d" , N ) ;
    
    n1 = N / 100 ;
    printf("%d nota(s) de R$ 100,00\n", n1 ) ;
    N = N % 100 ;

    n2 = N /50 ;
    printf("%d nota(s) de R$ 50,00\n", n2 ) ;
    N = N % 50 ;

    n3 = N / 20 ;
    printf("%d nota(s) de R$ 20,00\n", n3 ) ;
    N = N % 20 ;

    n4 = N / 10 ;
    printf("%d nota(s) de R$ 10,00\n", n4 ) ;
    N = N % 10 ;

    n5 = N / 5 ;
    printf("%d nota(s) de R$ 5,00\n", n5 ) ;
    N = N % 5 ;

    n6 = N / 2 ;
    printf("%d nota(s) de R$ 2,00\n", n6 ) ;
    
    n7 = N % 2 ;
    printf("%d nota(s) de R$ 1,00\n", n7 ) ;

    return 0;
}