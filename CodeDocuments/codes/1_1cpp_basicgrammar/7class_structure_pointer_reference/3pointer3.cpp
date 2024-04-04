#include <iostream>

using namespace std;

int main ()
{
    char c ;
    int a [ 5 ] = { 1 , 2 , 3 , 4 , 5 } ;

    cout << ( void* ) &c << endl ;
    cout << a << endl ;
    for ( int i = 0 ; i < 5 ; i ++ )    
        cout << ( void* ) &a [ i ] << endl ;
    //数组名a本身也算是一个指针，其指向的地址是a [ 0 ] 的地址
    cout << endl ;

    /*定义数组开地址的规则
    1.顺次放
    2.连续放
    3.会隐式地存一个数组的长度*/

    int* p = a ;
    cout << *p << endl ;
    cout << *a << endl ;
    cout << a [ 0 ] << endl ;
    //可以发现以上三个都是等价的
    cout << endl ;

    cout << p << endl ;
    cout << p + 1 << endl ;
    /*可以发现此处p + 1并不是p地址直接加1
    原因是会先判定p地址存放的变量类型
    得到下一个地址应该是p + 1 * 单变量字节数
    实际上也就是a [ 1 ] 的地址*/ 
    cout << * ( p + 1 ) << endl ;
    cout << * ( a + 1 ) << endl ;
    //数组名也可以这样用
    cout << endl ;

    cout << sizeof a << endl ;
    //sizeof 输出的是数组存放使用的字节(Byte)数

    return 0; 
}