#include <stdio.h>

int first_fest_reward(int a) {
    if (a==0) return 0;
    int num = 1, num_sum = 1;
    if (a <= num_sum) return 5000000;
    num_sum += ++num;
    if (a <= num_sum) return 3000000;
    num_sum += ++num;
    if (a <= num_sum) return 2000000;
    num_sum += ++num;
    if (a <= num_sum) return 500000;
    num_sum += ++num;
    if (a <= num_sum) return 300000;
    num_sum += ++num;
    if (a <= num_sum) return 100000;
    return 0;
}

int second_fest_reward(int a) {
    if (a==0) return 0;
    int num = 1, num_sum = 1, reward = 5120000;
    if (a <= num_sum) return reward;
    num *= 2; num_sum += num; reward /= 2;
    if (a <= num_sum) return reward;
    num *= 2; num_sum += num; reward /= 2;
    if (a <= num_sum) return reward;
    num *= 2; num_sum += num; reward /= 2;
    if (a <= num_sum) return reward;
    num *= 2; num_sum += num; reward /= 2;
    if (a <= num_sum) return reward;
    return 0;
}

int main() {
    int t, a, b;
    scanf("%d", &t);
    while(t-- > 0) {
        scanf("%d %d", &a, &b);
        printf("%d\n", first_fest_reward(a) + second_fest_reward(b));
    }

    return 0;
}