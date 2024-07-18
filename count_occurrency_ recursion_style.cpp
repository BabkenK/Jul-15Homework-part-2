#include <iostream>

int countoccur(int arr[], int size, int target);

int countoccur(int arr[], int size, int target) {
    if (size == 0)  
        return 0;
    }
    return (arr[0] == target ? 1 : 0) + countoccur(arr + 1, size - 1, target);
     
}

int main() {
    const int m_size = 100;
    int arr[m_size] = {};  
    int size = 0;
    int target = 0;
    
    std::cout << "Enter the size of array: ";
    std::cin >> size;
    
    std::cout << "Enter the elements of array: ";
    for (int i = 0; i < size; ++i) {
        std::cin >> arr[i];
    }
    
    std::cout << "Enter the target element to count occurrency: ";
    std::cin >> target;
    
    int result = countoccur(arr, size, target);
    
    std::cout << "Number of occurrency in array = " << result << std::endl;  
    
    return 0;
}

