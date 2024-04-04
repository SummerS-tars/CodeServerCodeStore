
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

/*
class Solution 
{
    public:
        void deleteNode(ListNode* node) 
        {
            *node = * ( node -> next ) ;
            //用节点6覆盖节点4，其中的next依然指向节点5，就达到了在O(1)时间删除节点4的目的了
        }
};
*/