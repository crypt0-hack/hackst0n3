#include <iostream>


struct Pair_t {
    int a;
    int b;
};

// Pair_t sel(int x);
void modify(Pair_t *p);

int main() {
    // Pair_t n;
    // int x;

    // std::cout << "Enter n:  ";
    // std::cin >> x;

    // n = sel(x);
    // std::cout << n.a << ' ' << n.b << std::endl;


    Pair_t x;
    std::cin >> x.a >> x.b;

    Pair_t y;
    y = x;

    modify(&x);
    std::cout << x.a << ' ' << x.b << std::endl;
    std::cout << y.a << ' ' << y.b << std::endl;

    return 0;
}


// Pair_t sel(int x) {
//     Pair_t res;

//     res.a = x * x;
//     res.b = x * x * x;

//     return res;
// }
void modify(Pair_t *p) {
    p -> a += 1;  // p -> a = (*p).a += 1
    p -> b += 10;
}
