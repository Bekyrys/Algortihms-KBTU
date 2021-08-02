#include <iostream>
using  namespace  std;

struct node{
    string word;
    int frequency;
    node * next;
    node(string x){
        word = x;
        frequency = 1;
    }
};
struct ll{
private:
    node * head;
    node * find(struct node * current, string x) {
        if (current == NULL) return NULL;
        if(current->word == x) return current;
        return find(current->next, x);
    }
    void _print(struct node * current) {
        if (current != NULL) {
            cout << current->word << " " << current->frequency << endl;
            _print(current->next);
        }
    }
public:
    ll(){
        head = NULL;
    }
    
    void add(string x) {
        node * temp = find(head, x);
        if(temp == NULL){
            temp = new node(x);
            temp->next = head;
            head = temp;
        }else{
            temp->frequency = temp->frequency + 1;
        }
    }
    void print() {
        _print(head);
    }
    void sortList() {
        node * current = head;
        while(current != NULL){
            node * temp = current->next;
            while(temp != NULL){
                if(current->word > temp->word){
                    swap(current->word, temp->word);
                    swap(current->frequency, temp->frequency);
                }
                temp = temp->next;
            }
            current = current->next;
       }
    }
};

int main() {
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    string x;
    ll * l = new ll();
    while(getline(cin,x)){
        if(x != "" && x.size() > 0){
            l->add(x);
        }else{
            break;
        }
    }
    l->sortList();
    l->print();
    return 0;
}