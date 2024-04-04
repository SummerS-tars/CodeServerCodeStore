#include <iostream>
#include <map>

using namespace std;

//基础定义：键＆值
//逻辑顺序：键->值
//map会按照键的大小自动排序，因此键必须是可以比较大小的数据类型

struct node
{
    int v ;
    node* next ;
};

int main()
{
    //初始化
    map<string , string> mp ;
    map<int , string> mp1 ;
    map<int , node> mp2 ;

    cout << endl << "****************************************" << endl << endl ;
    
    printf("函数方法\n") ;

    cout << endl << "****************************************" << endl << endl ;    

    
}