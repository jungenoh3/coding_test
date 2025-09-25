#include <algorithm>
#include <vector>
#include <iostream> 

using namespace std;

vector<int> parents;
vector<int> money;

int find(int x){
    if(x == parents[x])
        return x;
    return find(parents[x]);
}

int get_total(int x){
    int total = 0;
    while(x != parents[x]){
        total += money[x];
        x = parents[x];
    }
    return total;
}

int solution(int n, vector<vector<int>> costs) {
    int answer = 0;
    
    money.resize(n, 0);
    for(int i=0; i<n; i++){
        parents.push_back(i);
    }
    
    for(int i=0; i<costs.size(); i++){
        int a = min(costs[i][0], costs[i][1]);
        int b = max(costs[i][0], costs[i][1]);
        cout << "a: "<< a << " b: " << b << "\n";
        
        int root_a = find(a);
        int root_b = find(b);
        
        cout << "root a: " << root_a << " root b: " << root_b << "\n";
        
        if (root_a != root_b){
            parents[b]=a;
            money[b]=costs[i][2];
        } else { // 같은데 새 연결의 더 비용이 나을 경우
            int temp_parent = parents[b];
            int temp_money = money[b];
            int temp_total = get_total(b);
            
            parents[b]=a;
            money[b]=costs[i][2];
            cout << "before: " << temp_total << " after: " << get_total(b) << "\n";
            if (temp_total <= get_total(b)){
                parents[b] = temp_parent; 
                money[b] = temp_money;  
            }
        }
        
        for (int i=0; i<parents.size(); i++){
        	cout << parents[i] << " ";
		}
		cout << "\n";
		for (int i=0; i<money.size(); i++){
        	cout << money[i] << " ";
		}
		cout << "\n\n";
        
    }
    
    for(int i=0; i<n; i++){
        answer += money[i];
    }
    
    return answer;
}

int main(){
	//[[0, 1, 1], [1, 2, 1], [2, 0, 1], [0, 3, 10], [1, 4, 10], [2, 5, 10], [3, 4, 1], [4, 5, 1], [5, 3, 1]]
	vector<vector<int>> v = {{0,1,1},{1,2,1},{2,0,1},{0,3,10},{1,4,10},{2,5,10},{3,4,1},{4,5,1},{5,3,1}};
	cout << solution(6, v);
}
