#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, c; scanf("%d %d", &n, &c);

    vector<int>v;
    for (int i = 0; i < n; i++) {
        int temp; scanf("%d", &temp);
        v.push_back(temp);
    }

    // for (int x : v) printf("%d\n", x);
    sort(v.begin(), v.end());
    // for (int x : v) printf("%d\n", x);

    int min = 1;
    int max = 1000000000;
    int result = 0;

    while (min <= max) {
        int mid = (min + max) / 2;

        int count = 0;
        int index = 0;

        while (index <= n - 1) {

            int start = v[index];
            count++;

            while (1) {
                if (++index >= n) break;
                if (v[index] - start > mid - 1) break;
            }
        }

        if (c <= count) {result = mid; min = mid + 1;}
        else max = mid - 1;
    }

    printf("%d", result);

}