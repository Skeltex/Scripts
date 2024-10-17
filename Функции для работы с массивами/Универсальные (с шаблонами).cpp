// Вывод элементов массива
template <typename T>
void print(T* arr, int n) {
    for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";
    cout << endl;
}


// Сумма элементов массива
template <typename T>
T sum(T* arr, int n) {
    T sum = 0;
    for (int i = 0; i < n; ++i)
        sum += arr[i];
    return sum;
}


// Произведение элементов массива
template <typename T>
T product(T* arr, int n) {
    T product = 1;
    for (int i = 0; i < n; ++i)
        product *= arr[i];
    return product;
}


// Наибольший элемент массива
template <typename T>
T max(T* arr, int n) {
    T max = arr[0];
    for (int i = 1; i < n; ++i)
        if (arr[i] > max)
            max = arr[i];
    return max;
}


// 2 Наибольших элемента массива
template <typename T>
pair<T, T> max2(T* arr, int n) {
    pair<T, T> max;

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
template <typename T>
T min(T* arr, int n) {
    T min = arr[0];
    for (int i = 1; i < n; ++i)
        if (arr[i] < min)
            min = arr[i];
    return min;
}


// 2 Наименьших элемента массива
template <typename T>
pair<T, T> min2(T* arr, int n) {
    pair<T, T> min;

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
template <typename T>
T* copy(T* arr, int n) {
    T* arr_copy = new T[n];
    for (int i = 0; i < n; ++i)
        arr_copy[i] = arr[i];
    return arr_copy;
}


// Прибавить к каждому элементу массива
template <typename T>
void add(T* arr, int n, T add) {
    for (int i = 0; i < n; ++i)
        arr[i] += add;
}


// Умножить каждый элемент массива
template <typename T>
void multiply(T* arr, int n, T multiply) {
    for (int i = 0; i < n; ++i)
        arr[i] *= multiply;
}


// Модуль каждого элемента массива
template <typename T>
void abs(T* arr, int n) {
    for (int i = 0; i < n; ++i)
        arr[i] = abs(arr[i]);
}


// Заполнить массив одинаковым значением
template <typename T>
void fill(T* arr, int n, T fill) {
    for (int i = 0; i < n; ++i)
        arr[i] = fill;
}


// Получить диапазон от start до stop включительно с шагом step
double* range(double start, double stop, double step, int& n) {
    n = (stop - start) / step + 1;
    double* range = new double[n];
    for (int i = 0; i < n; ++i)
        range[i] = start + step * i;
    return range;
}


// Замена первого вхождения
template <typename T>
void replace_one(T* arr, int n, T old_value, T new_value) {
    for (int i = 0; i < n; ++i)
        if (arr[i] == old_value) {
            arr[i] = new_value;
            return;
        }
}


// Замена первые count вхождений
template <typename T>
void replace_count(T* arr, int n, T old_value, T new_value, int count) {
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
template <typename T>
void replace_all(T* arr, int n, T old_value, T new_value) {
    for (int i = 0; i < n; ++i)
        if (arr[i] == old_value)
            arr[i] = new_value;
}


// Поиск первого вхождения с начала
template <typename T>
int find(T* arr, int n, T value) {
    for (int i = 0; i < n; ++i)
        if (arr[i] == value)
            return i;
    return -1;
}


// Поиск первого вхождения с конца
template <typename T>
int find_end(T* arr, int n, T value) {
    for (int i = n - 1; i >= 0; --i)
        if (arr[i] == value)
            return i;
    return -1;
}


// Сортировка
template <typename T>
void sort(T* arr, int n) {
    sort(arr, arr + n);
}
