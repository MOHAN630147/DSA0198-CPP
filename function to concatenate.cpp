#include <iostream>
#include <cstring> 
using namespace std;

string concatenate(const string &str1, const string &str2) {
    return str1 + str2; 
}
char* concatenate(const char* arr1, const char* arr2) {
    
    size_t len1 = strlen(arr1);
    size_t len2 = strlen(arr2);
    char* result = new char[len1 + len2 + 1]; 
    strcpy(result, arr1);
    strcat(result, arr2);
    
    return result;
}

int main() {
    
    string str1, str2;
    cout << "Enter two strings:" << endl;
    getline(cin, str1);
    getline(cin, str2);
    cout << "Concatenated string: " << concatenate(str1, str2) << endl;

    char arr1[100], arr2[100];
    cout << "Enter two character arrays:" << endl;
    cin >> arr1 >> arr2;
    char* concatenatedArray = concatenate(arr1, arr2);
    cout << "Concatenated character array: " << concatenatedArray << endl;

    delete[] concatenatedArray;

    return 0;
}

