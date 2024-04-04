//interval_merge区间合并
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

typedef pair<int, int> PII;//放在命名空间之下，这样才可函数重载

vector<PII> p ;

int main()
{
    int n ; 
    scanf("%d" , &n ) ;

    for ( int i = 0 ; i < n ; i ++ )
    {
        int l , r ;
        scanf("%d%d" , &l , &r ) ;
        p.push_back( { l , r } ) ;
    }//读入不同的区间

    sort( p.begin() , p.end() ) ;//排序

    int sum = 0 , rmax = p[ 0 ].second ;
    for ( int i = 0 ; i < p.size() - 1 ; i ++ )
    {
        if ( rmax < p[ i + 1 ].first )
            sum ++ ;
        
        if ( rmax < p[ i + 1 ].second )
            rmax = p[ i + 1 ].second ;
    }
    sum ++ ;

    printf("%d" , sum ) ;

    return 0 ;
}