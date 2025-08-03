#include <iostream>
using namespace std;

int main() {
    int gradeLevel;
    cout << "Enter the grade level (1: Primary, 2: Middle, 3: Higher, 4: College): ";
    cin >> gradeLevel;

    int age;
    cout << "Enter the age: ";
    cin >> age;

    switch (gradeLevel) {
        case 1:
            cout << "Grade Level: Primary School\n";
            if (age >= 6 && age <= 10) {
                cout << "Age matches the typical range for Primary School.\n";
            } else {
                cout << "Age does not match the typical range for Primary School.\n";
            }
            break;

        case 2:
            cout << "Grade Level: Middle School\n";
            if (age >= 11 && age <= 13) {
                cout << "Age matches the typical range for Middle School.\n";
            } else {
                cout << "Age does not match the typical range for Middle School.\n";
            }
            break;

        case 3:
            cout << "Grade Level: Higher School\n";
            if (age >= 14 && age <= 18) {
                cout << " Age matches the typical range for Higher School.\n";
            } else {
                cout << " Age does not match the typical range for Higher School.\n";
            }
            break;

        case 4:
            cout << "Grade Level: College\n";
            if (age >= 19) {
                cout << "Age matches the typical range for College (19+).\n";
            } else {
                cout << "Age does not match the typical range for College.\n";
            }
            break;

        default:
            cout << " Invalid grade level entered.\n";
    }

    return 0;
}

