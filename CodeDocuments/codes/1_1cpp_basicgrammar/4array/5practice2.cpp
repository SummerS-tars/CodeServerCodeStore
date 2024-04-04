#include <iostream>

using namespace std;

int main()
{
    int n , k ;
    int a [ 100 ] ;

    cin >> n >> k ;
    for ( int i = 0 ; i < n ; i ++ )
        cin >> a [ i ] ;

    for ( int j = 1 ; j <= n ; j ++ )
    {
        if ( j <= n - k ) 
            cout << a [ k + j - 1 ] << ' ' ;
        else 
            cout << a [ j - n + k - 1 ] << ' ' ;
    }    

    return 0;
}
//顺时针旋转一次的概念：将最左边的数放在组右边

//另外一种思路，每一次先把最后一个数存下来，之后再将前面的数都后移一位（此时要从后往前执行）

/*更好的思路；
分三步
1.倒序输出
2.倒序后前k个翻转
3.剩余的也翻转
用到的函数reverse(在algorithm库中)*/

//reverse(a , a + k) 括号内的范围为（起始位置 ， 终止位置的下一个位置），可以理解为左闭右开