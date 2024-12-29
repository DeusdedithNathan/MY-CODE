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
     std::unordered_map<std::string, std::string> urlMap; // Map to store original and shortened URLs
std::string originalURL, shortURL;
    int choice;

srand(time(0)); // Seed the random number generator

 while (true) {
 	 std::cout << "Menu:\n1. Shorten URL\n2. Retrieve Original URL\n3. Exit\nEnter your choice: ";


