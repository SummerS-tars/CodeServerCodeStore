//队列(queue)u：先进先出的一种数据结构
#include <iostream>
#include <queue>

using namespace std;

int main()
{
    //队列定义初始化
    queue < int > q ;

    q.push( 0 ) ;//1在“尾部”添加元素
    //应用例1
    for ( int i = 1 ; i < 10 ; i ++ )
        q.push( i ) ;

    cout << endl << "****************************************" << endl << endl ;
    
    int fro = q.front() ;//2返回队首元素
    int bac = q.back() ;//3返回队尾元素
    cout << "the front of queue : " << fro << endl ;
    cout << "the back of queue : " << bac << endl ;

    cout << endl << "****************************************" << endl << endl ;

    //同样的.empty(),.size()都可以正常使用
    //queue没有.clear(),.sort()函数
    q.pop() ;//4删除队首元素
    fro = q.front() ;
    cout << "the front of queue : " << fro << endl ;

    cout << endl << "****************************************" << endl << endl ;

    //队列模拟
    int qu [ 100 ] ;
    int hh = 0 , tt = -1 ;//hh表队列头指针，tt表队列尾指针（-1表示为空）
    for ( int i = 0 ; i < 10 ; i ++ )
        qu [ ++ tt ] = i ;//入队
    cout << "qu : " ;
    while ( hh <= tt ) 
    {
        int val = qu [ hh ++ ] ;
        cout << val << ' ' ;
    }//所有元素出队
    cout << endl ;

    cout << endl << "****************************************" << endl << endl ;

    return 0;
}