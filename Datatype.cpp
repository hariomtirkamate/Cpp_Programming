/*

    cmd :-      -------------------g++ filename.cpp -o Myexe.exe-------------------
    
-   C++ data types are divided into Primitive and Non-Primitive. 

-   Primitive Data-Types Includes:
                               int, float, double, char, and bool.

    Non-Primitive Data-Types Include :
                                    * Derived Data Types :
                                                         arrays, pointers, reference, function.
                                                         
                                    * User-Defined Data Types :
                                                            structures, unions, enums and classe.
*/

#include <iostream>
using namespace std;

struct Student {
    string name;
    int age;
};

int main() 
{

    // Primitive Data Types
    int iNo = 10;
    float fNo = 3.14f;
    double dNo = 99.99;
    char ch = 'A';
    bool flag = true;

    // Derived Data Types
    int arr[3] = {10, 20, 30};
    int *ptr = &iNo;

    // User-defined Data Types
    Student s = {"Ganesh", 21};
    enum Days {Mon, Tue, Wed};
    Days today = Mon;

    // Display values
    cout << "int: " << iNo << endl;
    cout << "float: " << fNo << endl;
    cout << "double: " << dNo << endl;
    cout << "char: " << ch << endl;
    cout << "bool: " << flag << endl;

    cout << "Array: ";
    for (int x : arr) {
        cout << x << " ";
    }
    cout << endl;

    cout << "Pointer value: " << *ptr << endl;

    cout << "Struct name: " << s.name << ", age: " << s.age << endl;
    cout << "Enum value (Mon=0): " << today << endl;

    return 0;
}