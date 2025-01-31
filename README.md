# CGPA Calculator

## Description

This CGPA Calculator is a C++ program that allows users to calculate their Cumulative Grade Point Average (CGPA) based on marks or grades and corresponding subject credits. The program offers two modes: one for users who have their marks, and another for users who have grades, making it flexible and user-friendly.

## Features

- **Mode Selection**: Users can choose between entering marks or grades.
- **Marks-Based Calculation**: Automatically assigns grade points based on a predefined marks range.
- **Grade-Based Calculation**: Supports grades from "O" to "F" with corresponding grade points.
- **Credit Management**: Each subject is associated with credit weight for accurate CGPA calculation.
- **Input Validation**: Skips failed subjects (marks below 40 or grade 'F') and warns for invalid inputs.
- **Formatted Output**: Displays CGPA with two decimal precision.

## Usage

1. Enter the number of subjects.
2. Choose the input type:
   - Enter `1` for marks-based input.
   - Enter `2` for grade-based input.
3. For each subject:
   - Enter marks or grades and the corresponding credit.
4. View the calculated CGPA or a message if no valid credits were entered.

## Grade Point System

- Marks to Grade Points:
  - 85 and above: 10
  - 78 to 84: 9
  - 70 to 77: 8
  - 62 to 69: 7
  - 54 to 61: 6
  - 45 to 53: 5
  - 40 to 44: 4
  - Below 40: Fail
- Grades to Grade Points:
  - O: 10, A+: 9, A: 8, B+: 7, B: 6, C: 5, D: 4, E: 0, F: Fail

## Technologies Used

- **Language**: C++
- **Libraries**: `<bits/stdc++.h>`, `<iostream>`, `<string>`, `<iomanip>`

## How to Run

1. Compile the program using a C++ compiler:
   ```
   g++ cgpa_calculator.cpp -o cgpa_calculator
   ```
2. Run the compiled executable:
   ```
   ./cgpa_calculator
   ```
