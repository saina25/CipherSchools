/*
Write a function std::string concatenateStrings(const std::string &str1, const std::string &str2) that concatenates two strings and returns the result. Test the function with various input strings.

Sample Input : - str1 = "Hello, "
str2 = "World!"

Sample Output :- "Hello, World!"
*/
#include <iostream>
#include <string>

std::string concatenateStrings(const std::string &str1, const std::string &str2) {
    return str1 + str2;
}

int main() {
    std::string str1 = "Hello, ";
    std::string str2 = "World!";
    std::cout << "Concatenated string: " << concatenateStrings(str1, str2) << std::endl;
    return 0;
}
