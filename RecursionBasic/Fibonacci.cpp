#include<iostream>
using namespace std;

int fn(int i) {
    if (i <= 1)
        return i;
    int last = fn(i - 1);
    int slast = fn(i - 2);
    return last + slast;
}

int main() {
    int n;
    cin >> n;
    cout << fn(n);
    return 0;
}


