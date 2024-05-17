#include <iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

struct ListNode
{
    int val ;
    ListNode* next;
    ListNode(int x):val(x),next(NULL) {}
};

class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        ListNode* pre = new ListNode(0);
        pre->next = head;
        ListNode* cur = pre;
        while (cur->next!=nullptr&&cur->next->next!=nullptr)
        {
            ListNode* cur1 = cur->next;
            ListNode* cur2 = cur1->next;
            ListNode* cur3 = cur2->next;
            cur->next = cur2;
            cur2->next=cur1;
            cur1->next=cur3;
            cur=cur->next->next;
        }
        return pre->next;
        
    }
};






int main(){
    system("chcp 65001");

    MyLinkedList s1;
    s1.addAtHead(1);
    cout <<"第一次"<<endl;
    s1.printLinkedList();
    s1.addAtTail(3);
    cout <<"第二次"<<endl;
    s1.printLinkedList();
    s1.addAtIndex(1,2);
    cout <<"第三次"<<endl;
    s1.printLinkedList();
    s1.get(1);
    s1.deleteAtIndex(1);
    cout <<"第四次"<<endl;
    s1.get(1);
    s1.printLinkedList();

    
    // s1.reverseList(_dummyHead->next);
    cout <<"第五次"<<endl;
    

    system("pause");
    return 0;
}

