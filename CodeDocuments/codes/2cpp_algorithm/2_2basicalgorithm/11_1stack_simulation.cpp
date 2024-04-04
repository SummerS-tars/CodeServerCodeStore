#include <iostream>

using namespace std;

const int N = 1e5 + 10 ;
int stk[ N ] , tt ;

void push ( int x )
{
    stk[ ++ tt ] = x ;
    return ;
}

void pop ()
{
    tt -- ;
    return ;
}

void empty ()
{
    if ( tt ) printf("NO\n" ) ;
    else printf("YES\n" ) ;
    return ;
}

void query ()
{
    printf("%d\n" , stk[ tt ] ) ;
    return ;
}

void operation ( string op )
{
    if ( op == "push" )
    {
        int x ;
        scanf("%d", &x ) ;
        push ( x ) ;
    }
    else if ( op == "pop" )
    {
        pop() ;
    }
    else if ( op == "empty" )
    {
        empty() ;
    }
    else if ( op == "query" )
    {
        query() ;
    }
}

int main()
{
    int m ; 
    scanf("%d",  &m ) ;

    while ( m -- )
    {
        string op ;
        cin >> op ;

        operation ( op ) ;
    }

    return 0 ;
}