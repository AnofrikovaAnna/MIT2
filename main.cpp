#include <iostream>

using namespace std;

int fib(int n){
    if (n == 1)
        return 0;
    if (n == 2)
        return 1;
    return fib(n - 2) + fib(n - 1);
}

int main(){
    cout << "Hello, World!" << "\n";
    int n;
    cin >> n;
    cout << fib(n) << "\n";
}
