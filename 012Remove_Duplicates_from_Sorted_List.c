#include <stdio.h>
#include <stdlib.h>

// Definition for singly-linked list.
struct ListNode
{
    int val;
    struct ListNode *next;
};


struct ListNode* deleteDuplicates(struct ListNode* head){
    struct ListNode *iterator = head, *temp = NULL;
    while(iterator != NULL){
        temp = iterator->next;
        while(temp != NULL && temp->val == iterator->val){
            temp = temp -> next;
        }
        iterator->next = temp;
        iterator = temp;
    }
    return head;
}