#include <iostream>

using namespace std;

const int N = 1e5 + 10 ;
int val[ N ] , ne[ N ] , idx ;//val为节点存储的数据,ne[]为节点指向下一个节点的指针,idx表示下一个节点会用到的地址

void init ()//初始化操作
{
    ne[ 0 ] = 0 ;
    idx = 1 ;
}

void add_to_head ( int x )//头插法
{
    val[ idx ] = x ;
    ne[ idx ] = ne[ 0 ] ;
    ne[ 0 ] = idx ++ ;
}

void add_to_k ( int k , int x )//在第k个插入的数后进行插入(其idx即k)
{
    val[ idx ] = x ;
    ne[ idx ] = ne[ k ] ;
    ne[ k ] = idx ++ ;
}