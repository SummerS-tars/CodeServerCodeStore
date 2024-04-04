//parameter passing（参数传递）
#include <iostream>

using namespace std;

int max ( int x , int y )
{
    if ( x > y ) return x;
    return y ;
}

int main()
{
    int a , b ;
    cin >> a >> b ;

    cout << max ( a , b ) << endl ;

    return 0 ;
}
/*值得一提的是，此处即使a，b传递到x，y后，x，y在max内被改变，a，b是不变的
这就是非引用型变量*/