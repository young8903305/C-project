/**
 * reverse linked list by using list operation
 * deal with nodes and their connection one by one
 */


#include <stdio.h>
#include <stdlib.h>

// Definition for singly-linked list.
struct ListNode {
    int val;
    struct ListNode *next;
};



struct ListNode* reverseBetween(struct ListNode* head, int m, int n){

    if(head == NULL){
        return NULL;
    }else if(head -> next == NULL){
        return head;
    }else if(m == n){
        return head;
    }
    
    struct ListNode *previous = NULL, *tail = NULL, *temp = NULL;
    struct ListNode *left = NULL, *iterator = head;
    
    while(m > 1){    // 
        previous = iterator;
        iterator = iterator -> next;
        m--;
        n--;    // m-n+1 is the number of items is needed to be reversed
    }

    // reverse linked list
    left = previous;
    tail = iterator;
    while(n > 0){
        temp = iterator -> next;
        iterator -> next = previous;
        previous = iterator;
        iterator = temp;
        n--;
    }
    
    if(left != NULL){
        left -> next = previous;
    }else{
        head = previous;
    }
    tail -> next = iterator;
    
    // use value to find position and reverse linked list
    /*
    while(iterator != NULL && iterator -> next != NULL){
        if(iterator -> next -> val == m){
            first = iterator;
        }else if(iterator -> val == n){
            second = iterator -> next;
        }
        iterator = iterator -> next;
    }
    
    iterator = first -> next;
    while(iterator != second){
        ne = iterator -> next;
        iterator -> next = previous;
        previous = iterator;
        iterator = ne;
    }
    
    first -> next -> next = iterator;
    first -> next = previous;
    */
    
    
    return head;
}

