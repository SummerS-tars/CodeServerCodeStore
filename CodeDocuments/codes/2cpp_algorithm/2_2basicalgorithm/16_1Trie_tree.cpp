#include <iostream>

using namespace std;

const int N = 1e5 + 10 ;
/*变量解析：
  son[][] 第二维是当前字母的排列号（可多态、可不连续） 第二维对应字母的相对值 整体用于存储用于识别的序列号（唯一性）
  cnt[] 中间是是序列号 用于存储该序列号为尾的单词出现次数
  idx负责记录以及赋予序列号*/
int son[ N ][ 26 ] , cnt[ N ] , idx ;
char str[ N ] ;

void insert ( char str[] )
{
    int p = 0 ; 
    for ( int i = 0 ; str[ i ] ; i ++ )
    {
        int u = str[ i ] - 'a' ;
        if ( ! son[ p ][ u ] ) son[ p ][ u ] = ++ idx ;
        p = son[ p ][ u ] ;//值得注意的是，每个节点的序列号必定是下个紧接节点的排列号p
        //p 与 idx 不要弄混！！
    }

    cnt[ p ] ++ ;//给每个字符串的尾节点计数
}

int query ( char str[] )
{
    int p = 0 ;
    for ( int i = 0 ; str[ i ] ; i ++ )
    {
        int u = str[ i ] - 'a' ;
        if ( ! son[ p ][ u ] ) return 0 ;
        p = son[ p ][ u ] ;
    }

    return cnt[ p ] ;
}

int main()
{
    int n ; 
    scanf("%d" , &n ) ;

    while ( n -- )
    {
        char op ;
        cin >> op ;
        cin.getline( str , N ) ;//不读入回车，而将其留在缓冲区

        if ( op == 'I' )
            insert ( str ) ;
        else
            printf("%d\n" , query ( str ) ) ;
    }

    return 0 ;
}