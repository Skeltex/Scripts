// Поиск наименьшего делителя, отличного от 1
int find_min_divisor(int n) {
    for (int i = 2; i <= (int)sqrt(n); ++i) {
        if (n % i == 0) {
            return i;
        }
    }
    return n;
}


// Поиск наибольшего делителя, отличного от n
int find_min_divisor(int n) {
    return n / find_min_divisor(n);
}


// Количество делителей n
int count_divisors(int n) {
    if (n == 1)
        return 1;

    int count = 2;
    for (int d = 0; d <= (int)sqrt(n); ++d) {
        ++count;
        count += (d != (int)sqrt(n));
    }
    return count;
}


// Количество нетривиальных делителей n
int count_divisors2(int n) {
    if (n == 1)
        return 1;
    return count_divisors(n) - 2;
}
