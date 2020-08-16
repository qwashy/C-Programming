#include <iostream>
using namespace std;

class people{
	private:
		double height;
		double mass;
	public:
		
		people(double x,double y){
			height = x;
			mass = y;
		}
		
		double tmi(){
			return(height*mass);
		}
		
		double bmi(){
			return(height/mass);
		}
};

int main(){
	double x,y,z;
	cin >>x>>y;
	people rizky(x,y);
	z = rizky.bmi();
	cout << z;
}
