#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int k ;
    cin >> k ;//k个数据

    vector <float> a ;
    float n ;
    while ( k -- )
    {
        cin >> n ;
        a.push_back ( n ) ;
    }//数据导入

    float min = a [ 0 ] ;
    for ( auto v : a )
        if ( v < min ) min = v ;
    cout << min << endl ;//寻找最小值减少计算量
    
    int i = 1 ;
    float e ;
    while ( i <= 10 )
    {
        e = min / i ;//寻找合适的元电荷的值
        printf ( "e = %.3f\n" , e ) ;

        for ( auto v : a ) 
        {
            float num = v / e ;
            int cmp1 = num , cmp2 = cmp1 + 1;
            printf ( "%.1f " , num ) ;
        }//输出理论上的各个油滴所带元电荷的数量
        puts ( "\n" ) ;
        i ++ ;
    }

    return 0;
}