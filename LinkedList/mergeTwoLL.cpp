// 21. Merge Two Sorted Lists



// Node* sortedLL(Node* head1 , Node* head2){
//     if(head1 == NULL && head2 == NULL){
//         return NULL;
//     }

//     Node* dummy = new Node(-1);
//     Node* temp = dummy;

//     Node* curr1 = head1;
//     Node* curr2 = head2;

//     while(curr1!=nullptr && curr2!=nullptr){
//         if(curr1->data < curr2->data){
//             temp->next = curr1;
//             temp = curr1;
//             curr1 = curr1->next;
//         }
//         else{
//             temp->next = curr2;
//             temp = curr2;
//             curr2 = curr2->next;
//         }
//     }

//     if(curr1){
//         temp->next = curr1;
//     }
//     else{
//         temp->next = curr2;
//     }
    
//     return dummy->next;
     
// }