//常用定义方式以及访问方式
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> a ;
    //常用定义方式
    for ( int i = 0 ; i < 10 ; i ++ )
        a.push_back( i ) ;
    
    //访问方式1:数组下标法
    for ( int i = 0 ; i < 10 ; i ++ )
        cout << a [ i ] << ' ' ;
    cout << endl ;

    //访问方式2.1:迭代器
    for ( int i = 0 ; i < 10 ; i ++ )
        cout << *( a.begin() + i ) << ' ' ;
    cout << endl ;

    //访问方式2.2:迭代器
    for ( vector<int>::iterator vi = a.begin() ; vi != a.end() ; vi ++ )
        cout << *vi << ' ' ;
    cout << endl ;

    //访问方式3:auto遍历法
    for ( auto v : a ) cout << v << ' ' ;
    cout << endl ;
    //此方法只能从头到尾

    return 0;
}