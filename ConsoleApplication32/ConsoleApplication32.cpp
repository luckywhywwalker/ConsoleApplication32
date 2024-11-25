#include <iostream>
#include <cstdio> 
using namespace std;
int main() {
    FILE* ptrFile = fopen("file.txt", "w");
    if (ptrFile != NULL) {
        fputs("adafafafafafffafgggagfagag", ptrFile);
        fclose(ptrFile);
    } else {
        cout << "Error: Could not create or open the file for writing." << endl;
        return 1;
    }
    int letterCount = 0; 
    char ch;
    FILE* file = fopen("file.txt", "r");
    if (file == nullptr) {
        perror("Error opening file");
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
