#include <iostream>

using namespace std;

struct Person
{
    int age , height ;
    double money ;

    //无参数输入时默认使用此函数
    Person () {} 

    //参数输入定义的另一种写法，优点是运行效率更快
    Person ( int _age , int _height ) : age ( _age ) , height ( _height ) {}

    //类 or 结构体 可以定义 “多个” 构造函数，无类型，可传入参数
    Person ( int _age , int _height , double _money )
    {
        age = _age ;
        height = _height ;
        money = _money ;
    }
};
//值得一提的是，构造函数一般写在public中

int main ()
{
    Person Sum = { 19 , 180 , 100 } ;
    Person pp ( 20 , 185 , 200 ) ;
    //可以发现类or结构体类似于变量类型，我们也可以这样去帮助理解

    return 0 ;
}