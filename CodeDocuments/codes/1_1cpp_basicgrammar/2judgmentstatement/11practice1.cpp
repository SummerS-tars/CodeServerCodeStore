#include <iostream>

using namespace std;

int main()
{
    int a ,b ,c ;

    cin >> a >> b >> c ;
    
    /*
    a >= b && a >= c a max
    b >= c b ma
    c max*/
    if ( a >= b && a >= c) cout << a ;
    else if ( b >= c ) cout << b ;
    else  cout << c ;

    return 0;


}
//watch out that we cant write a > b > c ;
//because a > b actually means a bool value (0false or 1yes) .