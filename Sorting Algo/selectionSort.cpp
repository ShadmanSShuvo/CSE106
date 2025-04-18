#include <iostream>
#include <vector>
using namespace std;

void selectionSort(vector<int>& a) {
    int n = a.size();
    for (int i = 0; i < n - 1; i++) {
        int minIdx = i;
        for (int j = i + 1; j < n; j++)
            if (a[j] < a[minIdx])
                minIdx = j;
        swap(a[i], a[minIdx]);
    }
}

int main() {
    vector<int> a = {9, 7, 5, 3, 1};
    selectionSort(a);
    for (int x : a) cout << x << " ";
    return 0;
}