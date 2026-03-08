#include<stdio.h>
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2){
    struct ListNode* head=NULL;
    struct ListNode* tail=NULL;
    int carry=0;
    while(l1 !=NULL || l2 !=NULL ||  carry !=0){
        int val1=0;
        int val2=0;
        if(l1 !=NULL){
            val1 =l1->val;
            l1 = l1->next;

        }
        if(l2 !=NULL){
            val2=l2->val;
            l2=l2->next;
        }
        int sum=val1+val2+carry;
        carry=sum/10;
        int digit=sum%10;
        struct ListNode* newNode=(struct ListNode*)malloc(sizeof(struct ListNode));
        newNode->val =digit;
        newNode->next=NULL;
        if(head==NULL){
            head=newNode;
            tail=newNode;
        }
        else{
            tail->next=newNode;
            tail=newNode;
        }
    }
    /*if(carry>0){
        struct ListNode* newNode=(struct ListNode*)malloc(sizeof(struct ListNode));
        newNode->val=carry;
        newNode->next=NULL;
        tail->next=newNode;
    }*/
    return head;
}
