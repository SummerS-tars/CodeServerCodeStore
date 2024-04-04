#include <iostream>

using namespace std;

int main()
{
    double a ;

    int  p = 0 ;
    for ( int i = 1 ; i <= 6 ; i ++ )
    {
        cin >> a ;
        //重复输入的运用
        if ( a > 0 ) p ++ ;

    }
    cout << p << " positive numbers" << endl ;

    return 0;
}