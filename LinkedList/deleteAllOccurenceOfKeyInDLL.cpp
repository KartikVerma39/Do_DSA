// Delete all occurrences of a given key in a doubly linked list



// Node* deleteAllOccurence(Node* head , int x){
//     if(head == nullptr){
//         return NULL;
//     }
//     Node* curr = head;

//     while(curr!=nullptr){
//         if(curr->data == x){
//             if(head == curr){
//                 head = head->next;
//                 if(head){
//                     head->prev = nullptr;
//                 }
//             }
//             Node* prevNode = curr->prev;
//             Node* nextNode = curr->next;
//             if(nextNode!=nullptr){
//                 nextNode->prev = prevNode;
//             }
//             if(prevNode!=nullptr){
//                 prevNode->next = nextNode;
//             }
//             delete curr;
//             curr = nextNode;
//         }
//         else{
//             curr = curr->next;
//         }
//     }
//     return head;
// }