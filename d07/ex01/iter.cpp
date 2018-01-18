#include <iostream>
#include <string>

template < typename T, typename U, typename V >
void    iter(T *arr, U size, V (*f)(T *)) {
    for (U i = 0; i < size; i++) {
        f(&arr[i]);
    }
}

template < typename R >
void    fun(R *r) {
    std::cout << *r << std::endl;
}

int main() {
    int ia[5] = {1, 2, 3, 4, 5};
    std::string sa[3] = {"hello", "world", "tim"};

    iter<int, int, void>(ia, 5, fun<int>);
    iter<std::string, int, void>(sa, 3, fun<std::string>);
    return 0;
}