// 876. Middle of the Linked List


// Node* middleNode(Node* head){
//     if(head == NULL){
//         return NULL;
//     }
//     Node* slow = head;
//     Node* fast = head;
//     while(fast!=nullptr && fast->next!=nullptr){
//         slow = slow->next;
//         fast = fast->next->next;
//     } 
//     return slow;
// }