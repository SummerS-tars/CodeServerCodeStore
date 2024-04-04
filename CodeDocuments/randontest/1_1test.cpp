#include <iostream>

using namespace std;

struct Node
{
    /* data in each node*/
    int val = 0 ;

    /* pointer in each node*/
    Node* next = NULL ;

    /* common node function*/
    Node( int v ) { val = v ; }
};

int main()
{
    auto head = new Node( -1 ) ;
}