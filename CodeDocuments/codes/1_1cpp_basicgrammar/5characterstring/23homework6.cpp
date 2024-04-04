#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s , a , b ;
    getline ( cin , s ) ;
    cin >> a >> b ;

    //值得注意的时大小写也有区分

    /*思路：字符串进行拆分，分成各个单词
    再对单词进行比较、替换
    最后再拼起来*/

    string v [ 100 ] ;
    int i = 0 ;
    for ( char c : s ) 
    {
        if ( c == ' ' ) 
        {
            i ++ ;
            continue ;//跳过空格并开启下一个字符串
        }

        v [ i ] += c ;
    }
    //i用于记录字符串的个数以及区分不同字符串
    
    for ( int j = 0 ; j <= i ; j ++ ) 
    {
        if ( v [ j ] == a ) v [ j ] = b ;
        
        cout << v [ j ] << ' ' ;
    }

    return 0;
}