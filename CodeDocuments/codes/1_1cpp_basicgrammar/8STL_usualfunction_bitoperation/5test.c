#include <stdio.h>

int main()
{
    int i = 1;
    i = i << 31 ;
    printf("%d\n" , i ) ;

    int j = 1 ;
    j = ~j ;
    j ++ ;
    printf("%d\n" , j ) ;

    return 0; 
}
