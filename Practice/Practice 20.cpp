#include <iostream>

class StudentAttendance {
private:
    int totalClasses;
    int presentCount;
    int absentCount;

public:
    StudentAttendance(int totalClasses) : totalClasses(totalClasses), presentCount(0), absentCount(0) {}

    void markPresent() {
        presentCount++;
    }

    void markAbsent() {
        absentCount++;
    }

    int getTotalClasses() const {
        return totalClasses;
    }

    int getPresentCount() const {
        return presentCount;
    }

    int getAbsentCount() const {
        return absentCount;
    }

    double calculateAttendancePercentage() const {
        return static_cast<double>(presentCount) / totalClasses * 100;
    }

    bool isDisCollegiate() const {
        double attendancePercentage = calculateAttendancePercentage();
        return attendancePercentage < 75.0;
    }

    bool isNonCollegiate() const {
        double attendancePercentage = calculateAttendancePercentage();
        return attendancePercentage >= 75.0 && attendancePercentage < 90.0;
    }
};

int main() {
    int totalClasses = 70;
    StudentAttendance student(totalClasses);

    for (int day = 1; day <= totalClasses; day++) {
        std::cout << "Day " << day << ": (1) Present or (2) Absent? ";
        int choice;
        std::cin >> choice;

        if (choice == 1) {
            student.markPresent();
        } else if (choice == 2) {
            student.markAbsent();
        } else {
            std::cout << "Invalid choice. Skipping day " << day << std::endl;
        }
    }

    int presentCount = student.getPresentCount();
    int absentCount = student.getAbsentCount();
    double attendancePercentage = student.calculateAttendancePercentage();

    std::cout << "Total Classes: " << totalClasses << std::endl;
    std::cout << "Present Count: " << presentCount << std::endl;
    std::cout << "Absent Count: " << absentCount << std::endl;
    std::cout << "Attendance Percentage: " << attendancePercentage << "%" << std::endl;

    if (student.isDisCollegiate()) {
        std::cout << "Student is dis-collegiate." << std::endl;
    } else if (student.isNonCollegiate()) {
        std::cout << "Student is non-collegiate." << std::endl;
    } else {
        std::cout << "Student is collegiate." << std::endl;
    }

    return 0;
}
