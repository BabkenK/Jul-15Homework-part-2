#include <iostream>

int findmax(int arr[], int size);

int findmax(int arr[], int size) {
    if (size == 0) {
        return -1;  
    }
    if (size == 1) {
        return arr[0];  
    }
    int maxrest = findmax(arr + 1, size - 1);  
    if (arr[0] > maxrest) {
        return arr[0];  
    } else {
        return maxrest;  
    }
}

int main() {
    const int m_size = 100;
    int arr[m_size] = {0};
    int size;

    std::cout << "Enter the size of the array: ";
    std::cin >> size;

    std::cout << "Enter the elements of the array: ";
    for (int i = 0; i < size; ++i) {
        std::cin >> arr[i];
    }

    int max = findmax(arr, size);

    if (max == -1) {
        std::cout << "No maximum value " << std::endl;
    } else {
        std::cout << "The maximum value of the array = " << max << std::endl;
    }

    return 0;
}
