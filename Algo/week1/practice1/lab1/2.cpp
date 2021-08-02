#include<iostream>
#include<queue>
using namespace std;

queue<int> q;
string s;
int x;
    
int main() {
    queue<int> q;
    string str;
    int a;
    
    while(cin >> str){
        if (str == "push"){
            cin >> a;
            q.push(a);
            cout << "ok" << endl;
        }
        else if (str == "pop"){
            cout << q.front() << endl;
            q.pop();
        }
        else if (str == "front") {
            cout << q.front() << endl;
        }
        else if (str == "size") {
            cout << q.size() << endl;
        }
        else if (str == "clear") {
            while(q.empty() != true){
                q.pop();
            }
            cout << "ok" << endl;
        }
        else if (str == "exit") {
            cout << "bye" << endl;
            break;
        }
    }

    return 0;
}