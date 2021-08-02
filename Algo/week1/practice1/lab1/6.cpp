#include <iostream>
#include <stack>

using namespace std;

int main(){
    string s;
    cin >> s;
    stack<char> stack;
    for(int i = 0; i < s.size(); i++){
        if (stack.empty()) stack.push(s[i]);
		else if (stack.top() == '(' && s[i] == ')') stack.pop();
		else if (stack.top() == '[' && s[i] == ']') stack.pop();
		else if (stack.top() == '{' && s[i] == '}') stack.pop();
		else stack.push(s[i]);
    }
    if(stack.empty()) cout << "Yes";
    else cout << "NO";
}