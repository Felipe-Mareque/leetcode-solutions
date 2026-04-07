/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    struct ListNode* aux1 = l1;
    struct ListNode* aux2 = l2;
    int              carry = 0;
    int              x = 0;

    struct ListNode* new = malloc(sizeof(struct ListNode));
    struct ListNode* head = malloc(sizeof(struct ListNode));
    new->next=NULL;
    head->next=NULL;
    head->val = 0;
    new->val = 0;

    while(aux1 != NULL || aux2 != NULL || carry != 0 ){
        int v1 = (aux1 != NULL) ? aux1->val : 0;
        int v2 = (aux2 != NULL) ? aux2->val : 0;  

       
        if( v1 + v2 + carry >= 10 ){
             new->val =  (v2 + v1) - 10 + carry ;  
            carry = 1;
        } 
        else {
            new->val = ( v1 + v2 ) + carry;
            carry = 0;
        }

          if ( x == 0 ){
            head = new;
            x++;
        }

         if ( aux1 != NULL ) aux1 = aux1->next;
         if ( aux2 != NULL ) aux2 = aux2->next;

        if ( aux1 != NULL || aux2 != NULL || carry != 0 ){
            struct ListNode* tmp = malloc(sizeof(struct ListNode));
            tmp->next = NULL;
            tmp->val = 0;
            new->next = tmp;
            new = new->next;
        }
        
    }
    return head;
}