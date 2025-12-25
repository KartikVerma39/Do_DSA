// 9. Remove Nth Node From End of List


// Node* removeFromEnd(Node* head , int n){
//     if(head == NULL || n <= 0){
//         return head;
//     }

//     Node* slow = head;
//     Node* fast = head;
//     for(int i = 0 ; i<n ; i++){
//         fast = fast->next;
//     }

//     if(fast == NULL){
//         Node* temp = head->next;
//         delete head;
//         return head->next;
//     }

//     while(fast->next!=NULL){
//         slow = slow->next;
//         fast = fast->next;
//     }

//     Node* delNode = slow->next;
//     slow->next = slow->next->next;
//     delete delNode;
//     return head;

// }