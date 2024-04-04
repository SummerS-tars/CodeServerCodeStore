#include <stdio.h>

int main()
{
    int a[] = { 1 ,2 , 3 ,4 ,5 } ;
    printf("sizeof(Bytes) a = %d\n", sizeof( a ) ) ;
    printf("element of a = %d\n", sizeof( a ) / sizeof( int )) ;

    printf("Bytes of int = %d\n", sizeof(int)) ;
    printf("Bytes of float = %d\n", sizeof ( float) ) ;
    printf("Bytes of double = %d\n", sizeof(double) ) ;
    printf("Bytes of long long = %d\n" ,sizeof(long long) ) ;
    long long i = 999999998877655 ;
    printf("Bytes of i = %d\n" , sizeof( i ) ) ;

    return 0;
}