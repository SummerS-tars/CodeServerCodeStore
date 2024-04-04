#include <iostream>

using namespace std;

const int MAX = 4 ;

int main()
{
    const char* name[ MAX ] = {
        "Sum" , "Nijika" , "Bochi" , "Rio"
    } ;//四个字符串储存在常量区,值得注意的是C++中一般应使用常量(const)指针指向常量
    
    for ( int i = 0 ; i < MAX ; i ++ )
        printf("%s\n" , name[ i ] ) ;//调用字符串常量的指针时也需要理解一下,不用加*,它的指针就类似于字符数组名

    int* i ;
    int j = 1 ;
    i = &j ;
    printf("%d %p %d\n" , j , i , *i ) ;
    
    return 0 ; 
}