#include <stdio.h>
#include <vector>
using namespace std;

vector<pair<long long, long long> > v;

long long get_div(long long n, long long recurr, long long div) {
    
    if (recurr == 1) return n % div;
    
    for (int i = 0; i < v.size(); i++) {
        if (v[i].first == recurr) return v[i].second;
    }
    
    long long one = get_div(n, recurr/2, div);
    long long two = get_div(n, recurr - recurr/2, div);
    long long value = one * two % div;
    v.push_back(make_pair(recurr, value));
    return value;
}

int main() {
    long long a, b, c; scanf("%lld %lld %lld", &a, &b, &c);
    printf("%lld", get_div(a, b, c));
}