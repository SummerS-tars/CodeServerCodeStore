#include <iostream>

using namespace std;

struct Node /*node 节点*/
{
    int val ;
    Node* next ;

    Node ( int _val ) : val ( _val ) , next ( NULL ) {} //构造函数
    
    //NULL表示空指针，值为0
};

int main()
{
    Node/*这是Node结构体*/ node = Node ( 1 )/*这是Node函数*/ ;
    Node* p = &node ;
    //上述步骤定义了一个名为node的Node结构体，并把node的地址写入p中
    
    //new函数可以对上述进行整合
    Node* q = new Node ( 2 ) ;
    //相当于动态开了一片空间，并把其地址传给q
    //此处Node* 写 auto 也可

    auto r = new Node ( 3 ) ;

    /*结构体中的调用:
    1.普通结构体，使用'.'
    2.结构体地址，使用'->'(C++ only)*/
    p -> next = q ;
    q -> next = r ;
    //容易误解的点：上述两行中next是在不同struct中的，因此不是同一个东西

    /*上述中一些解释：
    1.p 所存“地址” 一般命名为 “头节点” (head)
    2.val表示节点数，例如p指向节点1
    3.p -> next = q 表调用p指向的struct中的指针next，并指向q表示的struct
    4.由3.类推连接1~3节点*/

    //1.
    Node* head = p ;

    //链表的遍历方式
    for ( Node* i = head ; i ; i = i -> next )
        cout << i -> val << endl ;

    return 0 ;
}