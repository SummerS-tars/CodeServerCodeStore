//此处介绍了::的几种用法
#include <iostream>

class test1
{
    private:

    public:
        static int num ;
};

class test2
{
    private:

    public:
        static int num ;
};

int test1::num = 12345 ;
int test2::num = 54321 ;
int num = 55555 ;

struct function
{
    /* data */
    int add( int a , int b ) ;
};

//实现在结构体function中声明的函数add的定义
int function::add ( int a , int b )
{
    return a + b ;
}


int main()
{
    int num = 44444 ;

    //区分不同类作用域的变量
    std::cout << "num in test1 :" << test1::num << std::endl ;
    std::cout << "num in test2 :" << test2::num << std::endl ;

    //全局作用域符号
    std::cout << "global  num  :" << ::num << std::endl ;
    std::cout << "local   num  :" << num << std::endl ;

    return 0 ;
}