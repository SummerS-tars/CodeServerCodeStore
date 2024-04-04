#include <cstdio>
#include <iostream>

using namespace std;

int main()
{
    int X ;
    float Y ;

    cin >> X ;
    cin >> Y ;

    printf("%.3f km/l", X / Y );
    //"%.xf" will automatically use rounding-off method(四舍五入法)

    return 0;
}