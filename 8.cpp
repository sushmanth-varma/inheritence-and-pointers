#include<iostream>
#include<string>
using namespace std;
int main(){
	string str="sushmanth";
	string *c=&str;
	cout<<"charecter is:"<<*c<<endl;
}