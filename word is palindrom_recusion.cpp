#include <iostream>

int stringLength(const char *str);

bool isPalindrome(const char *str, int left, int right);

int stringLength(const char *str) {
    int len = 0;
    while (str[len] != '\0') {
        ++len;
    }
    return len;
}

bool isPalindrome(const char *str, int left, int right) {
    if (left > right) {
        return true;
    }
    
    if (str[left] != str[right]) {
        return false;
    }
    
    return isPalindrome(str, left + 1, right - 1);
}

int main() {
    const int max_size = 100;
    char arr[max_size] = {0};
    int len = 0;
    
    std::cout << "Enter the word: ";
    
    char ch = 0;
    std::cin.get(ch);
    
    while (ch != '\n' && len < max_size - 1) {
        arr[len++] = ch;
        std::cin.get(ch);
    }
    
    arr[len] = '\0';
    
    len = stringLength(arr);  

    bool palindrome = isPalindrome(arr, 0, len - 1);

    if (palindrome) {
        std::cout << "The word is a palindrome." << std::endl;
    } else {
        std::cout << "The word is not a palindrome." << std::endl;
    }

    return 0;
}