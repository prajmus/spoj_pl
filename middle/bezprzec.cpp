#include <iostream>
#include <cstdlib>

int main()
{
    if (int a = 1) {
        if (int b = 1) {
            if (std::cin >> a >> b) {}
            if (std::cout << a + b << '\n') {}
        }
    }
}
