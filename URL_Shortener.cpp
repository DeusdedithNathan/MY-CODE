#include <iostream>
#include <unordered_map>
#include <string>
#include <ctime>
#include <cstdlib>

// Function to generate a random string of fixed length
std::string generateShortURL() {
    const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
