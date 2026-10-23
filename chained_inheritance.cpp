#include <iostream>
#include <string>
using namespace std;

// Base class: Student
class Student {
protected:
    string name;
    string regNumber;
    string university;

public:
    Student(string n, string r, string u)
        : name(n), regNumber(r), university(u) {}

    void displayStudent() const {
        cout << "Name: " << name << endl;
        cout << "Registration Number: "
             << regNumber << endl;
        cout << "University: "
             << university << endl;
    }
};

// Derived class: UndergraduateStudent
class UndergraduateStudent : public Student {
private:
    int yearOfStudy;

public:
    UndergraduateStudent(string n, string r,
                         string u, int year)
        : Student(n, r, u), yearOfStudy(year) {}

    void displayUndergraduate() const {
        displayStudent();
        cout << "Year of Study: "
             << yearOfStudy << endl;
    }
};

// Derived class: PostgraduateStudent
class PostgraduateStudent : public Student {
private:
    string researchTopic;

public:
    PostgraduateStudent(string n, string r,
                        string u, string topic)
        : Student(n, r, u),
          researchTopic(topic) {}

    void displayPostgraduate() const {
        displayStudent();
        cout << "Research Topic: "
             << researchTopic << endl;
    }
};

int main() {
    cout << "=== UNIVERSITY STUDENT SYSTEM ===\n\n";

    UndergraduateStudent student1(
        "Linda", "25/U/0234/PS",
        "Makerere University", 2
    );

    PostgraduateStudent student2(
        "Huzaifah", "P/U/2345",
        "Makerere University",
        "Artificial Intelligence"
    );

    cout << "--- Undergraduate Student ---\n";
    student1.displayUndergraduate();

    cout << "\n--- Postgraduate Student ---\n";
    student2.displayPostgraduate();

    return 0;
}
