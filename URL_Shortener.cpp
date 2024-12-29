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
 std::cin >> choice;
        std::cin.ignore(); // To ignore the newline character after entering the choice
        
        switch (choice) {
        	 case 1:
                // Shorten URL
                std::cout << "Enter the original URL: ";
                std::getline(std::cin, originalURL);
                shortURL = generateShortURL();
                urlMap[shortURL] = originalURL;
                std::cout << "Shortened URL: " << shortURL << std::endl;
                break;

            case 2:
                // Retrieve Original URL
                std::cout << "Enter the shortened URL: ";
                std::getline(std::cin, shortURL);
                if (urlMap.find(shortURL) != urlMap.end()) {
                    std::cout << "Original URL: " << urlMap[shortURL] << std::endl;
                } else {
                    std::cout << "Shortened URL not found!" << std::endl;
                }
                break;

            case 3:
                // Exit
                std::cout << "Exiting..." << std::endl;
                return 0;
            default:
                std::cout << "Invalid choice! Please try again." << std::endl;
                break;
      }
    }

    return 0;
}