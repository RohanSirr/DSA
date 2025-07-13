#include <iostream>
using namespace std;

void fn(int arr[], int l, int r) {
    if (l >= r)
        return;
    swap(arr[l], arr[r]);
    fn(arr, l + 1, r - 1);
}

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];

    cout << "Enter array elements:\n";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    fn(arr, 0, n - 1);

    cout << "Reversed array:\n";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}
