#include <iostream>
using namespace std;

struct nameType {
	string first;
	string last;
};

struct football {
	nameType name;
	string team;
	int snum;
	int age;
	int game;
	float height;
	float weight;
};

int main () {
	int n, m, totalAge = 0, oldest, mostGoal;
	float avgAge;
	
	cout << "Number of players = ";
	cin >> n;
	cout << endl;
	
	football player[n];
	int goal[n];
	
	for (int i = 0; i < n; i++){
		cout << "Player " << i+1 << " :" << endl;
		
		cout << "First name : ";
		cin >> player[i].name.first;
		
		cout << "Last name : ";
		cin >> player[i].name.last;
		
		cout << "Current team : ";
		cin >> player[i].team;
		
		cout << "Shirt number : ";
		cin >> player[i].snum;
		
		cout << "Age : ";
		cin >> player[i].age;
		
		cout << "Height : ";
		cin >> player[i].height;
		
		cout << "Weight : ";
		cin >> player[i].weight;
		
		cout << "Goals for each game : ";
		cin >> goal[i];
		cout << endl;
		
	}
	
	for (int i = 0; i < n; i++){
		totalAge = totalAge + player[i].age;
	}
	
	avgAge = totalAge / n;
	
	cout << "Average age of the Player : " << avgAge << " years old" << endl;
	
	oldest = player[0].age;
	
	for (int i = 0; i < n; i++){
		if (oldest < player[i].age){
			oldest = player[i].age;
		}
	}
	
	for (int i = 0; i < n; i++){
		if (oldest == player[i].age){
			cout << "Oldest player : " << player[i].name.first << " " << player[i].name.last << endl;
		}
	}
	
	mostGoal = goal[0];
	
	for (int i = 0; i < n; i++){
		if (mostGoal < goal[i]){
			mostGoal = goal[i];
		}
	}
	
	for (int i = 0; i < n; i++){
		if (mostGoal == goal[i]){
			cout << "Player with most goals : " << player[i].name.first << " " << player[i].name.last << " (" << player[i].snum << ")" << endl;
		}
	}
	
	return 0;
}
