#include <bits/stdc++.h>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    int N;
    if (!(std::cin >> N)) {
        return 0;
    }
    long long sum = (long long)N * (N + 1) / 2;
    std::cout << sum << std::endl;
    return 0;
}