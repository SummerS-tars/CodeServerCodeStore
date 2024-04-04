#include <iostream>

using namespace std;

int main()
{
    int a , b , c , d ;

    a = 6 ;
    b = a ++ ;
    cout << a << " " << b << endl ;

    c = ++ a ;
    cout << a << " " << c << endl ;

    d = 5 ;
    d += a;
    cout << d << endl ;

    return 0;
    //actually the "a ++"" ot "++ a" themselves are independent statements which mean that "a = a + 1" .
    //but they have some differences in the statements above,and the main difference is the execution order.
    

}