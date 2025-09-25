#include <iostream>
#include <set>

using namespace std;

int main(){
	int i, j, sum = 0;
	string word;
	set<string> s;
	
	cin >> word;
	
	int size = word.size();
	
	for(i=1; i<=size; i++){
		s.clear();
		for(j=0; j<size; j++){
			if(j+i > size){
				break;
			}
//			cout << "inserting word ( " << j << ", " << i << "): " << word.substr(j, i) << "\n";
			s.insert(word.substr(j, i));
		}
//		cout << j << " th size: " << s.size() << "\n";
		sum += s.size();
	}
	
	cout << sum;
}
