#include <iostream>

using namespace std;

int main()
{
    int a , b ;

    cin >> a >> b ;

    /*
    a < b 同一天 b - a 
    a >= b b在下一天 b + 24 -a*/
    if ( a < b ) cout << "O JOGO DUROU " <<  b - a <<" HORA(S)" << endl ;
    else cout << "O JOGO DUROU " <<  b + 24 - a  <<" HORA(S)" << endl ;

    return 0;
}