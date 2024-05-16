#include <iostream>


int main() {
    int64_t x;
    double y = 1.0;

    x = *reinterpret_cast<int64_t *>(&y);
    std::cout << x << std::endl;

    return 0;
}
