// Sort a linked list of 0s, 1s and 2s



// Node* sort012(Node* head){
//     if(head == nullptr || head->next == nullptr){
//         return head;
//     }

//     Node* zeroHead = new Node(-1);
//     Node* oneHead = new Node(-1);
//     Node* twoHead = new Node(-1);

//     Node* zero = zeroHead;
//     Node* one = oneHead;
//     Node* two = twoHead;
//     Node* curr = head;

//     while(curr!=nullptr){
//         if(curr->data == 0){
//             zero->next = curr;
//             zero = curr;
//         }
//         else if(curr->data == 1){
//             one->next = curr;
//             one = curr;
//         }
//         else{
//             two->next = curr;
//             two = curr;
//         }
//         curr = curr->next;
//     }

//     if(oneHead->next){
//         zero->next = oneHead->next;
//     }
//     else{
//         zero->next = twoHead->next;
//     }

//     one->next = twoHead->next;
//     two->next = nullptr;

//     Node* newNode = zeroHead->next;

//     delete zeroHead;
//     delete oneHead;
//     delete twoHead;

//     return newNode;
// }