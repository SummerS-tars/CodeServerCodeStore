#include<iostream>
using namespace std;
struct slNode {
	int data = 0 ;
	struct slNode* next = NULL ;
};
typedef struct slNode node;
int n;
void fuzhi(node*l)
{
	cout << "请输入你想输入的几个值" << endl;
	cin >> n;
	node* p;
	p= l ;
	for (int i=0; i < n; i++)
	{
		node* u = new node;
		cin >> u->data ;
		p->next= u;
		p = p->next;
	}
}
void classify(node*l,node*s,node*k)
{
	node* p = l->next ;
	node* w = s ;
	node* e = k ;
	while(p!=NULL)
	{
		if (p->data % 2 == 0)
		{
			node* n = new node; 
			n->data = p->data;
			w->next = n;
			w = w->next;
	    } 
		else
		{
			node* n = new node;
			n->data = p->data;
			e->next = n;
			e = e->next;
		}
		p = p->next;
	}
}
void print(node* l)
{
	node* p = l->next;
    while(p!=NULL)
    {
        cout << p->data << "  ";
        p = p->next;
    }
}
int main()
{
	node* l = new node;//主
	node* s = new node;//偶
	node* k = new node;//奇
	fuzhi(l);
    
    for ( auto p = l->next ; p ; p = p->next ) printf("%d " , p->data ) ;
    puts("") ;

	classify(l, s, k);
	print(s);
	print(k);
	return 0;
}