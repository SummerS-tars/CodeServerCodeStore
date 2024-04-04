#include <iostream>

using namespace std;

const int N = 1e5 + 10 ;
int n ;
int q [ N ] , kmp [ N ] ;

typedef long long LL ;

LL merge_sort ( int q[] , int l , int r )
{
    if ( l >= r ) return 0 ;//递归边界，此时该区间已分段完毕
    
    int mid = l + r >> 1 ;

    LL res = merge_sort ( q , l , mid ) + merge_sort ( q , mid + 1 , r ) ;

    int k = 0 , i = l , j = mid + 1 ;
    while ( i <= mid && j <= r )
        if ( q [ i ] <= q [ j ] ) kmp [ k ++ ] = q [ i ++ ] ;
        else kmp [ k ++ ] = q [ j ++ ] , res += mid - i + 1 ;
    /*实现思路：
    可知在上述循环过程中，i<j一定符合
    又两段均为从小到大有序序列，q[ i ] > q[ j ],即可说明q[ j ]为当前剩下的两端序列中的最小值
    即l段从i往后到mid的变量值均大于q[ j ],因此res加上mid - i + 1*/
    while ( i <= mid ) kmp [ k ++ ] = q [ i ++ ] ;
    while ( j <= r ) kmp [ k ++ ] = q [ j ++ ] ;

    for ( int i = l , j = 0 ; i<= r ; i ++ , j ++ ) q [ i ] = kmp [ j ] ;

    return res ;
}

int main()
{
    scanf ( "%d" , &n ) ;
    for ( int i = 0 ; i < n ; i ++ )
        scanf ( "%d" , &q [ i ] ) ;

    printf ( "%lld\n" , merge_sort ( q , 0 , n - 1 ) ) ;

    return 0 ;
}