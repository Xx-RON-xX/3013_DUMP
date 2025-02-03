#include <iostream>
#include <time.h>

// Define some ANSI color codes
const std::string RESET = "\033[0m";
const std::string RED = "\033[31m";
const std::string GREEN = "\033[32m";
const std::string BLUE = "\033[34m";
const std::string MAGENTA = "\033[35m";

using namespace std;

void bubbleSort(int* arr, int n) {
    bool swapped;
    for (int i = 0; i < n - 1; ++i) {
        swapped = false;
        for (int j = 0; j < n - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = true;
            }
        }
        if (!swapped) break;
    }
}

bool exists(int *a, int size, int r) {
    for(int i = 0; i < size; i++) {
        if(a[i] == r) return true;
    }
    return false;
}

void loadUnique(int *a, int size) {
    int r;
    for(int i = 0; i < size; i++) {
        r = rand() % 100;
        while(exists(a, size, r)) {
            r = rand() % 100;
        }
        a[i] = r;
    }
}

void printArray(int *a, int size, int foundIndex = -1) {
    cout << BLUE;
    for(int i = 0; i < size; i++) {
        cout << (foundIndex == i ? MAGENTA : "") << a[i] << " " << RESET;
    }
    cout << endl;
}

// This function performs a binary search on the sorted array to find the given key.
int binary_search(int *a, int size, int key) {
    int l = 0, r = size - 1, m;
    while (l <= r) {
        m = (l + r) / 2;
        if (a[m] == key) return m;
        else if (a[m] < key) l = m + 1;
        else r = m - 1;
    }
    return -1;
}

// This function removes a specified key from the sorted array and maintains its order.
void delete_key(int*& a, int& size, int key) {
    int index = binary_search(a, size, key);
    if (index == -1) {
        cout << RED << "Key: " << key << " NOT FOUND" << RESET << endl;
        return;
    }
    for (int i = index; i < size - 1; i++) {
        a[i] = a[i + 1];
    }
    size--;
    int* newArr = new int[size];
    for (int i = 0; i < size; i++) {
        newArr[i] = a[i];
    }
    delete[] a;
    a = newArr;
    cout << GREEN << "Key: " << key << " deleted successfully" << RESET << endl;
}

int main() {
    srand(345345);
    int size = 10;
    int* a = new int[size];
    loadUnique(a, size);
    bubbleSort(a, size);
    printArray(a, size);
    int key = 26;
    delete_key(a, size, key);
    printArray(a, size);
    delete[] a;
    return 0;
}
