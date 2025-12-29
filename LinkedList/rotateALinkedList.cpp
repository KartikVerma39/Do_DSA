// 61. Rotate List



// Node* rotateLL(Node* head , int k){
//     if(head == nullptr || k == 0){
//         return head;
//     }

//     Node* tail = head;
//     int count = 1;
//     while(tail->next!=nullptr){
//         tail = tail->next;
//         count++;
//     }

//     k = k%count;
//     int steps = count - k;
//     Node* curr = head;
//     for(int i = 0 ; i < steps ; i++){
//         curr = curr->next;
//     }
    
//     Node* newHead = curr->next;
//     curr->next = nullptr;
//     tail->next = head;
//     return newHead;
// }