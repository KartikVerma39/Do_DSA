// 2095. Delete the Middle Node of a Linked List



// Node* deleteMiddleLL(Node* head){
//     if(head == NULL || head->next == NULL){
//         delete head;
//         return NULL;
//     }

//     Node* prev = NULL;
//     Node* slow = head;
//     Node* fast = head;

//     while(fast!=nullptr && fast->next!=nullptr){
//         prev = slow;
//         slow = slow->next;
//         fast = fast->next->next;
//     }

//     Node* delNode = slow;
//     prev->next = slow->next;
//     delete delNode;
//     return head;
// }