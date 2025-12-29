// 25. Reverse Nodes in k-Group




// void rev(Node* temp){
//     Node* curr = temp;
//     Node* first = NULL;
//     Node* prev = NULL;

//     while(curr!=nullptr){
//         first = curr->next;
//         curr->next = prev;
//         prev = curr;
//         curr = first;
//     }
// }

// Node* findK(Node* temp , int k){
//     k -= 1;
//     while(temp!=nullptr && k>0){
//         temp = temp->next;
//         k--;
//     }
//     return temp;
// }

// Node* revrseInGroups(Node* head , int k){
//     if(head == NULL || k <= 1){
//         return head;
//     }

//     Node* temp = head;
//     Node* prevNode = NULL;
//     while(temp!=nullptr){
//         Node* kthNode = findK(temp , k);
//         if(kthNode == NULL){
//             if(prevNode){
//                 prevNode->next = temp;
//             }
//             break;
//         }
//         Node* newNode = kthNode->next;
//         kthNode->next = NULL;
//         rev(temp);
//         if(temp == head){
//             head = kthNode;
//         }
//         else{
//             prevNode->next = kthNode;
//         }
//         prevNode = temp;
//         temp = newNode;
//     }
//     return head;
// }