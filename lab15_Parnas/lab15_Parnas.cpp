#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cout << "Enter number: ";
    cin >> n;
    string s = to_string(abs(n));
    int size = s.size();
    int a[10];
    for (int i = 0; i < size; i++)
        a[i] = s[i] - '0';
    cout << "Array: ";
    for (int i = 0; i < size; i++)
        cout << a[i] << " ";
    for (int i = 0; i < size - 1; i++)
        for (int j = 0; j < size - i - 1; j++)
            if (a[j] > a[j + 1])
                swap(a[j], a[j + 1]);

    cout << "\nSorted: ";
    for (int i = 0; i < size; i++)
        cout << a[i] << " ";
    cout << endl;
}
