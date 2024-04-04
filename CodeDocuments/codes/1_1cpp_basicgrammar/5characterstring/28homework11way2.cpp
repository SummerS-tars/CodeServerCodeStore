#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s ;
    while ( cin >> s , s != "." )
    {
        int l = s.size() ;

        for ( int i = 1 ; i <= l ; i ++ )
        {
            //i表示基础单位s0的长度
            if ( l % i == 0 ) 
            //进行可约性核验
            {
                string str , s0;
                /*for ( char a : s )
                {
                    s0 += a ;
                    if ( s0.size() == i ) break ;
                }
                //得到基础单位s0*/
                //优化如下
                s0 = s.substr( 0 , i ) ;

                int k = l / i ;
                while ( k -- ) str += s0 ;
                //将s0重复l/i次以得到与s等长得str

                if ( s == str ) 
                //核对s与str 相同则说明最大幂为 l / i 否则继续下一次分解重构与核对
                {
                    cout << l / i << endl ;
                
                    break ;
                }
            }
        }
    }

    return 0;
}