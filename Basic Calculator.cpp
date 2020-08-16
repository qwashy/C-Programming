#include <iostream>
using namespace std;

int add(int,int);
int min(int,int);
int div(int,int);
int tim(int,int);


int main(){
	float x,y,a;
	char z;
	cin>>x>>y>>z;
	
	switch(z){
		case '+':
			a = add(x,y);
			cout << a;
			break;
		case '-':
			a = min(x,y);
			cout << a;
			break;
		case '/':
			a=div(x,y);
			cout << a;
			break;
		case '*':
			a = tim(x,y);
			cout << a;
			break;
		default:
        cout<<'?';
	}
 
}


add(int x,int y){
	return(x+y);
}

min(int x,int y){
	return(x-y);
}

div(int x,int y){
	return(x/y);
}

tim(int x,int y){
	return(x*y);
}
