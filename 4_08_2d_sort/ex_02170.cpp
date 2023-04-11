#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n; scanf("%d", &n);
    vector<vector<int>>v;

    for (int i = 0; i < n; i++) {
        int x, y; scanf("%d %d", &x, &y);
        vector<int>tv = {x, y};
        v.push_back(tv);
    }

    sort(v.begin(), v.end());

    int index = 0;
        int sum = 0;

        while (index < n) {
            int x = v[index][0];

            while (true) {
                if (++index >= n) break;
                if (x != v[index][0]) break;
            }

            if (index >= n) {sum += v[n-1][1] - x; break;}

            int y_big = v[index-1][1];

            while (y_big >= v[index][0]) {
                if (y_big < v[index][1]) y_big = v[index][1];
                if (++index >= n) break;
            }

            sum += y_big - x;
        }
    
    printf("%d", sum);
}