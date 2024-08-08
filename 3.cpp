//Create a base class called Shape with data members for height and width.
// Derive two classes Rectangle and Triangle from the base class. 
//Write member functions to calculate the area and perimeter of each class
#include<iostream>

using namespace std;
class shape{
	protected:
		double height;
		double width;
		public:
			shape(double h,double w):height(h),width(w){}
			virtual double area()=0;
			virtual double perimeter()=0;
};
class rectangle:public shape{
	public:
		rectangle(double h,double w):shape(h,w){}
		double area()override{
		return height*width;
		}
		double perimeter()override{
			return 2*(height+width);
		}
};
class triangle:public shape{
	public:
	triangle(double h,double w):shape(h,w){}
	double area()override{
		return 0.5 * height *  width;
	}
	double perimeter()override{
	    return 0.0;
	}
};
int main(){
	rectangle r(5,10);
	triangle tri(5,10);
	cout<<r.area()<<endl;
	cout<<r.perimeter()<<endl;
	cout<<tri.area()<<endl;
	cout<<tri.perimeter()<<endl;
	return 0;
}