// 2. Add Two Numbers



// Node* addTwoLLs(Node* headA , Node* headB){
//     Node* dummyNode = new Node(-1);
//     Node* curr = dummyNode;
//     int carry = 0;
//     Node* temp1 = headA;
//     Node* temp2 = headB;
//     while(temp1!=nullptr || temp2!=nullptr){
//         int sum = carry;
//         if(temp1){
//             sum += temp1->data;
//         }
//         if(temp2){
//             sum += temp2->data;
//         }
//         Node* newNode = new Node(sum%10);
//         curr->next = newNode;
//         curr = newNode;
//         carry = sum/10;
//         if(temp1){
//             temp1 = temp1->next;
//         }
//         if(temp2){
//             temp2 = temp2->next;
//         }
//     }

//     if(carry){
//         Node* newNode = new Node(carry);
//         curr->next = newNode;
//     }
//     return dummyNode->next;
// }