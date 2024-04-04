//heap_sort堆排序
/*数据结构简介：
  堆：存储在一维数组形成的完全二叉树上
  支持操作：
    1）插入一个数
    2）求集合中的最小值
    3）删除最小值
    4）删除任意一个元素
    5）修改任意一个元素
    其中前三个可以在STL中的堆中直接实现
  具体定义方式：
    常见方法，以1为堆顶序号，设某节点为n，其左右子节点分别为2*n,2*n+1*/
  
//以下为手写实现的小根堆（每个节点，都小于左右子节点）
#include <iostream>
#include <algorithm>

using namespace std;

const int N = 1e5 + 10 ;
int h[ N ] , cnt ;//cnt记录堆的元素个数

void down ( int u )//堆的基本操作，同时还有up此处还不必要就没写
{
    int t = u ;
    //以下两句使t停留在三个节点的最小值上
    if ( u * 2 <= cnt && h[ u * 2 ] < h[ t ] ) t = u * 2 ;
    if ( u * 2 + 1 <= cnt && h[ u * 2 + 1 ] < h[ t ] ) t = u * 2 + 1 ;
    if ( u != t )
    {
        swap( h[ u ] , h[ t ] ) ;
        down( t ) ;//递归实现堆排序
    }
}

int main()
{
    int n , m ;
    scanf("%d%d" , &n , &m ) ;
    cnt = n ;
    for ( int i = 1 ; i <= n ; i ++ ) scanf("%d" , &h[ i ] ) ;

    for ( int i = n / 2 ; i ; i -- ) down( i ) ;

    while ( m -- )
    {
        printf("%d " , h[ 1 ] ) ;
        h[ 1 ] = h[ cnt -- ] ;
        down( 1 ) ;
    }//实质上后两句是删除头节点的方法：先让尾节点覆盖头节点，在让其down至堆底

    puts("") ;

    return 0 ;
}