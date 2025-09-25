#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

class user{
	public: int age;
	public: string name;
	
	public: user(int newAge, string newName){
		age = newAge;
		name = newName;
	}
};

bool compare(user a, user b){
	if(a.age < b.age){
		return true;
	} 
	return false;
}

int main(){
	int i, n, age;
	string name;
	vector<user> a;
	
	cin >> n;
	
	for(i=0; i<n; i++){
		cin >> age >> name;
		a.push_back(user(age, name));
	}
	
	stable_sort(a.begin(), a.end(), compare);
	
	for(i=0; i<n; i++){
		cout << a[i].age << " " << a[i].name << "\n";
	}
	
}
