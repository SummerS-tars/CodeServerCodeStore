#include <iostream>

using namespace std;

const int N = 1e5 + 10 ;
int q[ N ] , hh = 1 , tt ;

void push ( int x )
{
    q[ ++ tt ] = x ;
    return ;
}

void pop ()
{
    hh ++ ;
    return ;
}

void empty ()
{
    if ( tt >= hh ) printf("NO\n") ;
    else printf("YES\n") ;
    return ;
}

void query ()
{
    printf("%d\n" , q[ hh ] ) ;
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

    return 0;
}