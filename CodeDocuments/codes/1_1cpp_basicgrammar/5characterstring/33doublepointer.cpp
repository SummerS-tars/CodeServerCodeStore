#include <iostream>

using namespace std;

int main()
{
    int n ; 
    cin >> n ;

    int a [ n ] ;
    for ( int i = 0 ; i < n ; i ++ )
    {
        int j = i ;
        while ( j < n /*&& 一定条件*/) j ++ ;
        i = j - 1 ;
        /*以上三行可称为第一类双指针算法
        解析：满足一定条件时在数组中开始移动j
        并在不满足该条件跳出while时让i跳过j移动的段落*/
    }
}