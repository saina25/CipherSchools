/*
Implement a function int countCharacter(const std::string &str, char ch) that counts the number of occurrences of a specific character in a given string. Test the function with different strings and characters.

Sample Input:- String ="Hello, World!"
character=’l’
Output:- 3
*/
#include <iostream>
#include <string>

int countCharacter(const std::string &str, char ch) {
    int count = 0;
    for (char c : str) {
        if (c == ch) {
            count++;
        }
    }
    return count;
}

int main() {
    std::string str = "Hello, World!";
    char character = 'l';
    std::cout << "Occurrences of '" << character << "': " << countCharacter(str, character) << std::endl;
    return 0;
}
