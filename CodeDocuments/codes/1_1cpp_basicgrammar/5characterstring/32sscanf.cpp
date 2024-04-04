#include <cstdio>
#include <iostream>

using namespace std;

int main()
{
    //sscanf用于数组表示的字符串
    char str [ 1000 ] ;
    fgets ( str , 1000 , stdin ) ;

    int a , b ;
    char s [ 1000 ] ;
    double c ;

    sscanf ( str , "%d%d%s%lf" , &a , &b , s , &c ) ;
    //一般用stringstream ，因为不需要知道具体字符串数量就可用

    printf ( "%d\n%d\n%s\n%lf" , a , b , s , c ) ;

    return 0;
}