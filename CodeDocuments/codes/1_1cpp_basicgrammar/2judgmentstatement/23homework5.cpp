#include <iostream>

using namespace std;

int main()
{
    int a , b , c , d , H , M ;

    cin >> a >> b >> c >> d ;

    if ( a < c )  H = c - a ;
    else  H = c + 24 - a ;

    if ( b > d )  M = d + 60 - b, --H ;
    else if ( b == d ) M = 0;
    else 
    {
        if ( H == 24 ) H = 0 ;
        //处理24h多几分的错误情况

        M = d - b ;

    }

    printf ("O JOGO DUROU %d HORA(S) E %d MINUTO(S)" , H , M ) ;

    return 0;
}    
//另外一个思路，全部转换为分钟，计算时间，在转换为小时分钟制
//优点：可以减少很多细节上的判断！
//思路：中间状态转换减少讨论！