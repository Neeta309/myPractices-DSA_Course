#include <iostream>
#include <string> // Include the string header for using std::string
using namespace std;

struct Student
{
  int rollno;
  float marks;
  string name; // Add name as a string
};

void printStudent_info(const Student &s1)
{
  cout << "Name: " << s1.name << "\nRoll no: " << s1.rollno << "\nMarks: " << s1.marks << endl;
}

void updateStudent_info(Student &s, int new_rollno, float new_marks, const string &new_name)
{
  s.rollno = new_rollno;
  s.marks = new_marks;
  s.name = new_name;
}

int main()
{
  Student s2 = {1406, 100.00, "Neehit"};
  printStudent_info(s2);

  updateStudent_info(s2, 614, 1000.00, "Neeru");
  printStudent_info(s2);

  return 0;
}
