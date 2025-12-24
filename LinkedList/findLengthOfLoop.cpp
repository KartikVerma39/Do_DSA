// Find length of Loop


// int lengthOfLoop(Node* head){
//     if(head == nullptr || head->next == nullptr){
//         return 0;
//     }

//     Node* slow = head;
//     Node* fast = head;

//     while(fast=nullptr && fast->next!=nullptr){
//         slow = slow->next;
//         fast = fast->next->next;
//         if(slow == fast){
//             slow = slow->next;
//             int count = 1;
//             while(slow!=fast){
//                 slow = slow->next;
//                 count++;
//             }
//             return count;
//         }
//     }
//     return 0;
// }