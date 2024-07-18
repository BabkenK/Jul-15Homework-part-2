#include <iostream>

int counteven(int arr[], int size);

int counteven(int arr[], int size){
    if(size == 0){
        return 0;
    }
    int count = (arr[0] % 2 == 0) ? 1 : 0;
    
    return count + counteven(arr + 1, size - 1);
}

int main(){
    const int m_size = 100;
    int arr[m_size] = {0};
    int size;
    
    std::cout <<"Enter the size of array: ";
    std::cin >> size;
    
    std::cout << "enter the elements: ";
    for (int i = 0; i < size; ++i){
    std::cin >> arr[i];
    }
    
    int evencounted = counteven(arr, size);
    
    std::cout << "Number of even numbers in array = " << evencounted << std::endl;
    
    return 0;
}