#include <iostream>

using namespace std;

int main()
{
    int n; 
    cin >> n ;

    /*
    要求：
        输入：
        1.n 
        2.a , t (c coney , r rat , f frog)

        输出：
        1.统计3个对象合总数
        2.3个对象各自的总数
        3.3个对象各自的数量占比（百分比形式）

    实现思路：
    1. >> n 
    2. for i 1~n 
        1) >> a >> t 
        2) judge t
        3) sum 1 or sum 2 or sum 3 += a
    3. calculate
        1) sum
        2) percentage
    */

    int sum1 = 0 , sum2 = 0 , sum3 = 0 , sum ;
    for ( int i = 1 ; i <= n ; i ++ )
    {
        int a ;
        char t ;
        cin >> a  >> t ;
        //需要注意的是，scanf是格式化读入的，因此%c不会自动过滤空格！！！，而要我们手动过滤
        //例如以上可以写成 printf ( "%d %c" , &a , &t ) ;
        //cin则会自动过滤掉空格、回车、制表符
        //而scanf优点在于可以复杂格式化输入(scanf意即 scan formula)
        //例如 scanf ("A=%d,B=%d", &a , &b ) ;

        if ( t == 'C') sum1 += a ;
        else if ( t == 'R') sum2 += a ;
        else sum3 += a ;
        
    }

    sum = sum1 + sum2 + sum3 ;

    printf ("Total: %d animals\nTotal coneys: %d\nTotal rats: %d\nTotal frogs: %d\n", sum , sum1 , sum2 ,sum3 ) ;
    printf ("Percentage of coneys: %.2f %%\nPercentage of rats: %.2f %%\nPercentage of frogs: %.2f %%\n", sum1 * 100 / (float)sum , sum2 * 100 / (float)sum , sum3 * 100 / (float)sum );

    return 0;
}