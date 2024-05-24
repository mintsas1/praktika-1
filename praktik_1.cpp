#include <iostream>
#include <string>
#include <stack>

using namespace std;

class Student {
private:
    stack<string> names;
    int age;
    double averageGrade;

public:
    
    Student() {
        age = 0;
        averageGrade = 0.0;
    }

    
    Student(string name, int age, double averageGrade) {
        names.push(name);
        this->age = age;
        this->averageGrade = averageGrade;
    }

   
    void addName(string name) {
        names.push(name);
    }

    
    void setAge(int age) {
        if (age > 0) {
            this->age = age;
        }
    }

    
    void setAverageGrade(double averageGrade) {
        if (averageGrade >= 0.0 && averageGrade <= 100.0) {
            this->averageGrade = averageGrade;
        }
    }

    
    string getName() {
        if (!names.empty()) {
            return names.top();
        }
        return "";
    }

   
    int getAge() {
        return age;
    }

    
    double getAverageGrade() {
        return averageGrade;
    }

    
    void displayInfo() {
        if (!names.empty()) {
            cout << "Name: " << names.top() << endl;
        }
        cout << "Age: " << age << endl;
        cout << "Average Grade: " << averageGrade << endl;
    }
};

int main() {
    
    Student student("John Doe", 20, 88.5);

    
    student.displayInfo();

    
    student.addName("Jane Doe");

    
    student.displayInfo();

    return 0;
}
