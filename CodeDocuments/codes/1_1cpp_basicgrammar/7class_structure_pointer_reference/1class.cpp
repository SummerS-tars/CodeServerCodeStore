#include <iostream>

using namespace std;

class Person
{
    private ://仅限class Person内访问
        int age , height ;
        double money ;
        string books [ 100 ] ;
    
    public ://不限访问
        string name ;

        void say ()
        {
            cout << "I'm" << ' ' << name << endl ;
        }

        void set_age ( int a )
        {
            age = a ;
        }

        int get_age ()
        {
            return age ;
        }

        void add_money ( double x )
        {
            money += x ;
        }
};
/*class & struct 都可以包含变量、数组、函数
默认情况：
1.class 默认为private
2.struct 默认为public

习惯上：
1.struct 用于包含比较短的、与数据相关的内容
2.class 用于包含较混乱的、比较长的内容*/

int main ()
{
    Person c ;
    
    c.name = "Sum" ;
    //c.age = 18 ; //错误写法 age 是 private 内的变量，不能在外部访问
    c.set_age ( 19 ) ;
    c.add_money ( 100000 ) ;

    c.say () ;
    cout << c.get_age () << endl ;

    return 0;
}