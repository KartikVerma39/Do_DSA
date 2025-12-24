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





// Recursion Approach


// Node* reverseLL(Node* head){
//     if(head == NULL || head->next == NULL){
//         return head;
//     }

//     Node* newNode = reverseLL(head->next);
//     Node* front = head->next;
//     front->next = head;
//     head->next = NULL;
//     return newNode;
// }