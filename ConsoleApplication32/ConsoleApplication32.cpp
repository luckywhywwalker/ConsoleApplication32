#include <iostream>
#include <cstdio> 
using namespace std;
int main() {
    int letterCount = 0; 
    char ch;
    FILE* file = fopen("input.txt", "r");
    if (file == nullptr) {
        cout << "Error: Could not open the file." << endl;
        return 1;
    }
    while ((ch = fgetc(file)) != EOF) {
        if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
            letterCount++;
        }
    }
    fclose(file);
    cout << "Number of letters in the file: " << letterCount << endl;
    return 0;
}

