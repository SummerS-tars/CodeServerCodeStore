#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int a[3] = { 2 , 4 , 6 } ;

    double b[] = { 1 , 3 , 5 , 4 , 3 } ;
    //自动识别多少个元素

    float c[5] = { 3.04 , 4.52 , 24.25 } ;
    //非对称定义，按顺序对应，多余的全都算0

    char d[3] = { 'a' , '/' , '=' } ;

    int a [ 4 ] = { 0 } ;
    //快速将所有元素全部定义成0的方法

    return 0;
}