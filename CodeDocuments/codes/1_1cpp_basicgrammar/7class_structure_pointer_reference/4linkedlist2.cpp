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
    Node* head = new Node ( 1 ) ;
    Node* p = new Node ( 2 ) ;
    Node* q = new Node ( 3 ) ;

    //头插法：在链表头部加上一个节点
    Node* r = new Node ( 4 ) ;
    r -> next = head ;//易混点：此处head仍是节点1，故节点4中next指向节点1
    head = r ;

    //链表节点的删除：只要在遍历中跳过这个节点就行了
    head -> next = head -> next -> next ;
    //此处就从节点4跳过节点1直接指向节点2

    return 0 ;
}