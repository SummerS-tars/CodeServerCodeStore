#include <iostream>

using namespace std;

int main()
{
    int A1 , A2 , N1 , N2 ;
    float P1 , P2 ;
    //if the numbers need better psession,we can replace the float with double

    cin >> A1 >> N1 >> P1 ;
    cin >> A2 >> N2 >> P2 ;
    
    printf("VALOR A PAGAR: R$ %.2f", N1 * P1 + N2 * P2 );

    return 0;

}