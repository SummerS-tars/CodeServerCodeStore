#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n ;
    cin >> n ;

    while ( n -- ) //循环输入常用的简化方式（循环输入记得考虑while）
    {
        string s ;
        cin >> s ;

        int max = 0 ;
        char r ;
        for ( int i = 0 ; i < s.size() ; i ++ ) 
        {
            int j = i , k = 0 ;
            while ( j < s.size() && s [ j ] == s [ i ] ) j ++ , k ++;
            //此处j记录了重复结束的位置，k记录了重复的次数
            
            if ( max < k ) max = k , r = s [ i ] ;
            //结束重复后判断最大重复字符是否改变并进行记录
            
            i = j - 1 ;
            //跳过j移动过的部分
        }

        //从for循环中我们得到max 最大连续重复数量，r 重复连续最多的字符
        cout << r << ' ' << max << endl ;
    }

    return 0;
}