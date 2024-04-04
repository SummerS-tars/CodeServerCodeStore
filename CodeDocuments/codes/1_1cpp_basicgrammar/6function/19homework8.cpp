#include <iostream>

using namespace std;

int get_unique_count ( int a [ ] , int n )
{
    /*实现思路；
    1.给出另外一个判断数组b
    2.遍历a数组
    3.对每个数遍历b
        1/无相同 录入
        2/相同 进入2.判断下一个数
    细节解决：
    1.防止耗时太久，给出sum来限制b遍历次数
    2.sum也可以用于记录unique数
    3.b需要进行初始化，不妨设为0*/
    int b [ n ] = { 0 } , sum = 1 ;
    b [ 1 ] = a [ 0 ] ;
    for ( int i = 0 ; i < n ; i ++ )
    {
        bool unique = true ;
        for ( int j = 1 ; j <= sum ; j ++ )
            if ( a [ i ] == b [ j ] )
            {
                unique = false ;
                break ;
            }
        //unique性判断
        
        if ( unique ) b [ ++ sum ] = a [ i ] ;
    }

    return sum ;
}

int main()
{
    int n ;
    cin >> n ;

    int a [ n ] ;
    for ( int i = 0 ; i < n ; i ++ )
        cin >> a[ i ] ;
    
    cout << get_unique_count ( a , n ) << endl ;

    return 0;
}