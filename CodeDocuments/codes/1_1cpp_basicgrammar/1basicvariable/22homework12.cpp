#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int R ;
    
    cin >> R ;

    printf("VOLUME = %.3f", ( 4 / 3.0 ) * 3.14159 * R * R * R ) ;
    //watch out that sometimes (4/3) not = 1.333...in fact we should enter (4/3.0) to get the float.

    return 0;

}