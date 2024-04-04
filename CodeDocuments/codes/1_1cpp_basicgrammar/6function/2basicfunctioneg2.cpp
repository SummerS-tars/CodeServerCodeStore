#include <iostream>

using namespace std;

/*以下为函数定义
此外还有函数声明，相较于定义可以先不写函数体和变量名*/
int/*返回类型*/ func/*函数名字*/ ( int n/*0~多个参数列表，均要用','隔开*/ ) 
{
    int res = 1 ;
    for ( int i = 1 ; i <= n ; i ++ ) res *= i ;

    return res ;/*函数的返回值，不要忘记写return！！！*/
}

int main()
{
    int t = func ( 5 ) ;
    /*运行顺序：运行到此句时会先运行func函数
    （即回到以上那部分执行），并得到与检验返回值(return)再回到此句继续执行*/

    cout << t << endl ;

    return 0;
}