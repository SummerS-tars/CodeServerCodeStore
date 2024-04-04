#include <iostream>

using namespace std;

int main()
{
    int a = 10 ;
    int* p = &a ; //让p的值等于a的地址
    cout << *p << endl ;
    /*上述语句中'*'的含义不同
    int* p 中表示p是存放int类型变量的地址的一个变量
    而 *p 中*本身算是运算符，表示访问p存下的地址上的值（支持读取和"更改"）*/

    int** q = &p ;
    cout << p << endl ;
    cout << q << endl ;

    *p = 12 ;
    cout << *p << endl ;
    cout << a << endl ;

    return 0;
}