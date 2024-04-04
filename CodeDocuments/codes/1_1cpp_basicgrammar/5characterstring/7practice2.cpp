#include <iostream>
#include <cstring>

using namespace std;

char str [ 100010 ] ;

int main()
{
    /*only 小写字母
    找出 “第一个” “仅出现一次” 的字符
    没有则输出“no”
    
    实现思路：
    1.输入字符串str
    2.录入str [ 0 ] 
    3.依次比照字符串中其他的字符
        1/无相同字符，输出
        2/有相同字符
            1//将所有相同字符变为/
            2//返回str [ 1 ] (若非/则赋值，否则跳过判断下一个)
            3//从3.继续开始判断*/
    cin >> str ;

    int l = strlen ( str ) ;

    for ( int i = 0 ; i < l ; i ++ )
    {
        if ( str [ i ] == '/' ) 
        {
            if ( i < l - 1 ) continue ;

            else
            {
                cout << "no" << endl ;
                continue ;

            }
        }

        char c = str [ i ] ;

        bool single = true ;
        for ( int j = i + 1 ; j < l ; j ++ )
        {
            if ( c == str [ j ] ) 
            {
                str [ j ] = '/' ;
                single = false ;

            }

        }

        if ( single ) 
        {
            cout << c << endl ;
            break ;

        }
       
    }

    return 0;
}