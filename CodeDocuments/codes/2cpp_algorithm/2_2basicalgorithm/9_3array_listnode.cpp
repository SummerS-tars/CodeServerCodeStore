#include <iostream>

using namespace std;

/*v存节点的值
 *ne存储该节点到下一个节点的指针
 *ne[]中的下标存储该节点插入的序列号
 *head为头节点的指针
 *idx存储下一个要开辟的节点的"地址"/序列号*/
const int N = 1e5 + 10 ;
int v[ N ] , ne[ N ] , head , idx ;

void add_to_head ( int val )
{
    v[ idx ] = val ;
    ne[ idx ] = head ;
    head = idx ++ ;
    return ;
}

void del_k ( int k )
{
    if ( k == 0 )
        head = ne[ head ] ;
    else
        ne[ k - 1 ] = ne[ ne[ k - 1 ] ] ;//下标k-1是第k个插入的数（从0开始插入）
    return ;
}

void ins_to_k ( int k , int x )
{
    v[ idx ] = x ;
    ne[ idx ] = ne[ k - 1 ] ;
    ne[ k - 1 ] = idx ++ ;
    return ;
}

void operation ( char op )//操作判断
{
    if ( op == 'H' )//操作1
    {
        int val ;
        scanf("%d" , &val ) ;
        add_to_head( val ) ;
    }
    else if ( op == 'D' )//操作2
    {
        int k ;
        scanf("%d" , &k ) ;
        del_k ( k ) ; 
    }
    else if ( op == 'I' )
    {
        int k , x ;
        scanf("%d%d" , &k , &x ) ;
        ins_to_k ( k , x ) ;
    }

    return ;
}

void init ()//初始化
{
    head = -1 ;//!!!-1的意义在于虚拟一个类似于空指针的存在的head，使得第一次头插时，给链表尾部一个空指针（指向-1）
    idx = 0 ;
}

int main()
{
    int m ;
    scanf("%d" , &m ) ;

    init() ;

    while( m -- ) 
    {
        char op ;
        cin >> op ;
        operation ( op ) ;
    }

    for ( int i = head ; i != -1 ; i = ne[ i ] )
        printf("%d " , v[ i ] ) ;

    return 0 ;
}