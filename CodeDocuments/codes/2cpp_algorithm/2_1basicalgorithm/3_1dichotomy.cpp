//dichotomy二分法
#include <iostream>

using namespace std;

int n , q ;
const int N = 1e5 + 10 ;
int a [ N ] ;

int main()
{
    scanf ( "%d%d" , &n , &q ) ;
    
    for ( int i = 0 ; i < n ; i ++ ) 
        scanf ( "%d" , &a [ i ] ) ;

    while ( q -- )
    {
        int k ;
        scanf ( "%d" , &k ) ;

        int l = 0 , r = n - 1;//初始化l&r
        while ( l < r )
        {
            int mid = l + r >> 1 ;
            if ( a [ mid ] >= k ) r = mid ;
            else l = mid + 1 ;
        }//使用模板一寻找最接近的不大于k的位置

        if ( a [ l ] != k )
        {
            cout << "-1 -1" << endl ;
            continue ;
        }//判断是否有解

        int p1 = l ;
        l = 0 , r = n - 1 ;
        while ( l < r ) 
        {
            int mid = l + r + 1 >> 1 ;
            if ( a [ mid ] <= k ) l = mid ;
            else r = mid - 1 ;
        }//使用模板二寻找最接近的不小于k的位置
        int p2 = l ;
        cout << p1 << ' ' << p2 << endl ;
    }

    return 0 ;
}
/*总结：
1.不管使用哪个模板，mid本身需要包含在true的条件之内
2.如果右true，此时则要求mid自身包含在内，mid = l + r + 1 >> 1
    划分方式 [ l , mid - 1 ] & [ mid , r ]
3.如果左true，同2理有mid = l + r >> 1 
    划分方式 [ l , mid ] & [ mid + 1 , r ]*/