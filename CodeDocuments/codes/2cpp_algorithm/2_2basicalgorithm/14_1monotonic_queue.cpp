#include <iostream>

using namespace std;

const int N = 1e6 + 10 ;
int a[ N ] , mq[ N ] , hh = 1 , tt ;

int main()
{
    int n , k ;
    scanf("%d%d", &n , &k ) ;
    for ( int i = 0 ; i < n ; i ++ )
        scanf("%d" , &a[ i ] ) ;

    //借助递增单调队列，模拟窗口输出最大值
    //具体是用mq[] 记录下标，下标对应的a[] 的值单调
    //不直接记录值的原因是窗口移动需要参考下标，否则无从判断是否要弹出队首元素
    for ( int i = 0 ; i < n ; i ++ )
    {
        if ( tt >= hh && i - k + 1 > mq[ hh ] ) hh ++ ;
        
        while ( tt >= hh && a[ mq[ tt ] ] >= a[ i ] ) tt -- ;
        mq[ ++ tt ] = i ;
        
        if ( i > k - 1 ) 
            printf("%d ",  a[ mq[ hh ] ] ) ;
    }
    puts("") ;//puts输入自带换行

    hh = 1 , tt = 0 ;//重新初始化
    for ( int i = 0 ; i < n ; i ++ )
    {
        if ( tt >= hh && i - k + 1 > mq[ hh ] ) hh ++ ;

        while ( tt >= hh && a[ mq[ tt ] ] <= a[ i ] ) tt -- ;
        mq[ ++ tt ] = i ;

        if ( i > k - 1 )
            printf("%d",  a[ mq[ hh ] ] ) ;        
    }

    return 0 ;
}