#include<iostream>
using namespace std;

class StudentDetails {
protected:
    int roll;
    string name;
    int marks[5];

public:
    void setStudentDetails(int r, string n, int m[5]) {
        roll = r;
        name = n;
        for (int i = 0; i < 5; i++) {
            marks[i] = m[i];
        }
    }
};

class SportMarks : public StudentDetails{
protected:
    int sport_marks;

public:
    void setSportMarks(int sm) {
        sport_marks = sm;
    }
};

class Result : public SportMarks {
private:
    int total;
    float avg;

public:
    void calculate() {
        total = sport_marks;
        for (int i = 0; i < 5; i++) {
            total += marks[i];
        }
        avg = total / 6.0; 
    }

    void printDetails() {
        cout << "\n------ Student Result Details ------\n";
        cout << "Roll No: " << roll << endl;
        cout << "Name: " << name << endl;
        cout << "Marks in 5 subjects: ";
        for (int i = 0; i < 5; i++) {
            cout << marks[i] << " ";
        }
        cout << "\nSport Marks: " << sport_marks << endl;
        cout << "Total Marks: " << total << endl;
        cout << "Average Marks: " << avg << endl;
    }
};

int main() {
    Result r;
    int m[5] = {80, 75, 90, 85, 70};
    r.setStudentDetails(101, "Harsh", m);
    r.setSportMarks(40);

    r.calculate();
    r.printDetails();

    return 0;
}
