#include <iostream>
#include <vector>

int main() {
    int cases;
    std::cin >> cases;

    std::vector<long long> fibs = {0, 1};

    for (int i = 0; i < cases; ++i) {
        int x;
        std::cin >> x;

        try {
            long long fib = fibs.at(x);
        } catch (...) {
            int quantidade = fibs.size();
            while (quantidade != x + 1) {
                fibs.push_back(fibs.back() + fibs[fibs.size() - 2]);
                ++quantidade;
            }
        }

        std::cout << "Fib(" << x << ") = " << fibs[x] << std::endl;
    }

    return 0;
}
