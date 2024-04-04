#include <cstdio>
#include <iostream>

using namespace std;

int main()
{
    int N , H ;
    float P ;
    
    cin >> N ;
    cin >> H ;
    cin >> P ;

    printf("NUMBER = %d\nSALARY = U$ %.2f" , N , H * P );

    return 0;
}