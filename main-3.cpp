#include <bits/stdc++.h>
using namespace std;

int main() {
    int number_of_subjects;
    int marks, credit;
    string grade;
    double cgpa = 0.0, total_credits = 0.0, weighted_grade_points = 0.0;
    
    cout << "Enter number of subjects: ";
    cin >> number_of_subjects;
    
    int choice;
    cout << "Enter your choice (1 if you have marks or 2 if you have grades): ";
    cin >> choice;
    
    if (choice == 1) {
        for (int i = 1; i <= number_of_subjects; i++) {
            cout << "Enter marks of subject " << i << ": ";
            cin >> marks;
            cout << "Enter credit of subject " << i << ": ";
            cin >> credit;
            
            int grade_points;
            if (marks >= 85) {
                grade_points = 10;
            } else if (marks >= 78 && marks < 85) {
                grade_points = 9;
            } else if (marks >= 70 && marks < 78) {
                grade_points = 8;
            } else if (marks >= 62 && marks < 70) {
                grade_points = 7;
            } else if (marks >= 54 && marks < 62) {
                grade_points = 6;
            } else if (marks >= 45 && marks < 54) {
                grade_points = 5;
            } else if (marks >= 40 && marks < 45) {
                grade_points = 4;
            } else {
                cout << "Marks less than 40 are considered as fail. Skipping this subject." << endl;
                continue;
            }
            
            weighted_grade_points += grade_points * credit;
            total_credits += credit;
        }
    } else if (choice == 2) {
        for (int i = 1; i <= number_of_subjects; i++) {
            cout << "Enter grade of subject " << i << ": ";
            cin >> grade;
            cout << "Enter credit of subject " << i << ": ";
            cin >> credit;
            
            int grade_points;
            if (grade == "O") {
                grade_points = 10;
            } else if (grade == "A+") {
                grade_points = 9;
            } else if (grade == "A") {
                grade_points = 8;
            } else if (grade == "B+") {
                grade_points = 7;
            } else if (grade == "B") {
                grade_points = 6;
            } else if (grade == "C") {
                grade_points = 5;
            } else if (grade == "D") {
                grade_points = 4;
            } else if(grade == "E") {
                grade_points = 0;
            } else if (grade == "F") {
                cout << "Grade 'F' indicates failure. Skipping this subject." << endl;
                continue;
            } else {
                cout << "Invalid grade entered. Skipping this subject." << endl;
                continue;
            }
            
            weighted_grade_points += grade_points * credit;
            total_credits += credit;
        }
    } else {
        cout << "Invalid choice!" << endl;
        return 1;
    }
    
    if (total_credits > 0) {
        cgpa = weighted_grade_points / total_credits;
        cout << "Your CGPA is: " << fixed << setprecision(2) << cgpa << endl;
        cout << "This result is not appropriate but very to actual cgpa." << endl;
    } else {
        cout << "No valid credits entered. Unable to calculate CGPA." << endl;
    }
    
    return 0;
}