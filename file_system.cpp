#include <iostream>
#include <unordered_map>
using namespace std;

unordered_map<string, string> fileSystem;

void createFile(string name, string content) { fileSystem[name] = content; }
void readFile(string name) { cout << fileSystem[name] << "\n"; }
void deleteFile(string name) { fileSystem.erase(name); }

void fileSystem() {
    cout << "File System Feature\n";
    // Implement file operations here
}
