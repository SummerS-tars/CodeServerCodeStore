#include <iostream>

using namespace std;

class MyClass {
public:
    static int class_var; // �����������
};

int MyClass::class_var = 30;

int main() {
    MyClass abc ;
    cout << "�����: " << abc.class_var << endl;

    cout << "��һ�������ʽ��" << MyClass::class_var << endl ;//::��������������
    return 0;
}