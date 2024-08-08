//Create a base class called Person with data members for name, age, and gender. 
//Derive two classes Student and Teacher from the base class.
// The Student class should have additional data members
// for roll number and class, while the Teacher class should have 
//additional data members for subject and salary.
// Write member functions to get and set the data members for each class.
//Create a base class called Person with data members for name, age, and gender. 
//Derive two classes Student and Teacher from the base class.
// The Student class should have additional data members
// for roll number and class, while the Teacher class should have 
//additional data members for subject and salary.
// Write member functions to get and set the data members for each class.
#include<iostream>
#include<string>
using namespace std;
class person{
	protected:
		string name;
		int age;
		string gender;
		public:
			void setname(const string& n){
				name=n;
			}
			void setage(int a){
				age=a;
			}
			void setgender(const string& g){
				gender=g;
			}
};
class student:public person{
	private:
		int rollnumber;
		string classname;
		public:
			void setrollnumber(int rn){
				rollnumber=rn;
			}
			void setclassname(const string& cn){
				classname=cn;
			}
};
class teacher:public person{
	private:
		string subject;
		int salary;
		public:
			void setsubject(const string& s){
				subject=s;
			}
			void setsalary(int sa){
				salary=sa;
			}
};
int main(){
	student student;
	student.setname("sush");
	student.setage(19);
	student.setgender("male");
	student.setrollnumber(192211927);
	student.setclassname("its me");
	teacher teacher;
	teacher.setname("sai");
	teacher.setage(19);
	teacher.setgender("male");
	teacher.setsubject("its me");
	teacher.setsalary(200000);
	return 0;
}