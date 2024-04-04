#include <iostream>

using namespace std;

int main()
{
    int a , b ;
    char c ;//？char到底怎么用啊！！！？？
    cin >> a >> b >> c ;//cin可以自动忽略空格,scanf则不可

    if ( c ='+') cout << a + b << endl ;
    else if ( c ='-') cout << a - b << endl ;
    else if ( c ='*') cout << a * b << endl ;
    else if ( c ='/')
         if ( b = 0 ) cout << "Divided by zero!" << endl ;
         else cout << a / b << endl ;
    else cout << "Invalid operator!" << endl ;
    //此条留作耻辱柱，给我好好记住judgment symbol!!!

    return 0;

}