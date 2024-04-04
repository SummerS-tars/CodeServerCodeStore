//求1~100的偶数的和
#include <iostream>

using namespace std;

int main()
{
    int s = 0 ;
    //一定不要忘记定义这个独立底量的值
    
    for ( int i = 1 ; i <= 100 ; i ++)
    {
        if ( i % 2 == 1) continue;

        s += i ;
    }

    cout << s << endl ;

    return 0;
}