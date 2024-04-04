#include <iostream>

using namespace std;

int main()
{
    int N , y , m , d ;

    cin >> N ;

    y = N / 365 ;
    N = N % 365 ;
    m = N / 30 ;
    d = N % 30 ;
    
    printf("%d ano(s)\n%d mes(es)\n%d dia(s)", y , m , d );

    return 0;
}