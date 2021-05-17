
#include <iostream>
#include <cstdlib>

int main()
{
    int n;
    std::cin >> n;

    int* a = new int[n];
    int* b = new int[n];
    int* c = new int[2 * n];

    for (int i = 0; i < n; ++i) {
        a[i] = rand() % 30;
        b[i] = rand() % 30;
    }
    
    for (int i = 0; i < n; ++i) {
        c[i] = a[i];
    std::cout << c[i] << std::endl;
    }
    std::cout << "second part" << std::endl;
    for (int i = 0; i < n; ++i) {
        for (int e = n; e < 2 * n; ++e) {
            c[e] = b[i];
        }
        std::cout << c[i] << std::endl;
    }


}

