//各种function
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> a ;
    a = { 1 , 2 , 3 } ;
    
    struct Rec1
    {
        int x , y ;
    };
    vector<Rec1> b ;

    cout << "******************************" << endl ;

    //STL基本通用
    cout << endl << "size of a : " << a.size() << endl ;//1返回实际数据个数(大概不支持二维)

    cout << endl << "empty or not : " << a.empty() << endl ;//2返回bool值，空true，否则false

    a.clear() ;//3清空a

    cout << endl << "******************************" << endl ;

    //一些常用

    a.push_back( 1 ) ;//1尾部加上元素
    //使用例1
    for ( int i = 2 ; i <= 10 ; i ++ )
        a.push_back ( i ) ;
    cout << endl << "a : " ;
    for ( auto v : a ) cout << v << ' ' ;
    cout << endl ;

    cout << endl << "******************************" << endl ;

    a.pop_back() ;//2删除最后一个元素
    //使用例2
    int k = 4;
    while ( k -- ) a.pop_back() ;
    cout << endl << "a : " ;
    for ( auto v : a ) cout << v << ' ' ;
    cout << endl ;

    cout << endl << "******************************" << endl ;

    int x1 = a.front() ;//3.1返回第一个数据
    int x2 = a.back() ;//3.2返回最后一个数据
    cout << endl << "the first of a : " << x1 << endl ;
    cout << "the last of a : " << x2 << endl ;

    cout << endl << "******************************" << endl ;

    int y1 = *a.begin() ; //4.1返回第一个数据的迭代器（地址）
    int y2 = *( a.end() - 1 ) ;//4.2返回末尾数据的下一个迭代器（地址）
    cout << endl << "the first of a : " << y1 << endl ;
    cout << "the last of a : " << y2 << endl ;

    cout << endl << "******************************" << endl ;

    a.insert( a.begin() , 1 ) ;//5将二号位参数插入一号位地址中
    //使用例5
    for ( int i = 1 ; i < 5 ; i ++ )
        a.insert( a.begin() + i , i + 1 ) ;
    cout << endl << "a : " ;
    for ( auto v : a ) cout << v << ' ' ;
    cout << endl ;
    //p.s.注意理解插入的意思：例如一号位参数为a.begin()，就会在第一个位置前插入二号位参数

    cout << endl << "******************************" << endl ;

    a.resize( 5 , 1 ) ;//6将数组大小改编为一号位参数，并保存原有值，若数组长度边长，则将新增部分赋值为二号位参数，默认为0
    cout << endl << "a : " ;
    for ( auto v : a ) cout << v << ' ' ;
    cout << endl ;

    cout << endl << "******************************" << endl ;

    return 0;
}