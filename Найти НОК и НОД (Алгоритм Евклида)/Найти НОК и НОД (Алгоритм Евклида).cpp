// greatest_common_divisor - НОД двух чисел
int gcd(int a, int b) {
    if (a % b == 0)
        return b;
    if (b % a == 0)
        return a;
    if (a > b)
        return gcd(a % b, b);
    return gcd(a, b % a);
}


// least_common_multiple - НОК двух чисел
int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}


// НОД массива
int gcd_arr(int* arr, int n) {
    int result = gcd(arr[0], arr[1]);
    for (int i = 2; i <= n - 2; ++i) {
        if (result == 1)
            return 1;
        result = gcd(result, arr[i]);
    }
    return result;
}


// НОК массива
int lcm_arr(int* arr, int n) {
    return product(arr, n) / gcd_arr(arr, n);
}
