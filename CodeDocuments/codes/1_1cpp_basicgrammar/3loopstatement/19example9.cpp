#include <iostream>

using namespace std;

int main()
{
    int n , m ;
    cin >> n >> m ;

    /*
    要求：
    1.矩阵 n行 m列
    2.每行末尾数字替换为PUM
    实现思路；
    1.行套列输出
    2.列末尾直接输出PUM*/
    /*思路二；
    1.每行输出m-1个数，最后在外循环输出一次PUM，并进行循环变量的自加*/

    int num = 1 ;
    for ( int i = 1 ; i <= n ; i ++ )
    {
        for ( int j = 1 ; j <= m ; j ++ , num ++)
        {
            if ( j == m ) cout << "PUM" << ' ' ;
            else cout << num << ' ' ;

        }
        cout << '\n' ;

    }

    return 0;
}