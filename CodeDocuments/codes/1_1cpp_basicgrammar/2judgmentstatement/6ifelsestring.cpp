//if-else连写
#include <iostream>

using namespace std;

int main()
{
    int g ;
    cin >> g ;

    if ( g >= 85 ) cout << 'A' << endl ;
    else if ( g >= 70 ) cout << 'B' << endl ;
    else if ( g >= 60 ) cout << 'C' << endl ;
    else cout << 'D' << endl ;

    return 0;

}
//对于if-else且多条件，可以换成这种写法，更加好看而紧凑