#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;


struct ListNode
{
    int val;
    ListNode* next;
    ListNode (int x):val(x),next(nullptr){}
};




class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* curA = headA;
        ListNode* curB = headB;
        int sizeA=0,sizeB=0;
        while(curA!=nullptr){
            sizeA++;
            curA=curA->next;
        }
        while(curB!=nullptr){
            sizeB++;
            curB=curB->next;
        }
        int sizeC;
        curA = headA;
        curB = headB;
        if(sizeA>sizeB){
            sizeC=sizeA-sizeB;
            while (sizeC--)
            {
                curA = curA->next;
            }
        }
        else{
            sizeC=sizeB-sizeA;
            while (sizeC--)
            {
                curB = curB->next;
            }
        }
        while(curA!=nullptr&&curB!=nullptr){
            if (curA == curB) {
                return curA;
            }
            curA = curA->next;
            curB = curB->next;
        }
        return NULL;
    }
};