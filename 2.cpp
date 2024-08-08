//Create a base class called Employee with data members for name, d, and salary
//Derive two classes Manager and Engineer from the base class. 
//The Manager class should have additional data members for department and bonus, 
//while the Engineer class should have additional data members for specialty and hours. 
//Write member functions to get and set the data members for each class
#include<iostream>
#include<string>
using namespace std;
class employee{
	protected:
		string name;
		int id;
		int salary;
		public:
			void setname(const string& n){
				name=n;
			}
			void setid(int i){
				id=i;
			}
			void setsalary(int s){
				salary=s;
			}
};
class manager:public employee{
	private:
		string department;
		int bonus;
		public:
			void setdepartment(const string& de){
				department=de;
			}
			void setbonus(int b){
				bonus=b;
			}
		
};
class engineer:public employee{
	private:
	string speciality;
		int hours;
		public:
			void setspeciality(const string& sp){
				speciality=sp;
			}
			void sethours(int h){
				hours=h;
			}
		
};
int main(){
	manager manager;
	manager.setname("sush");
	manager.setid(192211927);
	manager.setsalary(200000);
	manager.setdepartment("cse");
	manager.setbonus(100000);
	engineer engineer;
	engineer.setname("sush");
	engineer.setid(192211927);
engineer.setsalary(200000);
engineer.setspeciality("cse");
	engineer.sethours(24);
	return 0;
	
}











