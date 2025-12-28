// Find pairs with given sum in doubly linked list


// vector<pair<int,int>>findPair(Node* head , int target){
//     vector<pair<int,int>>ans;

//     Node* right = head;
//     while(right->next!=nullptr){
//         right = right->next;
//     }

//     Node* left = head;
//     while(left->data < right->data){
//         if(left->data + right->data == target){
//             ans.push_back({left->data,right->data});
//             left = left->next;
//             right = right->prev;
//         }
//         else if(left->data + right->data > target){
//             right = right->prev;
//         }
//         else{
//             left = left->next;
//         }
//     }

//     return ans;
// }