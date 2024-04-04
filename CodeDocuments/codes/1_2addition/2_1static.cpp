#include <iostream>

using namespace std;

void test1()
{
    int a = 1 ;
    a ++ ;
    printf("%d " , a ) ;
}

void test2()
{
    static int a = 1 ;
    a ++ ;
    printf("%d " , a ) ;
}
int main()
{
    puts("test1 :\n") ;
    for ( int i = 0 ; i < 10 ; i ++ )
        test1();//输出全是2
    puts("\n") ;

    puts("\n====================\n") ;

    puts("test2 :\n") ;
    for ( int i = 0 ; i < 10 ; i ++ )
        test2() ;//输出2的递增序列

    /*原理解析：
    test1中的a在test1作用完之后超过了他的作用域，销毁了他的值
    其作用时存在栈区
    此处static作用是修饰test2中的！！局部变量！！a，使a在超出test2的作用域时也不会被销毁
    本质上是改变了a的存储位置，编译时会将其分配到和全局变量所在的静态空间
    
    比较:          存储周期      存储位置    可访问范围
    局部变量     自动存储期限    栈区          定义的块
    全局变量     整个代码周期    静态区        整个代码
    静态变量     整个代码周期    静态区        定义的块
    全局静态变量 整个代码周期    静态区        仅本文件可见*/

    /*
    一个由c/C++编译的程序占用的内存分为以下几个部分

    1、栈区（stack）— 由编译器自动分配释放 ，存放函数的参数值，局部变量的值等。其操作方式类似于数据结构中的栈。

    2、堆区（heap） — 一般由程序员分配释放， 若程序员不释放，程序结束时可能由OS回收 。注意它与数据结构中的堆是两回事，分配方式倒是类似于链表，呵呵。

    3、全局区（静态区）（static）— 全局变量和静态变量的存储是放在一块的，初始化的全局变量和静态变量在一块区域， 未初始化的全局变量和未初始化的静态变量在相邻的另一块区域。 - 程序结束后有系统释放

    4、文字常量区 —常量字符串就是放在这里的。 程序结束后由系统释放

    5、程序代码区—存放函数体的二进制代码。
    */

    return 0;
}