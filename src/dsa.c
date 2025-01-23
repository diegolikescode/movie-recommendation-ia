#include <stdio.h>
#include <stdlib.h>

#include "./algorithms/linear-search/linear-search.h"
#include "./array/array.h"

void test_array() {
    Array* arr = init_array(11);
    push_array(arr, 6, 1, 2, 3, 4, 5, 6);
    push_array(arr, 5, 21, 22, 23, 24, 26);

    Array* arr2 = init_array(8);
    push_array(arr2, 2, 200, 300);

    Array* a = concat_array(arr, arr2);

    print_array(a);
    free(arr);
    free(arr2);
}

void test_linear_search() {
    int a1[] = {1, 2, 3, 54};
    int a2[] = {600, 210, 11, 2, 69, 420, 1};

    size_t a1len = sizeof(a1) / sizeof(a1[0]);
    size_t a2len = sizeof(a2) / sizeof(a1[0]);
    linear_search(a1, a1len, 3);
    linear_search(a2, a2len, 420);
}

int main() {
    // test_array();
    test_linear_search();

    return 0;
}
