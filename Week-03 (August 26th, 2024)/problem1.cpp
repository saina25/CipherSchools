/*
Write a function int stringLength(const std::string &str) that returns the length of a given string. Test your function with various strings in the main() function.

Sample Input:- str1 = "Hello, World!"
Output:- 13
*/

#include <iostream>
#include <string>

int stringLength(const std::string &str) {
    return str.length();
}

int main() {
    std::string str1 = "Hello, World!";
    std::cout << "Length of string: " << stringLength(str1) << std::endl;
    return 0;
}
