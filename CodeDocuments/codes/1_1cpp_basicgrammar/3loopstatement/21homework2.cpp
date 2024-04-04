#include <iostream> 

using namespace std;

int main()
{
    int x ;
    cin >> x ;

    /*
    要求：
    1.输出共六个连续奇数
    2.若x自身为奇数则包含其自身
    实现思路；
    1.判定x奇偶性
    2.确定输出方式：x偶 x + 1 */
    int output ;
    if ( x % 2 == 0 ) output = x + 1;
    else output = x;
    //由思路可知，只需判定一次，那么就把此步写在循环外部
    //不妨直接写成if x ++ ; (else空掉) 

    for ( int i = 1 ; i <= 6 ; i ++ , output += 2 )
    {
        cout << output << endl ;

    }

    return 0;
}