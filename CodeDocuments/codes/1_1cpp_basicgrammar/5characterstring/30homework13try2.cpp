#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    /*way 1 逆转，改判后缀为前缀可简化下列语句
    way 2 枚举，从最短字符串大小开始判断*/

    //way 1
    int n ;
    while ( cin >> n , n ) 
    {
        string s [ n + 1 ] ;//数组长度一般要是常量！！！
        //输入n个字符串,并进行逆转
        for ( int i = 0 ; i < n ; i ++ )
        {
            cin >> s[ i ] ;
            //此处不可用getline(?)
            reverse ( s [ i ].begin() , s [i ].end() ) ;
        }

        //判断所有字符串的最短长度
        int min = s [ 0 ].size() ;
        for ( int i = 0 ; i < n ; i ++ ) 
            if ( min > s [ i ].size() ) min = s [i].size() ;

        //对逆向的字符串进行统一性检索与统计
        int sum = 0 ;
        for ( int i = 0 ; i < min ; i ++ )//i表单个字符串中字符的位置
        {
            bool stop = false ;
            for ( int j = 0 ; j < n ; j ++ )//j表字符串在字符串组中的排序
                if ( s [ j ] [ i ] != s [ 0 ] [ i ] ) 
                {
                    stop = true ;
                    break ;
                }

            /*逻辑解释：
            1.给出是否停止的判断值
            2.对同位的字符进行顺位核对
                1/全都相同 ， 维持false
                2/出现不同 ， 改为true ，并停止循环
            3.辨别判断值
                1/为false ，直接停止
                2/为true ， sum ++ ， 并开始判断下一位（返回1.）
            结果：得出公共位数sum*/
            if ( stop ) break ;
            else sum ++ ;
        }

        //输出相同部分（不要忘记再次逆转恢复）
        string out ;
        for ( int i = 0 ; i < sum ; i ++ )
            out += s [ 0 ] [ i ] ;
        
        reverse ( out.begin() , out.end() ) ;
        cout << out << endl ;
    }

    return 0;
}