#include <iostream>

using namespace std;

int main()
{
    int n1 , n2 , n3 , n4 , n5 , n6 , c1 , c2 , c3 , c4 , c5 , c6 ;
    double N ;
    //actually most of the time we can firstly use double to consider the situation in which we need certain psession

    cin >> N ;
    n1 = N / 100 ;
    N = N - n1 * 100 ;
    n2 = N /50 ;
    N = N - n2 * 50 ;
    n3 = N / 20 ;
    N = N - n3 * 20 ;
    n4 = N / 10 ;
    N = N - n4 * 10 ;
    n5 = N / 5 ;
    N = N - n5 * 5;
    n6 = N / 2 ;
    N = (N - n6 * 2 + 0.001) * 100 ;
    //because of the reason in line 35, we can plus 0.01 to let it be 0.01 and offset(抵消) the error.
    c1 = N / 100 ;
    N = N - c1 * 100 ;
    c2 = N / 50 ;
    N = N - c2 * 50 ;
    c3 = N / 25 ;
    N =  N - c3 * 25 ;
    c4 = N / 10 ;
    N = N - c4 * 10;
    c5 = N / 5;
    c6 = N - c5 * 5;
    //(f*k the float)!0.01 actually is 0.009999,and the result will round down(向下取整)

    cout << "NOTAS:\n" << n1 << " nota(s) de R$ 100.00\n" << n2 << " nota(s) de R$ 50.00\n" << n3 << " nota(s) de R$ 20.00\n" << n4 << " nota(s) de R$ 10.00\n" << n5 << " nota(s) de R$ 5.00\n" << n6 << " nota(s) de R$ 2.00" << endl;
    cout << "MOEDAS:\n" << c1 << " moeda(s) de R$ 1.00\n" << c2 << " moeda(s) de R$ 0.50\n" << c3 << " moeda(s) de R$ 0.25\n" << c4 << " moeda(s) de R$ 0.10\n" << c5 << " moeda(s) de R$ 0.05\n" << c6 << " moeda(s) de R$ 0.01" << endl ;

    return 0;

}
//tip:浮点数没有整除!!(会有精度问题！)
//tip:本题技巧，将浮点数转换为整数，并且认识到要用到long long
//tip:printf也可以只输出字符串或语句