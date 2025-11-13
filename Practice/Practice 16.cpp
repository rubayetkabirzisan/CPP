#include <iostream>

class ScienceStudent
{
private:
    int rollNumber;
    int primarySubjectMarks;
    int scienceSubjectMarks;

public:
    ScienceStudent() : rollNumber(0), primarySubjectMarks(0), scienceSubjectMarks(0) {}

    void setRollNumber(int roll)
    {
        rollNumber = roll;
    }

    void setPrimarySubjectMarks(int marks)
    {
        primarySubjectMarks = marks;
    }

    void setScienceSubjectMarks(int marks)
    {
        scienceSubjectMarks = marks;
    }

    int getRollNumber() const
    {
        return rollNumber;
    }

    int getPrimarySubjectMarks() const
    {
        return primarySubjectMarks;
    }

    int getScienceSubjectMarks() const
    {
        return scienceSubjectMarks;
    }
};

class CommerceStudent
{
private:
    int rollNumber;
    int primarySubjectMarks;
    int commerceSubjectMarks;

public:
    CommerceStudent() : rollNumber(0), primarySubjectMarks(0), commerceSubjectMarks(0) {}

    void setRollNumber(int roll)
    {
        rollNumber = roll;
    }

    void setPrimarySubjectMarks(int marks)
    {
        primarySubjectMarks = marks;
    }

    void setCommerceSubjectMarks(int marks)
    {
        commerceSubjectMarks = marks;
    }

    int getRollNumber() const
    {
        return rollNumber;
    }

    int getPrimarySubjectMarks() const
    {
        return primarySubjectMarks;
    }

    int getCommerceSubjectMarks() const
    {
        return commerceSubjectMarks;
    }
};

int compare(const ScienceStudent& scienceStudent, const CommerceStudent& commerceStudent)
{
    double scienceAverage = (scienceStudent.getPrimarySubjectMarks() + scienceStudent.getScienceSubjectMarks()) / 2.0;
    double commerceAverage = (commerceStudent.getPrimarySubjectMarks() + commerceStudent.getCommerceSubjectMarks()) / 2.0;

    if (scienceAverage > commerceAverage)
    {
        return scienceStudent.getRollNumber();
    }
    else if (commerceAverage > scienceAverage)
    {
        return commerceStudent.getRollNumber();
    }
    else
    {
        return -1; // Indicate no higher average found
    }
}

int main()
{
    ScienceStudent scienceStudent;
    CommerceStudent commerceStudent;

    // Set values for Science Student
    scienceStudent.setRollNumber(1);
    scienceStudent.setPrimarySubjectMarks(80);
    scienceStudent.setScienceSubjectMarks(90);

    // Set values for Commerce Student
    commerceStudent.setRollNumber(2);
    commerceStudent.setPrimarySubjectMarks(75);
    commerceStudent.setCommerceSubjectMarks(85);

    int higherRollNumber = compare(scienceStudent, commerceStudent);
    if (higherRollNumber != -1)
    {
        std::cout << "Student with Roll Number " << higherRollNumber << " has higher average marks." << std::endl;
    }
    else
    {
        std::cout << "No student has higher average marks." << std::endl;
    }

    return 0;
}

