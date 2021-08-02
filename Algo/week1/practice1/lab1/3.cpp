#include <iostream>
#include <deque>

using namespace std;

int main(){
    deque<int> s;
    string str;
    int n;
    while (cin >> str) {
        if(str == "push_back")
        {
            cin >> n;
            s.push_back(n);
            cout << "ok" << endl;
        }else if(str == "push_front")
        {
            cin >> n;
            s.push_front(n);
            cout << "ok" << endl;
        }else if(str == "back")
        {
            if(s.size()){
                cout << s.back() << endl;
            }else{
                cout << "error";
            }
        }
        else if(str == "pop_front")
        {
            if(s.size()){
                cout << s.front() << endl;
                s.pop_front();
            }else{
                cout << "error\n";
            }
        }
        else if(str == "pop_back")
        {
            if(s.size()){
                cout << s.back() << endl;
                s.pop_back();
            }else{
                cout << "error\n";
            }
        }
        else if(str == "front")
        {
            if(s.size()){
                cout << s.front() << endl;
            }else{
                cout << "error\n";
            }
        }
            else if(str == "size"){
                cout << s.size() << endl;
            }
            else if(str == "exit"){
                cout << "bye\n";
            }
            else if(str == "clear"){
                s.clear();
                cout << "ok\n";
            }
        }   
    } 
  