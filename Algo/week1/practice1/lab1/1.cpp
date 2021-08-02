#include <iostream>
#include <stack>

using namespace std;

stack<int> s;
string str;
int n;

int main()

{
    while (cin >> str) {
        if (str == "push") {
            cin >> n;
            s.push(n);
            cout << "ok" << endl;
        }
        else if (str == "pop") {
            cout << s.top() << endl;
            s.pop();
        }
        else if (str == "back") {
            cout << s.top() << endl;
        }
        else if (str == "size") {
            cout << s.size() << endl;
        }
        else if (str == "clear") {
            while(!s.empty()) s.pop();
            cout << "ok" << endl;
        }
        else if (str == "exit") {
            cout << "bye" << endl;
            break;
        }
    }
    return 0;
}