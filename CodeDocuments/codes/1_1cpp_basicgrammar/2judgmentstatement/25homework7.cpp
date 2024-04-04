#include <cstdio>

int main()
{
    int a , b , c , n1 , n2 ,n3 ;

    scanf ("%d%d%d" , &a , &b , &c ) ;

    if ( a >= b) 
    {
        if ( a >= c )
        {
            if ( b >= c) n1 = a , n2 = b , n3 = c ;
            else n1 = a , n2 =c , n3 = b ;

        } 
        else n1 = c , n2 = a , n3 = b ;

    }
    else //b>a
    {
        if ( b >= c ) 
        {
            if ( c >= a ) n1 = b , n2 = c , n3 = a ;
            else //a>c
            n1 = b , n2 = a , n3 = c ;

        }
        else //b>a c>b
        n1 =c , n2 = b , n3 = a ;

    }

    printf("%d\n%d\n%d\n\n%d\n%d\n%d\n", n3 , n2 , n1 , a , b , c ) ;

    return 0;
}