#include <iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<forward_list>



using namespace std;
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
// struct ListNode 
// {
// 	int val;
// 	ListNode* next;
// 	ListNode() : val(0), next(NULL) {}
// 	ListNode(int x) : val(x), next(NULL) {}
// 	ListNode(int x, ListNode* next) : val(x), next(next) {}
// 	void printListNode()
// 	{
// 		cout << val << " ";
// 		ListNode* head = next;
// 		while (head)
// 		{
// 			cout << head->val << " ";
// 			head = head->next;
// 		}
// 		cout << endl;
// 	}
// };

// 单链表
// struct ListNode {
//     int val;  // 节点上存储的元素
//     ListNode *next;  // 指向下一个节点的指针
//     ListNode(int x) : val(x), next(NULL) {}  // 节点的构造函数
// };


// class Solution {
// public:
//     ListNode* removeElements(ListNode* head, int val) {
//         //删除头节点
        
//         while(head !=NULL&&head->val ==val){
//             ListNode* tmp = head;
//             head = head->next;
//             delete tmp;
//         }
//         //删除中间节点
//         ListNode* cur = head;
//         while(cur!=NULL&&cur->next!=NULL){
//             if(cur->next->val==val){
//                 ListNode* tmp = cur->next;
//                 cur->next=cur->next->next;
//                 delete tmp;
//             }
//             else{
//                 cur=cur->next;
//             }
//         }
//         return head;
//     }
// };


struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x):val(x),next(NULL){}
};

class Solution{
public:
    ListNode* removeElements(ListNode* head,int val){
        while(head!=NULL&&head->val==val){
            ListNode *tmp =head;
            head = head->next;
            delete tmp;
        }
        ListNode* cur =head;
        while(cur!=NULL&&cur->next!=NULL){
            if(cur->next->val==val){
                ListNode* tmp =cur->next;
                cur->next = cur->next->next;
                delete tmp;
            }
            else{
                cur=cur->next;
            }
        }
        return head;
    }
};









int main(){
    
    ListNode* head;
    head->val=6;
    head->next->val=1;
    head->next->next->val=5;
    head->next->next->next->val=6;
    Solution s1;
    ListNode* s1_answer = s1.removeElements(head,2);
    cout<<s1_answer->val<<endl;
    cout<<s1_answer->next->val<<endl;

    system("pause");
    return 0;
}

