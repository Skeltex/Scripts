// ����� ����������� ��������, ��������� �� 1
int find_min_divisor(int n) {
    for (int d = 2; d <= (int)sqrt(n); ++d) {
        if (n % d == 0) {
            return d;
        }
    }
    return n;
}


// ����� ����������� ��������, ��������� �� n
int find_max_divisor(int n) {
    return n / find_min_divisor(n);
}


// ���������� ��������� n
int count_divisors(int n) {
    if (n == 1)
        return 1;

    int count = 2;
    for (int d = 2; d <= (int)sqrt(n); ++d) {
        ++count;
        count += (d != (int)sqrt(n));
    }
    return count;
}


// ���������� ������������� ��������� n
int count_divisors2(int n) {
    if (n == 1)
        return 1;
    return count_divisors(n) - 2;
}
