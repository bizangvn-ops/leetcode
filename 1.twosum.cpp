#include <iostream>
using namespace std;

int twosum(int a[], int n, int x) {
    bool found = false;

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] + a[j] == x) {
                cout << "a[" << i << "], a[" << j << "]";
                found = true;
                return 1;
            }
        }
    }

    if (!found) {
        cout << "Khong tim thay";
    }
    return 0;
}

int main() {
    int n, x;
    cout << "Nhap n: ";
    cin >> n;
    
    int*a = new int[n];

    for (int i = 0; i < n; i++) {
        cout << "a[" << i << "] = ";
        cin >> a[i];
    }

    cout << "Nhap x (two sum): ";
    cin >> x;

    twosum(a, n, x);

    delete[] a; 
    return 0;
}
