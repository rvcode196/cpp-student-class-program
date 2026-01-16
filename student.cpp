#include<iostream>
using namespace std;
 class Student{
    private:
    double totalmarks;

    public:
    string name;
    string course;

    public:
    void settotalmarks(double m1,double m2,double m3,double m4,double m5){
         totalmarks = m1+m2+m3+m4+m5;
    }
    double gettotalmarks(){
        return totalmarks;
    }
    void display(){
        cout << "name: " << name << endl;
        cout << "course: " << course << endl;
        cout << "total marks: " << gettotalmarks() << endl;

    }    
 };
  
 int main() {   
    Student s1;
    s1.settotalmarks(45,50,60,70,90);
    s1.name = "rakhi";
    s1.course = "BCA";
    s1.display();
 }
