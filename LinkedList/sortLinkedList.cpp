// 148. Sort List


// Node* middle(Node* head){
//     if(head == NULL){
//         return head;
//     }

//     Node* slow = head;
//     Node* fast = head;
//     while(fast->next!=nullptr && fast->next->next!=nullptr){
//         slow = slow->next;
//         fast = fast->next->next;
//     }
//     return slow;
// }

// Node* mergeTwoLL(Node* left , Node* right){
//     Node* dummy = new Node(-1);
//     Node* temp = dummy;
//     while(left!=nullptr && right!=nullptr){
//         if(left->data < right->data){
//             temp->next = left;
//             temp = left;
//             left = left->next;
//         }
//         else{
//             temp->next = right;
//             temp = right;
//             right = right->next;
//         }
//     }
//     if(left){
//         temp->next = left;
//     }
//     else{
//         temp->next = right;
//     }
//     return dummy->next;
// }


// Node* sortLL(Node* head){
//     if(head == NULL || head->next == NULL){
//         return head;
//     }

//     Node* middleNode = middle(head);
//     Node* left = head;
//     Node* right = middleNode->next;
//     middleNode->next = nullptr;
//     left = sortLL(left);
//     right = sortLL(right);
//     return mergeTwoLL(left , right);
// }