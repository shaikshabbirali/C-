#include <iostream>
#include <string>
using namespace std;
class Marks {
protected:
    int math;
    int physics;
    int chemistry;

public:
    void setMarks(int m, int p, int c) {
        math = m;
        physics = p;
        chemistry = c;
    }

    void displayMarks() {
        cout << "Math: " << math << endl;
        cout << "Physics: " << physics << endl;
        cout << "Chemistry: " << chemistry << endl;
    }
};

class Sports {
protected:
    int sportsScore;

public:
    void setSportsScore(int score) {
        sportsScore = score;
    }

    void displaySportsScore() {
        cout << "Sports Score: " << sportsScore << endl;
    }
};

class Student : public Marks, public Sports {
private:
    string name;

public:
    void setName(string studentName) {
        name = studentName;
    }

    void display() {
        cout << "Student Name: " << name << endl;
        displayMarks();
        displaySportsScore();
    }
};

int main() {
    Student student1;
    student1.setName("John Doe");
    student1.setMarks(85, 90, 88);
    student1.setSportsScore(95);
    cout << "Student Information:" << endl;
    student1.display();
    return 0;
}
