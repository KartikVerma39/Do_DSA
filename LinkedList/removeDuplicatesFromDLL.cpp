// Remove duplicates from a sorted doubly linked list



// Node* removeDuplicatesDLL(Node* head){
//     if(head == nullptr){
//         return nullptr;
//     }

//     Node* curr = head;
//     while(curr!=nullptr && curr->next!=nullptr){
//         if(curr->data == curr->next->data){
//             Node* dup = curr->next;
//             curr->next = dup->next;
//             if(dup->next){
//                 dup->next->prev = curr;
//             }
//             delete dup;
//         }
//         else{
//             curr = curr->next;
//         }
//     }
//     return head;
// }