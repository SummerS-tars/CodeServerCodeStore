#include <iostream>

using namespace std;

int main()
{
    char c ;

    int sum1 = 0 , sum2 = 0 ;
    while ( cin >> c ) 
    {
        if ( c >= '0' && c <= '9' ) sum1 ++ ;
        else if ( c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z' ) sum2 ++ ;
    }

    printf ("number of numbers : %d\nnumber of characters : %d\n" , sum1 , sum2 ) ;

    return 0;
}
//只要有输入就会一直运行
//用ctrl+z结束运行！！！