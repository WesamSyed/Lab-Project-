#include <iostream>
using namespace std;
int main() {

    // Admin credentials

    string adminEmail = "uoladmin@uni.edu";
    string adminPass = "uolpass123";

    // Program details

    string prog1 = "MBBS";
    string prog2 = "DPT";
    short seatsProg1 = 3;
    short seatsProg2 = 2;
    float minCriteria1 = 75.0;
    float minCriteria2 = 65.0;

    cout << "=== University Admission System ===" << endl;
    cout << "1. Admin Login" << endl;
    cout << "2. Student Application" << endl;
    cout << "3. Student Attendance System" << endl;
    cout << "4. Gym Management System" << endl;
    cout << "5. Hostel Management System" << endl;

    int userChoice;
    
    cout << "Enter your choice (1, 2, 3, 4, or 5): ";
    cin >> userChoice;

    if (userChoice == 1) { 

        // Admin Login

        string emailInput, passInput;

        cout << "\n--- Admin Login ---" << endl;
        cout << "Enter Email: ";
        cin >> emailInput;
        cout << "Enter Password: ";
        cin >> passInput;

        if (emailInput == adminEmail && passInput == adminPass) {
            cout << "\nLogin Successful!" << endl;
            cout << "Program 1: " << prog1 << " | Seats: " << seatsProg1 << " | Minimum Criteria: " << minCriteria1 << "%" << endl;
            cout << "Program 2: " << prog2 << " | Seats: " << seatsProg2 << " | Minimum Criteria: " << minCriteria2 << "%" << endl;
        } else {
            cout << "\nInvalid credentials! Access denied." << endl;
        }

    } else if (userChoice == 2) { 

        // Student Application
        
        string studentName;
        string studentEmail;
        string studentCNIC;
        int marks;
        int selectedProgram;
        float percentage;
        short totalMarks = 100;

        cout << "\n--- Student Application ---" << endl;
        cout << "Enter Full Name: ";
        cin >> studentName;
        cout << "Enter Email: ";
        cin >> studentEmail;
        cout << "Enter CNIC: ";
        cin >> studentCNIC;
        cout << "Enter Your Marks (out of " << totalMarks << "): ";
        cin >> marks;

        percentage = (marks * 100.0) / totalMarks;

        cout << "\n Available Programs:" << endl;
        cout << "1. " << prog1 << endl;
        cout << "2. " << prog2 << endl;
        cout << "Enter Program Choice (1 or 2): ";
        cin >> selectedProgram;

        if (selectedProgram == 1) {
            if (seatsProg1 > 0 && percentage >= minCriteria1) {
                cout << "\nCongratulations! You are selected for " << prog1 << "." << endl;
                --seatsProg1;

            } else if (seatsProg1 <= 0) {
                cout << "\nNo seats left for " << prog1 << "." << endl;
            } else {
                cout << "\nSorry! You did not meet the eligibility for " << prog1 << "." << endl;
            }

        } else if (selectedProgram == 2) {
            if (seatsProg2 > 0 && percentage >= minCriteria2) {
                cout << "\nCongratulations! UOL is happy to announce that you are selected for " << prog2 << "." << endl;
                --seatsProg2;

            } else if (seatsProg2 <= 0) {
                cout << "\nNo seats left for " << prog2 << "." << endl;
            } else {
                cout << "\nSorry! You did not meet the eligibility for " << prog2 << "." << endl;
            }
        } else {
            cout << "\nInvalid program choice." << endl;
        }

    } else if (userChoice == 3) { 

        // Student University Attendance Management System

        int attendanceOption;

        cout << "\n--- UOL Student Attendance System ---" << endl;
        cout << "1. Mark Attendance" << endl;
        cout << "2. View UOL Student Attendance Record" << endl;
        cout << "Choose an option (1 or 2): ";
        cin >> attendanceOption;

        if (attendanceOption == 1) {
            string studentName;
            cout << "Enter the student's name: ";
            cin >> studentName;
            cout << "Attendance for " << studentName << " has been marked as present." << endl;
        } else if (attendanceOption == 2) {
            cout << "Attendance Record:\n Wesam = Present\n Shamaim = Absent\n Meerab = Present \n Maryam = Present \n Faizan = Present\n Rehan = Leave \n Talha = Left the Uni \n Hamdan = Present \n Rida = Absent " << endl;
        } else {
            cout << "Invalid option." << endl;
        }

    } else if (userChoice == 4) { 

        // University Gym Management System

        int gymOption;

        cout << "\n--- UOL Gym Management System ---" << endl;
        cout << "1. Register a New Member" << endl;
        cout << "2. View UOL Gym Timings" << endl;
        cout << "Choose an option (1 or 2): ";
        cin >> gymOption;

        if (gymOption == 1) {
            string memberName;
            cout << "Enter the member's name: ";
            cin >> memberName;
            cout << "Member " << memberName << " has been successfully registered." << endl;
        } else if (gymOption == 2) {
            cout << "UOL Gym Timings:\nMorning: 6 AM - 10 AM\nEvening: 4 PM - 9 PM" << endl;
        } else {
            cout << "Invalid option." << endl;
        }

    } else if (userChoice == 5) { 

        // University Hostel Management System

        int hostelOption;

        cout << "\n--- UOL Hostel Management System ---" << endl;
        cout << "1. Assign Room to Student" << endl;
        cout << "2. Check Room Availability" << endl;
        cout << "Choose an option (1 or 2): ";
        cin >> hostelOption;

        if (hostelOption == 1) {
            string studentName;
            int roomNumber;
            cout << "Enter the student's name: ";
            cin >> studentName;
            cout << "Enter the room number: ";
            cin >> roomNumber;
            cout << "Student " << studentName << " has been assigned to room " << roomNumber << "." << endl;
        } else if (hostelOption == 2) {
            cout << "Available Rooms: \n Room 1 on first floor - 1 single bed available \n Room 9 - 2 single beds available \n Room 3 on first floor - Fully occupied" << endl;
        } else {
            cout << "Invalid option." << endl;
        }

    } else {
        cout << "\nInvalid choice! Please select between 1 and 5." << endl;
    }

    cout << "\nThank you for testing the UOL Management System." << endl;
    
    return 0;
}
