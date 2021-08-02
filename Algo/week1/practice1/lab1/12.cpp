#include <iostream>
using namespace std;
int Nod(int a, int b)
{
    while (a && b)
        if (a >= b)
           a %= b;
        else
           b %= a;
    return a | b;
}
int main()
{
    int N, K;
    cin >> N >> K;
    cout << (N/Nod(N,K)) * K << endl;
    return 0;
}