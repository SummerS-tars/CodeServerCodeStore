#include <iostream>

using namespace std;

int main()
{
    int n ;
    cin >> n ;

    int x = 1 ;

    for ( int i = 1 ; i <= n ; i ++ )
    {

        for ( int j = 1 ; j <= n ; j ++ )
        {
            //cout << x << " " ;
            //对以上进行优化:
            printf ("%3d" , x ) ;
            x ++ ;
            //x ++也可以放在第二套for的expression内部
        }

        cout << "\n" ;
    }

    return 0;
}