#include <iostream>

using namespace std;

int main()
{
    int n ;
    cin >> n ;

    /*
    要求：
    1.输入n对整数对
    2.求出每对之间所有奇数的和
    输出：
    1.每对得到的结果占一行（没有就是0）
    */

    for ( int i = 1 ; i <= n ; i ++ )
    {
        int x , y ;
        cin >> x >> y ;

        int sum = 0 , big , small ;
        if ( x - y > 0 )  big = x , small = y ;
        else  big = y , small = x ;
        //找出x，y中的大值以应用于约束求值范围
        //可以使用swap简化此过程，交换两者的值(其在algorithm库内)
        for ( int j = small + 1 ; j < big ; j ++ )
        {
            if ( abs(j % 2) == 1 ) sum += j ;

        }
        cout << sum << endl ;

    }

    return 0;
}