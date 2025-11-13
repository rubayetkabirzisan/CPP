#include <iostream>
#include <cstring>

using namespace std;

class Student {
public:
    char *name;
    int *marks;

    // Constructor
    Student(const char* n, int* m) {
        name = new char[strlen(n) + 1];
        strcpy(name, n);

        marks = new int[5];
        memcpy(marks, m, sizeof(int) * 5);
    }

    // Copy Constructor
    Student(const Student &obj) {
        name = new char[strlen(obj.name) + 1];
        strcpy(name, obj.name);

        marks = new int[5];
        memcpy(marks, obj.marks, sizeof(int) * 5);
    }

    // Destructor
    ~Student() {
        delete[] name;
        delete[] marks;
    }
};

int main() {
    int marksArr[5] = {10, 20, 30, 40, 50};
    Student obj1("John", marksArr);
    Student obj2 = obj1;

    obj2.name = new char[strlen("Jane") + 1];
    strcpy(obj2.name, "Jane");

    obj2.marks[0] = 65;

    cout << "obj1: " << obj1.name << ", marks: ";
    for (int i = 0; i < 5; i++) {
        cout << obj1.marks[i] << " ";
    }
    cout << endl;

    cout << "obj2: " << obj2.name << ", marks: ";
    for (int i = 0; i < 5; i++) {
        cout << obj2.marks[i] << " ";
    }
    cout << endl;

    return 0;
}

