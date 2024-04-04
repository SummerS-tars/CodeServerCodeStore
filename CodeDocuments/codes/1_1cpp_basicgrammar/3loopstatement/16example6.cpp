#include <iostream>

using namespace std;

int main()
{
    int x = 1;
    for ( ; x > 0 ; )
    {
        cin >> x ;
        if ( x == 0 ) break;
        //最后的0如果不用break或continue会继续输出一个回车
        for ( int i = 1 ; i <= x ; i ++ )
        {
            cout << i << ' ' ;
        }

        cout << endl ;
    }

    return 0;
}