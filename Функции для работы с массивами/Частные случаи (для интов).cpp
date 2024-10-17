// Вывод элементов массива
void print(int* arr, int n) {
    for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";
    cout << endl;
}


// Сумма элементов массива
int sum(int* arr, int n) {
    int sum = 0;
    for (int i = 0; i < n; ++i)
        sum += arr[i];
    return sum;
}


// Произведение элементов массива
int product(int* arr, int n) {
    int product = 1;
    for (int i = 0; i < n; ++i)
        product *= arr[i];
    return product;
}


// Наибольший элемент массива
int max(int* arr, int n) {
    int max = arr[0];
    for (int i = 1; i < n; ++i)
        if (arr[i] > max)
            max = arr[i];
    return max;
}


// 2 Наибольших элемента массива
pair<int, int> max2(int* arr, int n) {
    pair<int, int> max;

    if (arr[0] >= arr[1])
        max = { arr[0], arr[1] };
    else
        max = { arr[1], arr[0] };

    for (int i = 2; i < n; ++i) {
        if (arr[i] > max.first) {
            max.second = max.first;
            max.first = arr[i];
        }
        else if (arr[i] > max.second)
            max.second = arr[i];
    }

    return max;
}


// Наименьший элемент массива
int min(int* arr, int n) {
    int min = arr[0];
    for (int i = 1; i < n; ++i)
        if (arr[i] < min)
            min = arr[i];
    return min;
}


// 2 Наименьших элемента массива
pair<int, int> min2(int* arr, int n) {
    pair<int, int> min;

    if (arr[0] < arr[1])
        min = { arr[0], arr[1] };
    else
        min = { arr[1], arr[0] };

    for (int i = 2; i < n; ++i) {
        if (arr[i] < min.first) {
            min.second = min.first;
            min.first = arr[i];
        }
        else if (arr[i] < min.second)
            min.second = arr[i];
    }

    return min;
}


// Копия массива
int* copy(int* arr, int n) {
    int* arr_copy = new int[n];
    for (int i = 0; i < n; ++i)
        arr_copy[i] = arr[i];
    return arr_copy;
}


// Прибавить к каждому элементу массива
void add(int* arr, int n, int add) {
    for (int i = 0; i < n; ++i)
        arr[i] += add;
}


// Умножить каждый элемент массива
void multiply(int* arr, int n, int multiply) {
    for (int i = 0; i < n; ++i)
        arr[i] *= multiply;
}


// Модуль каждого элемента массива
void abs(int* arr, int n) {
    for (int i = 0; i < n; ++i)
        arr[i] = abs(arr[i]);
}


// Заполнить массив одинаковым значением
void fill(int* arr, int n, int fill) {
    for (int i = 0; i < n; ++i)
        arr[i] = fill;
}


// Получить диапазон от start до stop включительно с шагом step
int* range(int start, int stop, int step, int& n) {
    n = (stop - start) / step + 1;
    int* range = new int[n];
    for (int i = 0; i < n; ++i)
        range[i] = start + step * i;
    return range;
}


// Замена первого вхождения
void replace_one(int* arr, int n, int old_value, int new_value) {
    for (int i = 0; i < n; ++i)
        if (arr[i] == old_value) {
            arr[i] = new_value;
            return;
        }
}


// Замена первые count вхождений
void replace_count(int* arr, int n, int old_value, int new_value, int count) {
    if (count == 0)
        return;

    int counter = 0;
    for (int i = 0; i < n; ++i)
        if (arr[i] == old_value) {
            arr[i] = new_value;
            ++counter;
            if (counter >= count)
                return;
        }
}


// Замена всех вхождений
void replace_all(int* arr, int n, int old_value, int new_value) {
    for (int i = 0; i < n; ++i)
        if (arr[i] == old_value)
            arr[i] = new_value;
}


// Поиск первого вхождения с начала
int find(int* arr, int n, int value) {
    for (int i = 0; i < n; ++i)
        if (arr[i] == value)
            return i;
    return -1;
}


// Поиск первого вхождения с конца
int find_end(int* arr, int n, int value) {
    for (int i = n - 1; i >= 0; --i)
        if (arr[i] == value)
            return i;
    return -1;
}


// Сортировка
void sort(int* arr, int n) {
    sort(arr, arr + n);
}
