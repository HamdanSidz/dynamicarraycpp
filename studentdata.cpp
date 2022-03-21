#include <iostream>
#include <string>
#include <vector>
using namespace std;

class student
{
private:
    vector<string> courses;
    int count;

public:
    student()
    {
        this->courses.push_back("BSCS-301");
        this->count += 1;
    }
    student(vector<string> courses, int count)
    {
        this->courses = courses;
        this->count = count;
    }
    student(student &obj)
    {
        this->courses = obj.courses;
        this->count = obj.count;
    }
    void setcourses(string courses1)
    {
        this->courses.push_back(courses1);
        this->count += 1;
    }

    string getdata()
    {
        string newstring = " ";
        for (int i = 0; i < courses.size(); i++)
        {
            newstring += courses[i] + " ";
        }
        return newstring;
    }
    int getcount()
    {
        return count;
    }
};

int main()
{

    student s1({"BSCS-304", "BSCS-302", "BSCS-508"}, 3);
    cout << s1.getdata() << endl;
    cout << " Your courses is: " << s1.getcount() << endl;
    s1.setcourses("added subject");
    cout << s1.getdata() << endl;
    student s2 = s1;
    s2.setcourses("ENGLISH");
    cout << s2.getdata() << endl;
    cout << " Your courses is: " << s2.getcount() << endl;
}