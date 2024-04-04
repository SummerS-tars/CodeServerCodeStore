#include <iostream> 

using namespace std;

int main()
{
    int x1 , x2 , x3 , x4 ;

    cin >> x1 >> x2 >> x3 >> x4 ;

    cout << min ( x1 , x2 ) << endl ;
    cout << min ( x3 , x4 ) << endl ;
    cout << min ( min ( x1 , x2 ) , min ( x3 , x4 ) ) << endl ;

    return 0 ;

}
//min ( a , b ) 本质上为一个数！！！