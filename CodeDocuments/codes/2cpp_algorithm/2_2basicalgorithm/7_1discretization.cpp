//离散化应用
//本体思路是离散化原数据的下标，再通过键值对寻找对应下标的值
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

typedef pair<int , int> PII;

const int N = 3e5 + 10 ;

int n , m ;
int a[ N ] , s[ N ] ;

vector<int> alls;
vector<PII> add ,query ;

int find( int x )
{
    int l = 0 , r = alls.size() - 1 ;
    while ( l < r )
    {
        int mid = l + r >> 1 ;
        if ( alls[ mid ] >= x ) r = mid ;
        else l = mid + 1 ;
    }

    return r + 1 ;
}

int main()
{
    scanf("%d%d" , &n , &m ) ;//alls用于存入所有需要使用的下标，方便后续进行离散化
    for ( int i = 0 ; i < n ; i ++ )
    {
        int x , c ;
        scanf("%d%d", &x , &c ) ;
        add.push_back( { x , c } ) ;//存入操作对，x是下标键，c是操作值

        alls.push_back( x ) ;//将下标存入alls中
    }

    for ( int i = 0 ; i < m ; i ++ )
    {
        int l , r ;
        scanf("%d%d" , &l , &r ) ;
        
        query.push_back( { l , r } ) ;//请求对，载入左侧与右侧原始坐标

        alls.push_back( l ) ;
        alls.push_back( r ) ;
    }

    //去重步骤（因为下标可多次出现）
    sort( alls.begin() , alls.end() ) ;
    alls.erase( unique( alls.begin() , alls.end() ) , alls.end() );//unique一般操作有序序列，将重复元素放在非重元素的后方，并返回最后一个非重元素的下一个位置

    //处理操作对
    for ( auto item : add )
    {
        int x = find( item.first ) ;//找到add处理的位置，也就是在alls中的下标，也就是说alls的下标就是原始坐标的映射
        a[ x ] += item.second ;//而我们的alls的离散化后的下标还需要对应原坐标的位置，因此再开一个a数组用于记录原坐标对应的值，并用s记录前缀和
    }

    //预处理前缀和
    for ( int i = 1 ; i <= alls.size() ; i ++ )
        s[ i ] = s[ i - 1 ] + a[ i ] ;

    //处理询问
    for ( auto item : query )
    {
        int l = find( item.first ) , r = find( item.second ) ;//在离散化后的数组上寻找原始坐标对应的数组位置以便于使用前缀和
        printf("%d\n" , s[ r ] -  s[ l - 1 ] ) ;
    }

    return 0;
}