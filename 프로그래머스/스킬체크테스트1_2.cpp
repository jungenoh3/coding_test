#include <string>
#include <vector>
#include <iostream> 

using namespace std;

vector<int> sort(vector<int> array){    
    int temp;
	
	for(int i=0; i<array.size()-1; i++){
    	int tmp = i;
    	for(int j=i+1; j<array.size(); j++){
    		if(array[tmp] >= array[j]){
    			tmp = j;
			}
		}
		temp = array[i];
		array[i] = array[tmp];
		array[tmp] = temp;
		
    }
    
    return array;
}

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    
    for (int i=0; i<commands.size(); i++){
        vector<int> slice = vector<int>(array.begin()+commands[i][0]-1,
                                       array.begin()+commands[i][1]);
        
        vector<int> sortArray = sort(slice);
        
        for(int j=0; j<sortArray.size(); j++){
        	cout << sortArray[j] << " ";
		}
        cout << "\n";
        
        answer.push_back(sortArray[commands[i][2]-1]);
        
    }
       
    return answer;
}

int main(){
	vector<int> array = {1, 5, 2, 6, 3, 7, 4};
	vector<vector<int>> commands = {{2, 5, 3}, {4, 4, 1}, {1, 7, 3}};
	
	solution(array, commands);
	
	
}
