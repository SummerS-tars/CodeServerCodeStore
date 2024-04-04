#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double a ;

    cin >> a ;

    if ( a <= 2000.00 ) cout <<"Isento" << endl ;
    else if ( a >= 2000.01 && a <= 3000.00 ) cout << "R$ " << fixed << setprecision(2) << ( a - 2000 ) * 0.08 << endl ;
    else if ( a >= 3000.01 && a <= 4500.00 ) cout << "R$ " << fixed << setprecision(2) << ( a - 3000 ) * 0.18 + 1000 * 0.08 << endl ;
    else cout << "R$ " << fixed << setprecision(2) << ( a - 4500 ) * 0.28 + 1500 * 0.18 + 1000 * 0.08 << endl ;
    //运用cout中保留特定小数位数的方法 fixed << setprecision(x) << a (意即输出a保留x位小数的浮点数的形式)
    //注：使用此方法要加上头文件iomanip

    return 0;

}