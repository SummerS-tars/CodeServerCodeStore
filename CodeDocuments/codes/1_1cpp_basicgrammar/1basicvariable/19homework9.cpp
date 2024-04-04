#include <cstdio>
#include <iostream>

using namespace std;

int main()
{
    int N , H , M , S ;

    cin >> N ;

    H = N / 3600 ;
    N = N % 3600 ;
    M = N / 60 ;
    S = N % 60 ;
    //另外一个思路，H = N /3600 ， M = N % 3600 / 60 ， ⭐S = N % 60；
    
    printf("%d:%d:%d", H , M , S );

    return 0;
}