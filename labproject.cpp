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
    float minimumCriteria1 = 87.9;
    float minimumCriteria2 = 71.1;

    cout << "=== UOL Admission System ===" << endl;
    cout << "1. Admin Login" << endl;
    cout << "2. Student Application" << endl;
    cout << "3. Student Attendance System" << endl;
    cout << "4. Scholarship Management System" << endl;
    cout << "5. Hostel Management System" << endl;
    cout << "6. Gym Management System" << endl;

    int userChoice;

    cout << "Enter your choice (1, 2, 3, 4, 5, or 6): ";
    cin >> userChoice;

    if (userChoice == 1) {

        // Admin Login module

        string emailInput;
        string passInput;

        cout << "\n--- UOL Admin Login ---" << endl;
        cout << "Enter Admin Email: ";
        cin >> emailInput;
        cout << "Enter Admin Password: ";
        cin >> passInput;

        if (emailInput == adminEmail && passInput == adminPass) {
            cout << "\nLogin Successful!" << endl;
            cout << "Program 1: " << prog1 << " | Seats: " << seatsProg1 << " | Minimum Criteria: " << minimumCriteria1 << "%" << endl;
            cout << "Program 2: " << prog2 << " | Seats: " << seatsProg2 << " | Minimum Criteria: " << minimumCriteria2 << "%" << endl;
        } else {
            cout << "\nInvalid credentials! Access denied." << endl;
        }

    } else if (userChoice == 2) {

        // Student Application module

        string studentName;
        string studentEmail;
        string studentCNIC;
        int marks;
        int selectedProgram;
        float percentage;
        short seatsMBBS = seatsProg1;
        short seatsDPT = seatsProg2;
        short totalMarks = 100;
        int totalApplicants = 5;

        // Use of For-Loop to process multiple student applications
        
        for (int i = 1; i <= totalApplicants; i++) {
            cout << "\n--- University of Lahore Admission Form (Student " << i << ") ---" << endl;

            cout << "Enter Full Name: ";
            cin >> studentName;
            cout << "Enter Email Address: ";
            cin >> studentEmail;
            cout << "Enter CNIC (without dashes): ";
            cin >> studentCNIC;
            cout << "Enter Your Marks (out of " << totalMarks << "): ";
            cin >> marks;

            percentage = (marks * 100.0) / totalMarks;

            cout << "\nAvailable Programs at UOL:" << endl;
            cout << "1. MBBS (Bachelor of Medicine, Bachelor of Surgery)" << endl;
            cout << "2. DPT (Doctor of physiotherapy)" << endl;
            cout << "Please select a program by entering 1 or 2: ";
            cin >> selectedProgram;

            if (selectedProgram == 1) {
                if (percentage >= minimumCriteria1) {
                    if (seatsMBBS > 0) {
                        cout << "\nCongratulations! You have been admitted to the MBBS program at UOL." << endl;
                        seatsMBBS--;
                    } else {
                        cout << "\nUnfortunately, no seats are available for the MBBS program at the moment." << endl;
                    }
                } else {
                    cout << "\nSorry, your percentage does not meet the eligibility criteria for the MBBS program at UOL." << endl;
                }

            } else if (selectedProgram == 2) {

                if (percentage >= minimumCriteria2) {
                    if (seatsDPT > 0) {
                        cout << "\nCongratulations! You have been admitted to the DPT program at UOL." << endl;
                        seatsDPT--;
                    } else {
                        cout << "\nUnfortunately, no seats are available for the DPT program in UOL at the moment." << endl;
                    }
                } else {
                    cout << "\nSorry, your percentage does not meet the eligibility criteria for the DPT program at UOL." << endl;
                }
            } else {
                cout << "\nInvalid selection. Please enter 1 for MBBS or 2 for DPT." << endl;
            }
        }

        cout << "\n--- All applications processed for UOL Admissions ---" << endl;

    } else if (userChoice == 3) {

        // Student Attendance Management System module

        int attendanceModule;

        cout << "\n--- UOL Student Attendance System ---" << endl;
        cout << "1. Mark Attendance of Section-O" << endl;
        cout << "2. View UOL Student Attendance Record of BsCS Section-O" << endl;
        cout << "Choose an option (1 or 2): ";
        cin >> attendanceModule;

        if (attendanceModule == 1) {
            string studentName;
            cout << "Enter the student's name: ";
            cin >> studentName;
            cout << "Attendance for " << studentName << " has been marked as present." << endl;
        } else if (attendanceModule == 2) {
            cout << "Attendance Record of Section-O:\nWesam = Present\nShamaim = Present\nMeerab = Leave\nMaryam = Present\nFaizan = Present\nRehan = Leave\nTalha = Left the Uni\nHamdan = Present\nRida = Absent" << endl;
        } else {
            cout << "Invalid option." << endl;
        }

    } else if (userChoice == 4) {

        // Scholarship Management System module

    int choice;
    float gpa;
    string continueProgram = "yes";

    cout << "Welcome to the UOL Scholarship Module System!\n";

    //while loop is being used to process the MS

    while (continueProgram == "yes") {
        cout << "\nPlease choose an option:\n";
        cout << "1. Check Scholarship Eligibility\n";
        cout << "2. View Scholarship Criteria\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) {
            cout << "\nEnter your GPA (e.g., 3.5): ";
            cin >> gpa;

            if (gpa >= 3.8) {
                cout << "Congratulations! You qualify for a 100% scholarship.\n";
            } else if (gpa >= 3.5) {
                cout << "Great news! You qualify for a 75% scholarship.\n";
            } else if (gpa >= 3.0) {
                cout << "Good job! You qualify for a 50% scholarship.\n";
            } else {
                cout << "Unfortunately, you are not eligible for a scholarship at this time. Keep working hard and try again!\n";
            }

        } else if (choice == 2) {
            cout << "\nScholarship Criteria:\n";
            cout << "1. GPA >= 3.8: 100% Scholarship\n";
            cout << "2. GPA >= 3.5: 75% Scholarship\n";
            cout << "3. GPA >= 3.0: 50% Scholarship\n";
            cout << "4. GPA < 3.0: No Scholarship will be awarded by UOL\n";

        } else if (choice == 3) {
            cout << "\nThank you for using the UOL Scholarship Module System. Have a great day!\n";
            break;

        } else {
            cout << "\nInvalid choice. Please try again and select a valid option from the menu.\n";
        }

        if (choice != 3) {
            cout << "\nWould you like to perform another action? (yes/no): ";
            cin >> continueProgram;
        }
}

    } else if (userChoice == 5) {

        // Hostel Management System module

        int hostelModule;

        cout << "\n--- UOL Hostel Management System ---" << endl;
        cout << "1. Assign Room to Student" << endl;
        cout << "2. Check Room Availability" << endl;
        cout << "Choose an option (1 or 2): ";
        cin >> hostelModule;

        if (hostelModule == 1) {
            string studentName;
            int roomNumber;
            cout << "Enter the student's name: ";
            cin >> studentName;
            cout << "Enter the room number: ";
            cin >> roomNumber;
            cout << "Student " << studentName << " has been assigned to room " << roomNumber << "." << endl;
        } else if (hostelModule == 2) {
            cout << "Available Rooms:\nRoom 10 on First Floor with 2 beds available\nRoom 2 on Second Floor with 1 bed available\nRoom 03 on Ground Floor is Fully occupied" << endl;
        } else {
            cout << "Invalid option." << endl;
        }

    } else if (userChoice == 6) {

        // Gym Management System module
    
        int gymModule;

        cout << "\n--- UOL Gym Management System ---" << endl;
        cout << "1. Register a New Member" << endl;
        cout << "2. View UOL Gym Timings" << endl;
        cout << "Choose an option (1 or 2): ";
        cin >> gymModule;

        if (gymModule == 1) {
            string memberName;
            cout << "Enter the member's name: ";
            cin >> memberName;
            cout << "Member " << memberName << " has been successfully registered." << endl;
        } else if (gymModule == 2) {
            cout << "UOL Gym Timings:\nMorning: 6 AM - 10 AM\nEvening: 4 PM - 9 PM" << endl;
        } else {
            cout << "Invalid option." << endl;
        }

    } else {
        cout << "\nInvalid choice! Please select between 1 and 6." << endl;
    }

    cout << "\nThank you for testing the UOL Management System." << endl;

    return 0;
}
