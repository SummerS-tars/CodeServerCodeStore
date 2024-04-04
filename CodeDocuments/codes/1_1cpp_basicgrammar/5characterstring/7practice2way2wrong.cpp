//此思路错的！！
#include <iostream>
#include <cstring>

using namespace std;

int n [ 26 ] ;
char str [ 100010 ] ;

int main()
{
    /*运用木桶数组的思想
    将所有字母出现的次数进行统计
    并选出第一个仅出现一次的字母
    
    实现思路：
    1.建立木桶数组('a' - 'z')共26的元素
        //具体为使用各位上字母与'a'的ASCII值的差，刚好就可对应
    2.输入字符串
    3.依照木桶数组的顺序对字符串进行统计
        //此处应更改思路，错了！！！
        1/有对应字母，对应容器加1
        2/当容器到达2时直接跳过
        3/若容器内容一直保持为1到结尾则输出该字母*/
    cin >> str;

    int l = strlen ( str ) ;

    for ( int i = 0 ; i < 26 ; i ++ )
    {
        for ( int j = 0 ; j < l ; j ++ )
        {
            if ( str [ j ] - 'a' == i ) n [ i ] ++ ;

            if ( n [ i ] >= 2 ) break ;
        }

        if ( n [ i ] == 1 )
        {
            cout << (char)('a' + i ) << endl ;
            break ;
        }

        if ( i == 25 && n [ i ] != 1 )
            cout << "no" << endl ;
    }

    return 0 ;
}