#include <iostream>

using namespace std;

int main()
{
    int n ;
    cin >> n ;

    int a = 1 , b  = 1 , c , i = 1 ;
    while ( i < n )
    {
        c = a + b ;
        a = b ;
        b = c ;
        i ++ ;
        //养成好习惯，写完看一眼，想一想循环能不能结束
        
    }
    cout << a << endl ;

    return 0;
}