#include <iostream>

using namespace std;

int main()
{
    int n ;
    cin >> n ;

        /*
        分两部分
        一：找起点
        二：定每行的数量
        */
        /*第一部分：
        n / 2 得第一行的空行数量
        减少到零再开始增加至 n / 2
        */
        /*第二部分：
        利用第一部分的中间变量，每行等于9 - 缩进量 * 2
        */

    for ( int x = n / 2 , i = 1 ; i <= n ; x -- , i ++ )
    {
        int absx = abs(x) ;
        for ( int j = 1 ; j <= absx ; j ++ )
            cout << ' ' ;
        for ( int j = 1 ; j <= (n - 2 * absx ) ; j ++ )
            cout << '*' ;

        cout << '\n' ;

    }

    return 0;
}
//另一种思路：考虑曼哈顿距离
//见讲解视频