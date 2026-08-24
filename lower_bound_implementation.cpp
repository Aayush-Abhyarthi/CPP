#include <iostream>
#include <vector>
using namespace std;

int lowerBound(vector<int>& v, int target) {
    int low = 0, high = v.size();

    while (low < high) {
        int mid = low + (high - low) / 2;

        if (v[mid] < target)
            low = mid + 1;
        else
            high = mid;
    }

    return low; // index of first element >= target
}

int main() {
    vector<int> v = {1, 2, 2, 4, 5, 7};

    int x = 8;

    int idx = lowerBound(v, x);

    if (idx < v.size())
        cout << "Lower bound of " << x << " is " << v[idx]
             << " at index " << idx << endl;
    else
        cout << "No element >= " << x << endl;
}
