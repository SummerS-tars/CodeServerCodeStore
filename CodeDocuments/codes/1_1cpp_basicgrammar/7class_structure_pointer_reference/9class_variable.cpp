#include <iostream>

using namespace std;

class MyClass {
public:
    static int class_var; // 类作用域变量
};

int MyClass::class_var = 30;

int main() {
    MyClass abc ;
    cout << "类变量: " << abc.class_var << endl;

    cout << "另一种输出方式：" << MyClass::class_var << endl ;//::是作用域解析算符
    return 0;
}