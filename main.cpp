#include <iostream>

using namespace std;

void fib(int n){
    int a1 = 0, a2 = 1, cur;
    for (int i = 1; i <= n; i++){
        if (i == 1)
            cout << a1 << "\n";
        else if (i == 2)
            cout << a2 << "\n";
        else{
            cur = a1 + a2;
            a1 = a2;
            a2 = cur;
            cout << a2 << "\n"; 
        }
    }
}

int main(){
    cout << "Hello, World!" << "\n";
    int n;
    cin >> n;
    fib(n);
}
