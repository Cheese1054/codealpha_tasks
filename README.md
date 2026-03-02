Question Number 1:
# C++ CGPA Calculator 

A simple and efficient Command Line Interface (CLI) tool written in C++ to calculate Semester GPA and CGPA. This program takes user input for course grades and credit hours, processes them based on a standard 4.0 grading scale, and outputs a formatted summary table.

---

## Features
* **Interactive Input:** Simple prompts for number of courses, grades, and credits.
* **Flexible Grading:** Supports uppercase and lowercase inputs (e.g., `A+`, `a`, `B-`).
* **Formatted Output:** Uses the `<iomanip>` library to display a clean, tabular summary of your results.
* **Accurate Logic:** Implements weighted GPA calculations.

---

## Grade Mapping Table
The program calculates Grade Points based on the following scale:

| Letter Grade | Value | Letter Grade | Value |
| :--- | :--- | :--- | :--- |
| **A+ / A** | 4.00 | **C** | 2.00 |
| **A-** | 3.67 | **C-** | 1.67 |
| **B+** | 3.33 | **D+** | 1.33 |
| **B** | 3.00 | **D** | 1.00 |
| **B-** | 2.67 | **F / Other** | 0.00 |
| **C+** | 2.33 | | |



Question Number 2:
# Simple C++ Authentication System 

A lightweight, file-based User Registration and Login system built with C++. This project demonstrates fundamental concepts of file handling (I/O), data persistence, and basic security logic in a console-based environment.

---

## Key Features
* **User Registration:** Creates new accounts and stores them permanently in a local text file.
* **Username Validation:** Prevents duplicate accounts by checking if a username is already taken.
* **Secure Login:** Validates user credentials against the stored database.
* **Persistent Storage:** Data is saved in `database.txt`, so users exist even after the program is closed.
