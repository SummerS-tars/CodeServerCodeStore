#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n ;
    cin >> n;

    for ( int i = 1 ; i <= n ; i ++ ) 
    {
        string s ;
        cin >> s ;

        /*应用双指针思想：
        第一重指针j，表示字符串中字符的位置
        第二重指针k，在遇到重复字符时开始增加，记录重复数量
        注：此处非标准用法*/
        int max = 0 ; 
        char r = s [ 0 ] ;
        for ( int j = 1 , k = 1 ; j < s.size() ; j ++ ) 
            if ( s [ j ] == s [ j - 1 ] )
            {
                k ++ ;
                if ( max < k ) max = k , r = s [ j ] ;
            } 
            else k = 1 ;      
        cout << r << ' ' << max << endl ;
    }

    return 0;
}