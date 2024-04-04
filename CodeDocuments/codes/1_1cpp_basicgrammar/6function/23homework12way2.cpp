#include <iostream>

using namespace std;

int n ;

void all_arrange (  int u , bool st [ ] , int num [ ] )
{
    if ( u > n )
    {
        for ( int i = 1 ; i <= n ; i ++ )
            cout << num [ i ] << ' ' ;
        
        printf ( "\n" ) ;
    }
    else
    {
        for ( int i = 1 ; i <= n ; i ++ )
        {
            if ( ! st [ i ] ) 
            {
                st [ i ] = true ;
                num [ u ] = i ;

                //结合DFS图理解:(注释内所有u指函数输入时的u)

                //进入if 通往 u + 1
                all_arrange ( u + 1 , st , num ) ;
                st [ i ] = false ; //恢复现场
            }
            
            //没进入if 留在 u
        }
    }
}

int main ()
{
    cin >> n ;

    int num [ n + 1 ] ;
    bool st [ n + 1 ] = { 0 } ;

    all_arrange ( 1 , st , num ) ;

    return 0;
}