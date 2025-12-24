// 234. Palindrome Linked List


// Node* reverseLL(Node* head){
//     if(head == NULL){
//         return head;
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

// bool checkPallindrome(Node* head){
//     if(head == NULL || head->next == NULL){
//         return true;
//     }

//     Node* slow = head;
//     Node* fast = head;
//     while(fast!=nullptr && fast->next == nullptr){
//         slow = slow->next;
//         fast = fast->next->next;
//     } 

//     Node* middleRev = reverseLL(slow);
//     Node* mover = head; 
//     while(middleRev!=nullptr){
//         if(mover->data != middleRev->data){
//             middleRev = reverseLL(slow);
//             return false;
//         }
//         middleRev = middleRev->next;
//         mover = mover->next;
//     }

//     reverseLL(slow);
//     return true;
// }