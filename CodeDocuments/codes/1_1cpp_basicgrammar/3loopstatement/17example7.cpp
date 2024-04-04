#include <iostream>

using namespace std;

int main()
{
    int a , n ;
    cin >> a ;

    for ( ;  ; )
    {
        cin >> n ;
        if ( n > 0 ) break ;
        //利用for-break结合重复判定输入的n直至输入的n为正整数再跳出for循环

    }
    /*
    改为
    while ( cin >> n , n <= 0 ) ;
    更简洁
    */
    //小疑问？：while之后不是不加";"吗？while内的n可以在外面用吗？

    int sum = 0 ;
    for ( int i = 1 ; i <= n ; i ++ , a ++ )
        sum += a ;

    cout << sum << endl ;    
}