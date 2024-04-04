#include <iostream>

using namespace std;

void calculate ( int a , int b , int& out1 , int& out2 )
{
    out1 = a * b ;
    out2 = a / b ;

    return ;
}

int main()
{
    int a , b ;
    scanf ( "a = %d\nb = %d" , &a , &b ) ;

    int mul , div ;
    int& out1 = mul ;
    int& out2 = div ;

    calculate ( a , b , out1 , out2 ) ;

    cout << "a * b = " << mul << endl ;
    cout << "a / b = " << div << endl ;

    return 0;
}