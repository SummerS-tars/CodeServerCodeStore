//fantasy way to do this!!!
/*进阶思路；
1.依然是二维坐标思维
2.定义单位变化数组
3.简化方向变化判定条件
实现方式：
1.首先定义数组（可不必依照n与m而直接定义足够的数组大小）
2.巧妙定义 di [ ] = { 0 , 1 , 0 , -1 } and dj [ ] = { 1 , 0 , -1 , 0 }
3.定义方向变量d = 0 or 1 or 2 or 3
4.巧妙使用判定条件{i < 0 || i >= n || j < 0 || j >= m || a [ i ] [ j ] }
//“撞壁”的分类：超限or重复
//注：此处数组应初始化过*/

#include <iostream>

using namespace std;

int a [ 100 ] [ 100 ] ;
//为防止超出内存，只用全局变量（顺带可省去初始化的操作）

int main()
{
    int n , m ;
    cin >> n >> m ;

    int di [ ] = { 0 , 1 , 0 , -1 } , dj [ ] = { 1 , 0 , -1 , 0 } ;

    for ( int i = 0 , j = 0 , k = 1 , d = 0 ; k <= n * m ; k ++ )
    {
        a [ i ] [ j ] = k ;
        
        int I = i + di [ d ] , J = j + dj [ d ] ;
        if ( I < 0 || I >= n || J < 0 || J >= m || a [ I ] [ J ] ) 
        {
            d ++ ;
            d = d % 4 ;

        }

        i += di [ d ] , j += dj [ d ] ;
        
    }

    for ( int i = 0 ; i < n ; i ++ )
    {
        for ( int j = 0 ; j < m ; j ++ )
            printf ("%d " , a[ i ] [ j ] ) ;

        printf ( "\n" ) ;
    }

    return 0 ;
}