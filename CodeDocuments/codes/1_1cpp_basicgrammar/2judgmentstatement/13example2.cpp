#include <iostream>

using namespace std;

int main()
{
    int x , y ;

    cin >> x >> y ;

    if ( x == 1) printf ( "Total: R$ %.2f" , y * 4.00 ) ;
    else if ( x == 2 ) printf ( "Total: R$ %.2f" , y * 4.50 ) ;
    else if ( x == 3 ) printf ( "Total: R$ %.2f" , y * 5.00 ) ;
    else if ( x == 4 ) printf ( "Total: R$ %.2f" , y * 2.00 ) ;
    else printf ( "Total: R$ %.2f" , y * 1.5 ) ;
    
    return 0;
}
//？疑惑：为什么数字不加.00答案就统统显示为0.00？