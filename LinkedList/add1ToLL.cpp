// Add 1 to a Linked List Number




// int helper(Node* temp){
//     if(temp == NULL){
//         return 1;
//     }

//     int carry = helper(temp->next);
//     temp->data = temp->data + carry;
//     if(temp->data < 10){
//         return 0;
//     }
//     else{
//         temp->data = 0;
//         return 1;
//     }
// }

// Node* addToLL(Node* head){
//     if(head == NULL){
//         return head;
//     }

//     int carry = helper(head);
//     if(carry == 1){
//         Node* newNode = new Node(1);
//         newNode->next = head;
//         return newNode;
//     }
//     return head;
// }