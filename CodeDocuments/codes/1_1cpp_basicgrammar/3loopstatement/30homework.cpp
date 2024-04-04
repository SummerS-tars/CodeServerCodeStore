#include <iostream>

using namespace std;

int main()
{
    int n ;
    cin >> n; 

    //利用曼哈顿距离
    for ( int i = 1 ; i <= n ; i ++ )
    {
        for ( int j = 1 ; j <= n ; j ++ )\
        {
            if ( abs(n / 2 + 1 - i) + abs(n / 2 + 1 - j) > n / 2 ) cout << ' ' ;
            else cout << '*' ;
        }

        cout << '\n' ;
    }

    return 0 ;
}