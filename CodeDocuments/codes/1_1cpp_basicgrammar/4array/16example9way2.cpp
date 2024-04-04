//每个位点的值实际为每个位点的坐标到四周边的距离的最小值
#include <iostream>

using namespace std;

int main()
{
    int n ;
    //掌握一些基本的简化写法
    while ( cin >> n , n > 0 ) 
    {
        for ( int i = 0 ; i < n ; i ++ )
        {
            for ( int j = 0 ; j < n ; j ++ )
            {
                //距离计算方法，给点阵周围再加一圈，按坐标差计算即可；
                int x1 = i + 1  , x2 = j + 1 , x3 = n - i , x4 = n - j ;
                if ( x1 > x2 ) x1 = x2 ;
                if ( x3 > x4 ) x3 = x4 ;
                if ( x1 > x3 ) x1 = x3 ;
                //较为笨拙的方法将x1固定为最小值
                /*min/max 只用于比较两个数的大小——重点“两个”
                例如上部分即可改成
                min ( min ( x1 , x2 ) , min ( x3 , x4 ) )*/

                printf ( "%d ", x1 ) ;

            }

            printf ( "\n" ) ;

        }

        printf ( "\n" ) ;
    }

    return 0 ;

}