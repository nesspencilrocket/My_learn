#include <iostream>
#include <string>
#include <algorithm>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int N;
    std::string S;
    
    if (!(std::cin >> N >> S)) {
        return 0;
    }

    int L = S.length();
    int K = N - L;
    
    std::string padding_o(K, 'o');
    std::string result = padding_o + S;
    std::cout << result << std::endl;
    
    
    return 0;
}