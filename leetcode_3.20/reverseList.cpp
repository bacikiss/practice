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






class MyLinkedList {
    
public:
// 单链表
   struct LinkedNode {
        int val;
        LinkedNode* next;
        LinkedNode(int val):val(val), next(nullptr){}
    };
    int _size;
    LinkedNode* _dummyHead;

    MyLinkedList() {
        _dummyHead= new LinkedNode(0);
        _size = 0;
    }
    
    int get(int index) {
        if(index>(_size - 1)||index<0){
            return -1;
        }
        else {
            LinkedNode* cur = _dummyHead->next;
            while(index--){
                cur =cur->next;
            }
            return cur->val;
        }

    }
    
    void addAtHead(int val) {
        LinkedNode* newNode = new LinkedNode(val);//此处多看
        newNode->next = _dummyHead->next;
        _dummyHead->next=newNode;
        _size++;
    }
    
    void addAtTail(int val) {
        LinkedNode* newNode = new LinkedNode(val);
        LinkedNode* cur = _dummyHead;
        while(cur->next!=nullptr){
            cur = cur->next;
        }
        cur->next=newNode;
        _size++;
    }
 
    

    void addAtIndex(int index, int val) {
        if(index<=0){
        LinkedNode* newNode = new LinkedNode(val);//此处多看
        newNode->next = _dummyHead->next;
        _dummyHead->next=newNode;
        _size++;
        }
        else if(index>_size){
            return;
        }
        else{
        // LinkedNode* newNode = new LinkedNode(val);
        LinkedNode* cur = _dummyHead;
        while (index--)
        {
            cur=cur->next;
    
        }
        LinkedNode* newNode = new LinkedNode(val);
        newNode->next= cur->next;
        cur->next = newNode;
        _size++;
        
        }

    }
    
    void deleteAtIndex(int index) {
        LinkedNode* cur;
        cur = _dummyHead;
        if(index>=_size||index<0){
            return;
        }
        else{
            while(index--){
            cur = cur->next;
            }
             LinkedNode* tmp = cur->next;
            cur->next = cur->next->next;
            delete tmp;
        
        }
        

    }
    void printLinkedList() {
        LinkedNode* cur = _dummyHead;
        while (cur->next != nullptr) {
            cout << cur->next->val << " ";
            cur = cur->next;
        }
        cout << endl;
    }

        ListNode* reverseList(ListNode* head) {
        ListNode* pre =NULL;
        ListNode* cur =head;
        ListNode* temp;
        while(cur){
            temp = cur->next;
            cur->next=pre;
            pre = cur;
            cur =temp;
        }
        return pre;
    }


};



// class Solution {
// public:
//     ListNode* reverseList(ListNode* head) {
//         ListNode* pre =NULL;
//         ListNode* cur =head;
//         ListNode* temp;
//         while(cur){
//             temp = cur->next;
//             cur->next=pre;
//             pre = cur;
//             cur =temp;
//         }
//         return pre;
//     }
// };







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

