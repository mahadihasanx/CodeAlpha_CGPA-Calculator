#include <iostream>
#include <vector>
#include <iomanip>
#include <conio.h>

using namespace std;

int main() {
    int numCourses;
    double totalCredits = 0.0, totalGradePoints = 0.0;
    cout << "===================================================\n";
    cout << "                                                   \n";
    cout << "             Welcome To CGPA Calculator 📠         \n";
    cout << "         Fast and Accurate GPA Calculation         \n";
    cout << "                                                   \n";
    cout << "===================================================\n\n";


    cout << "Press any key to continue..."; 
    getch();
    system("cls");

    cout << "===== CGPA Calculator =====\n";

    cout << "Enter the number of courses: ";
    cin >> numCourses;

    vector<double> grades(numCourses);
    vector<double> credits(numCourses);

    for (int i = 0; i < numCourses; i++) {
        cout << "\nCourse " << i + 1 << ":\n";

        cout << "Enter Grade Point (0.0 - 4.0): ";
        cin >> grades[i];

        cout << "Enter Credit Hours: ";
        cin >> credits[i];

        totalCredits += credits[i];
        totalGradePoints += grades[i] * credits[i];
    }

    double gpa = totalGradePoints / totalCredits;

    cout << "\n========== Result ==========\n";
    cout << left << setw(10) << "Course"
        << setw(15) << "Grade Point"
        << setw(15) << "Credit Hours" << endl;

    for (int i = 0; i < numCourses; i++) {
        cout << left << setw(10) << i + 1
            << setw(15) << grades[i]
            << setw(15) << credits[i] << endl;
    }

    cout << "\nTotal Credits      : " << totalCredits << endl;
    cout << "Total Grade Points : " << totalGradePoints << endl;
    cout << fixed << setprecision(2);
    cout << "Semester GPA       : " << gpa << endl;
    cout << "Overall CGPA       : " << gpa << endl;

    return 0;
}