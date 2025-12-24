// 206. Reverse Linked List


// Node* reverseLL(Node* head){
//     if(head == NULL){
//         return NULL;
//     }

//     Node* curr = head;
//     Node* prev = NULL;
//     Node* first = NULL;

//     while(curr!=nullptr){
//         first = curr->next;
//         curr->next = prev;
//         prev = curr;
//         curr = first;
//     }
//     return prev;
// }