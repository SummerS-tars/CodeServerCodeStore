//function recursion （函数递归）
#include <iostream>

using namespace std;

void func2 ()
{
    printf ( "Called func2\n" ) ;
}

void func1 ()
{
    printf ( "Called func1\n" ) ;

    func2 ();
    func2 ();
}
//值得一提得是函数必须先声明/定义过才可以用

int main ()
{
    func1 () ;
    func1 () ;

    return 0 ;
}