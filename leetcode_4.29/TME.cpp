#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

struct ListNode
{
    int val;
    ListNode* next;
    ListNode(int x):val(x),next(NULL){}
};


class Solution
{
public:
    ListNode* insert0(ListNode* head){
        if(head==nullptr||head->next==nullptr){
            return head;
        }
        ListNode dummpy(0);
        dummpy.next = head;
        ListNode *cur=head;
        while(cur->next!=nullptr){
            // ListNode tmp(0);
            ListNode *tmp = cur->next;
            cur->next = new ListNode(0);
            cur->next->next=tmp;
            cur=cur->next->next;
        }
        return head;
    }
};

int main(){

    cout<<a<<endl;
    system("pause");
    return 0;
}
