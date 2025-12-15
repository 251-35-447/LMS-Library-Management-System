# LMS-Library-Management-System

Library Management System

This project is a console-based Library Management System written in C, designed to demonstrate core procedural programming concepts along with modular design and unit testing.
The system allows a user to:
Add new books
View all available books
Remove books
Issue books to students
View issued book records
⚙️ How to Run This Project
Steps to Run
Clone the repository
git clone https://github.com/NahidHasanDishan/LMS-Library-Management-System.git
cd library-management-system
Compile the main program : gcc .\main.c
Run the executable: .\a.exe
The menu-driven interface will appear in the terminal.
Testing:
This project supports unit testing without modifying production code, using the UNIT_TEST macro.
Compile the test file with UNIT_TEST enabled : gcc test_main.c -DUNIT_TEST
Run the test executable: .\a.exe

The output will show:
Expected vs Actual values
pass/Fail status for each test case
