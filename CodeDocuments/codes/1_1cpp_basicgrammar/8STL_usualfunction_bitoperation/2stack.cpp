//栈：STL中实现先进后出，后进先出
//栈的定义比较一般，直接与function一起演示
#include <iostream>
#include <vector>
#include <stack>

using namespace std;

struct node
{
    int a , b ;
};

int main()
{
    stack<int> s ;//定义存储int类型数据的栈

    stack<string> s1 ;//定义存储string类型数据的栈
    
    stack<node> s2 ;//包括结构体类型也是可以定义的

    cout << "****************************************" << endl ;
    cout << endl ;

    s.push( 0 ) ;//1将元素加入栈中 压栈
    //使用例1
    for ( int i = 1 ; i < 10 ; i ++ ) s.push( i ) ;
    s.push( 0 ) ;

    int num = s.top() ;//2返回栈顶元素（不删除）
    cout << "the top of stack : " << num << endl ;
    cout << endl ;

    cout << "****************************************" << endl ;
    cout << endl ;

    int size = s.size() ;//3返回栈内元素个数
    cout << "the size of stack : " << size << endl ;
    cout << endl ;
   
    cout << "****************************************" << endl ;
    cout << endl ;

    s.pop() ;//4移除栈顶元素 弹栈
    size = s.size() ;
    cout << "the size of stack : " << size << endl ;
    cout << endl ;
    
    cout << "****************************************" << endl ;
    cout << endl ;

    bool empty = s.empty() ;//5检测stack是否为空，空返回true
    cout << "empty or not : " << empty << endl ;
    cout << endl ;

    cout << "****************************************" << endl ;
    cout << endl ;

    //stack没有.clear(),.sort()函数
    //使用例2~5：栈遍历——数组转移
    vector<int> v ;
    while ( ! s.empty() )
    {
        v.push_back( s.top() ) ;
        s.pop() ;
    }//每循环一次，转存一次数据，直到栈被取空
    cout << "s : " ;
    for ( auto val : v ) cout << val << ' ' ;
    cout << endl << endl ;
    
    cout << "****************************************" << endl ;
    cout << endl ;

    //数组模拟栈
    int st [ 100 ] ;
    int tt = -1 ;//代表栈顶指针
    for ( int i = 0 ; i < 10 ; i ++ ) st [ ++ tt ] = i ;//入栈
    cout << "a : " ;
    while ( tt >= 0 ) 
    {
        int top_element = st [ tt -- ] ;//出栈
        cout << top_element << ' ' ;
    }
    cout << endl << endl ;
    
    cout << "****************************************" << endl ;
    cout << endl ;

    return 0 ;
}