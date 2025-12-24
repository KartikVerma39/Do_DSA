// 142. Linked List Cycle II


// Node* detectCycleII(Node* head){
//     if(head == NULL || head->next == NULL){
//         return NULL;
//     }
//     Node* slow = head;
//     Node* fast = head;
//     while(fast!=nullptr && fast->next!= nullptr){
//         slow = slow->next;
//         fast = fast->next->next;
//         if(slow == fast){
//             slow = head;
//             while(slow!=fast){
//                 slow = slow->next;
//                 fast = fast->next;
//             }
//             return slow;
//         }
//     }
//     return slow;
// }