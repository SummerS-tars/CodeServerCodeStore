#include <iostream>

using namespace std;

void func ( int a [3] [3] ) 
/*另外的写法:
1. (*a) [3]
2. a [] [3] （只支持第一维留空）
*/
{
    for ( int i = 0 ; i < 3 ; i ++ ) 
    {
        for ( int j = 0 ; j < 3 ; j ++ )
            cout << a [i] [j] + 1 << ' ' ;

        cout << endl ;
    }
}

int main()
{
    int a [3] [3] ;
    
    for ( int i = 0 , k = 0 ; i < 3 ; i ++ )
        for ( int j = 0 ; j < 3 ; j ++ , k ++ )
            a [i] [j] = k ;
    
    for ( int i = 0 ; i < 3 ; i ++ ) 
    {
        for ( int j = 0 ; j < 3 ; j ++ )
            cout << a [i] [j]  << ' ' ;

        cout << endl ;
    }

    func ( a ) ;

    return 0;
}
/*此代码可以说明两点：
1.使用函数时输入的是数组名
2.数组形参也属于引用型参数

另外，传入的是指针而非数组*/

