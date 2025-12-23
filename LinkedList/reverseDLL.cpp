// Reverse a Doubly Linked List



// Node* reverseDLL(Node* head){
//     if(head == NULL || head->next == NULL){
//         return head;
//     }

//     Node* back = NULL;
//     Node* curr = head;
//     while(curr!=NULL){
//         back = curr->next;
//         curr->next = curr->prev;
//         curr->prev = back;
//         curr = curr->prev;
//     }
//     return back->prev;
// }