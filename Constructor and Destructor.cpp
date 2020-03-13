#include <iostream>
#include <vector>
using namespace std;

class Student {

private:
	int age;
	int ID;
	string name;
	double grade;

public:
	Student(int age, int ID, string name, double grade) {
		this->age = age;
		this->ID = ID;
		this->name = name;
		this->grade = grade;
	}
	int getAge() {
		return age;
	}
	int getID() {
		return ID;
	}
	string getName() {
		return name;
	}
	int getGrade() {
		return grade;
	}
};


int main() {

	Student student(13, 2345, "Marian", 4.5);

	vector<Student> studentsList;

	int numberOfStudents;
	cout << "Give the number of students : ";
	cin >> numberOfStudents;

	for (int i = 0; i < numberOfStudents; i++) {
		int grade, age, ID;
		string studentName;
		cout << "Give the student name : "; cin >> studentName;
		cout << "Give the student age : "; cin >> age;
		cout << "Give the student grade : "; cin >> grade;
		cout << "Give the student ID : "; cin >> ID;
		Student student(age, ID, studentName, grade);
		studentsList.push_back(student);
	}

	for (int i = 0; i < numberOfStudents; i++) {
		cout << "The " << i + 1<< " student has : " << endl;
		cout << "Student name : " << studentsList.at(i).getName() << endl;
		cout << "Student age : " << studentsList.at(i).getAge() << endl;
		cout << "Student ID : " << studentsList.at(i).getID() << endl;
		cout << "Student grade : " << studentsList.at(i).getGrade() << endl;
		cout << endl;
	}
	return 0;
}