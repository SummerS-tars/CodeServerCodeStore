#include <iostream>

using namespace std;

struct Node
{
    int val ;
    Node* next = NULL ;
};

Node* head ;

void head_input( int x )//操作1
{
    head = new Node ;
    
    auto hin = head ;
    hin->val = x ;
    return ;
}

void k_del( int k )//操作2
{
    auto del_node = head ;
    for ( int i = 1 ; i < k ; i ++ )
        del_node = del_node->next ;//让指针指向第k个数
    
    if ( k != 0 ) 
        del_node->next = del_node->next->next ;//让del_node中含有的指针直接跳过下一个
    else
        head = head->next ;

    return ;
}

void k_ins( int k , int x )//操作3
{
    auto ins_node = head ;
    for ( int i = 1 ; i < k ; i ++ )
        ins_node = ins_node->next ;//让指针指向第k个数
    
    Node* ins = new Node ;
    ins->val = x ;
    ins->next = ins_node->next ;
    ins_node->next = ins ;//标准插入操作

    return ;
}

void Order( char od )//命令指导中转函数
{
    if ( od == 'H' )
    {
        int x ;
        scanf("%d" , &x ) ;
        head_input ( x ) ;
        return ;
    }
    else if ( od == 'D' )
    {
        int k ;
        cin >> k ;
        k_del( k ) ;
        return ;
    }
    else if ( od == 'I' )
    {
        int k , x ;
        scanf("%d%d" , &k , &x ) ;
        k_ins( k , x ) ;
        return ;
    }
    
    return ;
}

int main()
{
    int m ;
    scanf("%d\n" , &m ) ;

    for ( int i = 1 ; i <= m ; i ++ )
    {
        char od ;
        cin >> od ;//为什么用scanf总是被换行影响？不会过滤空行！！！
        Order( od ) ;
    }

    for ( auto p = head ; p ; p = p->next )
        printf("%d " , p->val ) ;

    return 0 ;
}