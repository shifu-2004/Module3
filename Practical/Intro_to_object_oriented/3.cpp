// Write a program that implements inheritance using a base class Person and derived
// classes Student and Teacher. Demonstrate reusability through inheritance.
#include <iostream>
using namespace std;
class Person // BASE CLASS
{
public:
    string name;
    int id;
    Person() : name(0), id(0) {}                // DEFAULT CONSTRUCTOR
    Person(string a, int b) : name(a), id(b) {} // PARAMETERIZED CONSTRUCTOR
};
class Student : public Person // DERIVED CLASS
{
public:
    string course;
    Student(string a, int b, string c) : Person(a, b)
    {
        course = c;
    }
    void display()
    {
        cout << "\nStudent name is " << name;
        cout << endl;
        cout << "Student id is " << id;
        cout << endl;
        cout << "Student course is " << course;
        cout << endl;
    }
};
class Teacher : public Person // DERIVED CLASS
{
public:
    string sub;
    Teacher(string name, int id, string s) : Person(name, id)
    {
        sub = s;
    }
    void display()
    {
        cout << "\nTeacher name is " << name;
        cout << endl;
        cout << "Teacher id is " << id;
        cout << endl;
        cout << "Teacher subject is " << sub;
    }
};
int main()
{
    Student s1("SHIFA", 101, "JAVA");
    Teacher t1("CHIRAG", 201, "PYTHON PROGRAMMING");
    cout << "<<<<<<STUDENT DETAIL IS >>>>>>>";
    s1.display();
    cout << endl;
    cout << "<<<<<<TEACHER DETAIL IS >>>>>>>";
    t1.display();
    return 0;
}