#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
#include <limits>

using namespace std;

// Structure to store course information
struct Course {
    string name;
    double credits;
    char grade;
    double gradePoint;
};

// Structure to store semester information
struct Semester {
    int semesterNum;
    vector<Course> courses;
    double semesterGPA;
    double totalCredits;
    double totalGradePoints;
};

// Function to convert letter grade to grade point
double getGradePoint(char grade) {
    switch (toupper(grade)) {
        case 'A': return 4.0;
        case 'B': return 3.0;
        case 'C': return 2.0;
        case 'D': return 1.0;
        case 'F': return 0.0;
        default: return 0.0;
    }
}

// Function to display the grade description
string getGradeDescription(double gpa) {
    if (gpa >= 3.5) return "Excellent";
    else if (gpa >= 3.0) return "Very Good";
    else if (gpa >= 2.5) return "Good";
    else if (gpa >= 2.0) return "Satisfactory";
    else if (gpa >= 1.0) return "Pass";
    else return "Fail";
}

// Function to clear input buffer
void clearInputBuffer() {
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}

// Function to validate numeric input
// Replace 'auto' keyword which is not supported in C++98
// Function to validate numeric input
template <typename T>
T getValidInput(const string& prompt) {
    T value;
    while (true) {
        cout << prompt;
        if (cin >> value) {
            clearInputBuffer();
            return value;
        }
        cout << "Invalid input. Please try again.\n";
        clearInputBuffer();
    }
}

// Function to get valid grade input
char getValidGrade() {
    char grade;
    while (true) {
        cout << "Enter grade (A/B/C/D/F): ";
        cin >> grade;
        grade = toupper(grade);
        
        if (grade == 'A' || grade == 'B' || grade == 'C' || grade == 'D' || grade == 'F') {
            clearInputBuffer();
            return grade;
        }
        
        cout << "Invalid grade. Please enter A, B, C, D, or F.\n";
        clearInputBuffer();
    }
}

// Function to calculate semester GPA
void calculateSemesterGPA(Semester &semester) {
    semester.totalCredits = 0.0;
    semester.totalGradePoints = 0.0;
    
    for (size_t i = 0; i < semester.courses.size(); i++) {
        Course& course = semester.courses[i];
        course.gradePoint = getGradePoint(course.grade);
        semester.totalCredits += course.credits;
        semester.totalGradePoints += (course.credits * course.gradePoint);
    }
    
    if (semester.totalCredits > 0) {
        semester.semesterGPA = semester.totalGradePoints / semester.totalCredits;
    } else {
        semester.semesterGPA = 0.0;
    }
}

// Function to display semester details
void displaySemesterDetails(const Semester &semester) {
    cout << "\n======================================\n";
    cout << "Semester " << semester.semesterNum << " Details\n";
    cout << "======================================\n";
    cout << left << setw(30) << "Course Name" << setw(10) << "Credits" << setw(10) << "Grade" << setw(15) << "Grade Points\n";
    cout << "--------------------------------------\n";
    
    for (size_t i = 0; i < semester.courses.size(); i++) {
        const Course& course = semester.courses[i];
        cout << left << setw(30) << course.name 
             << setw(10) << fixed << setprecision(1) << course.credits 
             << setw(10) << course.grade 
             << setw(15) << fixed << setprecision(2) << course.gradePoint << "\n";
    }
    
    cout << "--------------------------------------\n";
    cout << "Total Credits: " << fixed << setprecision(1) << semester.totalCredits << "\n";
    cout << "Total Grade Points: " << fixed << setprecision(2) << semester.totalGradePoints << "\n";
    cout << "Semester GPA: " << fixed << setprecision(2) << semester.semesterGPA << "\n";
    cout << "Grade: " << getGradeDescription(semester.semesterGPA) << "\n";
    cout << "======================================\n";
}

// Function to calculate and display CGPA
void calculateAndDisplayCGPA(const vector<Semester> &semesters) {
    double totalCredits = 0.0;
    double totalGradePoints = 0.0;
    
    for (size_t i = 0; i < semesters.size(); i++) {
        const Semester& semester = semesters[i];
        totalCredits += semester.totalCredits;
        totalGradePoints += semester.totalGradePoints;
    }
    
    double cgpa = 0.0;
    if (totalCredits > 0) {
        cgpa = totalGradePoints / totalCredits;
    }
    
    cout << "\n======================================\n";
    cout << "CGPA Calculation\n";
    cout << "======================================\n";
    cout << "Total Credits (All Semesters): " << fixed << setprecision(1) << totalCredits << "\n";
    cout << "Total Grade Points (All Semesters): " << fixed << setprecision(2) << totalGradePoints << "\n";
    cout << "CGPA: " << fixed << setprecision(2) << cgpa << "\n";
    cout << "Overall Grade: " << getGradeDescription(cgpa) << "\n";
    cout << "======================================\n";
}

int main() {
    cout << "\n=======================================\n";
    cout << "       CGPA CALCULATOR PROGRAM         \n";
    cout << "=======================================\n";
    
    vector<Semester> semesters;
    
    int numSemesters = getValidInput<int>("Enter the number of semesters: ");
    
    for (int i = 0; i < numSemesters; i++) {
        Semester semester;
        semester.semesterNum = i + 1;
        
        cout << "\n----- Semester " << semester.semesterNum << " -----\n";
        int numCourses = getValidInput<int>("Enter the number of courses for this semester: ");
        
        for (int j = 0; j < numCourses; j++) {
            Course course;
            
            cout << "\nCourse " << j + 1 << ":\n";
            cout << "Enter course name: ";
            getline(cin, course.name);
            
            course.credits = getValidInput<double>("Enter credit hours: ");
            course.grade = getValidGrade();
            
            semester.courses.push_back(course);
        }
        
        calculateSemesterGPA(semester);
        displaySemesterDetails(semester);
        
        semesters.push_back(semester);
    }
    
    if (!semesters.empty()) {
        calculateAndDisplayCGPA(semesters);
    } else {
        cout << "\nNo semester data to calculate CGPA.\n";
    }
    
    cout << "\nThank you for using the CGPA Calculator!\n";
    
    return 0;
}
