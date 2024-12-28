#include <iostream>
#include <unordered_map>
#include <string>
#include <ctime>
#include <cstdlib>

// Function to generate a random string of fixed length
std::string generateShortURL() {
    const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
const size_t length = 6; // Length of the shortened URL
    std::string shortURL;
    for (size_t i = 0; i < length; ++i) {
        shortURL += charset[rand() % (sizeof(charset) - 1)];
    }
    return shortURL;
}

int main() {
    