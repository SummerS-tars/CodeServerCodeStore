#include <iostream>

using namespace std;

int main()
{
    double a ;
    char c = '%' ;

    cin >> a ;

    if ( a <= 400.00 ) printf ("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 15 %c", a * 1.15 , a * 0.15 , c ) ;
    else if ( a >= 400.01 && a <= 800.00 ) printf ("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 12 %c", a * 1.12 , a * 0.12 , c ) ;
    else if ( a >= 800.01 && a <= 1200.00 ) printf ("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 10 %c", a * 1.10 , a * 0.10 , c) ;
    else if ( a >= 1200.01 && a <= 2000.00 ) printf ("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 7 %c", a * 1.07 , a * 0.07 , c) ;
    else printf ("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 4 %c", a * 1.04 , a * 0.04 , c ) ;
    //另一种思路，定义一个变量使之等于涨幅
    //知识点：特殊字符的转义 %%输出%

    return 0;
}