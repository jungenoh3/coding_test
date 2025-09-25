#include <string>
#include <set>
#include <vector>
#include <iostream> 

using namespace std;

set<set<int>> s;

bool checkTwoString(string a, string b){
    for(int i=0; i<a.size(); i++){
        if(a[i] != '*' && (a[i] != b[i])){
            return false;
        }
    }
    return true;
}

void dfs(vector<bool> visited, set<int> permutation, const vector<vector<int>> &possible_id, int level){
	if(level == possible_id.size()){
		s.insert(permutation);
		return;
	}
	
	for(int i=0; i<possible_id[level].size(); i++){
		int id = possible_id[level][i];
		if(!visited[id]){
			visited[id] = true;
			permutation.insert(id);
			dfs(visited, permutation, possible_id, level+1);
			permutation.erase(id);
			visited[id] = false;
		}
	}
	
} 

int solution(vector<string> user_id, vector<string> banned_id) {
    vector<vector<int>> possible_id(banned_id.size());    
    
    for(int i=0; i<banned_id.size(); i++){
        for(int j=0; j<user_id.size(); j++){
            if(banned_id[i].size() != user_id[j].size()){
                continue;
            }
            
            if(checkTwoString(banned_id[i], user_id[j])){
                possible_id[i].push_back(j);
            }
        }
    }
    
    vector<bool> visited(user_id.size(), false);
    set<int> permutation;
    permutation.clear();
    
    dfs(visited, permutation, possible_id, 0);
    
    return s.size();
}

int main(){
	vector<string> user_id = {"frodo", "fradi", "crodo", "abc123", "frodoc"};
	vector<string> banned_id = {"fr*d*", "*rodo", "******", "******"};
	
	cout << solution(user_id, banned_id);
	
}
