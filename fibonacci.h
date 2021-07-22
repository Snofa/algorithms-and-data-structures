//
// Created by Snofa on 26.06.2021.
//

#ifndef STL_FUNCTION_FIBONACCI_H
#define STL_FUNCTION_FIBONACCI_H
long int fib(long int n) {
    if (n == 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    } else if (n >= 2) {
        int fibArray[n]{0};
        for (int i = 2; i <= n; ++i) {
            fibArray[i] = fibArray[i - 1] + fibArray[i - 2];
        }
        return fibArray[n];
    }
}
#endif //STL_FUNCTION_FIBONACCI_H
