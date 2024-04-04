#include <iostream>

using namespace std;

struct Node
{
    /* data */
    int val ;//存储值
    int t ;//记录被取用的顺序
    Node* next = NULL ;
};

Node* head ;
int times ;

void head_ins( int x )//操作1
{
    if ( ! head )
        head = new Node ;
    else
    {
        auto add = new Node ;
        add->next = head ;
        head = add ;
    }//头插

    head->val = x ;
    head->t = ++ times ;

    return ;
}

void k_del ( int k )//操作2
{
    if ( k == 0 )
    {
        head = head->next ;
        return ;
    }

    auto node = head ;
    while ( node && node->t != k )
        node = node->next ;
    node->next = node->next->next ;

    return ;
}

void k_ins ( int k , int x )//操作3
{
    auto ins = new Node ;
    ins->val = x ;
    ins->t = ++ times ;

    auto node = head ;
    while ( node && node->t != k )
        node = node->next ;

    ins->next = node->next ;
    node->next = ins ;
}

void ope( char op )
{
    if ( op == 'H' )
    {
        int x ;
        scanf("%d" , &x ) ;
        head_ins( x ) ;
    }
    else if ( op == 'D' )
    {
        int k ;
        scanf("%d" , &k ) ;
        k_del( k ) ;
    }
    else if ( op == 'I' )
    {
        int k , x ;
        scanf("%d%d" , &k , &x ) ;
        k_ins( k , x ) ;
    }
    return ;
}

int main()
{
    int m ;
    scanf("%d" , &m );

    while ( m -- )
    {
        char op ;
        cin >> op ;
        ope( op ) ;
    }

    for ( auto node = head ; node ; node = node->next )
        printf("%d " , node->val ) ;
    
    return 0;
}