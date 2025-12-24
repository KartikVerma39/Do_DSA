// 328. Odd Even Linked List



// Node* evenOdd(Node* head){
//     if(head == NULL || head->next == NULL){
//         return head;
//     }

//     Node* odd = head;
//     Node* even = head->next;
//     Node* remEven = head->next;
//     while(even!=NULL && even->next!=NULL){
//         odd->next = odd->next->next;
//         even->next = even->next->next;

//         odd = odd->next;
//         even = even->next;
//     }
//     odd->next = remEven;
//     return head;
// }