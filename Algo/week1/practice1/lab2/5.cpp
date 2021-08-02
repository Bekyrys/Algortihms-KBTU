// #include <iostream>
// using  namespace  std;

// struct node{
//     int number;
//     node * next;
//     node(int val){
//         number = val;
//     }
// };
// struct ll{
// private:
//     node * head;
//     int sz;
//     void _print(struct node * current) {
//         if (current != NULL) {
//             cout << current->number <<  " ";
//             _print(current->next);
//         }
//     }
// public:
//     ll(){
//         head = NULL;
//         sz = 0;
//     }
    
//     void add(int val) {
//         node * temp = new node(val);
//         temp->next = head;
//         head = temp;
//         sz++;
//     }
//     void sortList() {
//         node * current = head;
//         while(current != NULL){
//             node * temp = current->next;
//             while(temp != NULL){
//                 if(current->number > temp->number){
//                     swap(current->number, temp->number);
//                 }
//                 temp = temp->next;
//             }
//             current = current->next;
//        }
//     }
//     bool remove(int val){
//         node * prev = NULL;
//         node * current = head;
//         while(current != NULL){
//             if(current->number == val) break;
//             prev = current;
//             current = current->next;
//         }
//         if(current == NULL) return false;
//         else if(prev == NULL){
//             head = head->next;
//         }
//         else{
//             prev->next = current->next;
//         }
//         delete current;
//         sz--;
//         return true;
//     }
//     void print() {
//         _print(head);
//     }
    
//     int size(){
//         return sz;
//     }
// };

// int main() {
//     freopen("input.txt","r",stdin);
//     freopen("output.txt","w",stdout);
//     ll * l = new ll();
//     string x;
//     while(cin >> x){
//        // int val = atoi(x.substr(1).c_str());
//         if(x[0] == '+'){
//        //     l->add(val);
//         }else{
//          //   if(l->remove(val) == false){
//                 cout << "ERROR" << endl;
//                 return 0;
//             }
//         }
//     }
//     if(l->size() == 0){
//         cout << "EMPTY";
//     }else{
//         l->sortList();
//         l->print();
//     }
//     return 0;
// }