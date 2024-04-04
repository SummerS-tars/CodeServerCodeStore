#include <iostream>
#include <vector>

using namespace std;

int main()
{
    //定义一个动态的存储int的数组a
    vector<int> a { 1 ,2 ,3 } ;
    
    //定义一个固定长度为10的存储int的以为数组b
    vector<int> b ( 10 ) ;

    //定义一个一维(行)固定长度为233、第二维(列)长度动态变化的数组d
    vector<int> d[ 233 ] ;

    struct Rec
    {
        int x , y ;
    };

    //vector还可用于定义类或结构体数组
    vector<Rec> c ;

    //返回a的实际长度
    cout << a.size() << endl ;

    //判断a是否为空
    cout << a.empty() << endl ;

    //清空a
    a.clear() ;
    d [ 1 ] .clear() ;//可以得知以上三个函数一般只适用于一维数组
    
    a = { 1 , 2 , 3 } ;

    //第一种访问方式：数组下标
    for ( int i = 0 ; i < a.size() ; i ++ ) 
        cout << a [ i ] << ' ' << endl ;
    cout << endl ;
    //一般用第一种

    //第二种访问方式：迭代器
    for ( vector < int > ::iterator i = a.begin() ; i != a.end() ; i ++  )
        cout << *i << endl ;
    //可以借助auto定义i
    cout << endl ;

    return 0;
}