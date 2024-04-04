#include <iostream>

using namespace std;

const int N = 1e6 + 10 ;

int n ;
int q [ N ] ;

void quick_sort ( int q [] , int l , int r ) 
{
    if ( l >= r ) return ;//判边界

    int x = q [ r ] , i = l - 1 , j = r + 1 ;//细节1：要注意，留余量!
    //细节2：边界处理要妥当，否则会递归死循环进入Segmentation Fault
    while ( i < j )//每次移动交换算一次迭代
    {
        do i ++ ; while ( q [ i ] < x ) ;
        do j -- ; while ( q [ j ] > x ) ;
        //注意do-while 语句与 while 语句或 for 语句的区别
        //do-while 语句一定会先执行一次
        if ( i < j ) swap ( q [ i ] , q [ j ] ) ;
    }

    quick_sort ( q , l , i - 1 ) ;
    quick_sort ( q , i , r ) ;
}

int main()
{
    scanf ( "%d" , &n ) ;
    for ( int i = 0 ; i < n ; i ++ ) scanf ( "%d" , &q [ i ] ) ;

    quick_sort ( q , 0 , n - 1 ) ;

    for ( int i = 0 ; i < n ; i ++ ) printf ( "%d " , q [ i ] ) ;

    return 0;
}