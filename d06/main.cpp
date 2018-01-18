#include <iostream>

int main(int argc, char **argv)
{
    if (argc != 2) {
        std::cout << "Usage: ./convert \"str\"\n";
        return (-1);
    }

    void *v = &argv[1];
    char *c = reinterpret_cast<char *>(v);
    int *i = static_cast<int *>(v);
    float *f = reinterpret_cast<float *>(v);
    // double *d;
    std::cout << c << std::endl;
    std::cout << *i << std::endl;
    std::cout << *f << std::endl;

    return 0;
}