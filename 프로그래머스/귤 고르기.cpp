#include <algorithm>
#include <unordered_map>
#include <map>
#include <vector>
#include <iostream>
#include <ctime>
#include <random>

using namespace std;


int solution1(int k, vector<int> tangerine) {
    int answer = 0;
    vector<pair<int, int>> v;
    
    sort(tangerine.begin(), tangerine.end());
    
    v.push_back(make_pair(tangerine[0], 1));
    for(int i=1; i<tangerine.size(); i++){
        if(tangerine[i] == v.back().first){
            v.back().second++;
        } else {
            v.push_back(make_pair(tangerine[i], 1));
        }
    }
    
    sort(v.begin(), v.end(), [](pair<int, int>a, pair<int, int>b){
        return a.second > b.second;
    });
    
    for(int i=0; i<v.size(); i++){
        if(k <= v[i].second){
            answer++;
            break;
        }
        
        k -= v[i].second;
        answer++;
    }
    
    
    return answer;
}

int solution2(int k, vector<int> tangerine) {
    int answer = 0;
    unordered_map<int, int> um;
    
    for(int i=0; i<tangerine.size(); i++){
        um[tangerine[i]]++;
    }
    
    vector<int> v;
    for(auto e: um){
        v.push_back(e.second);
    }
    
    sort(v.rbegin(), v.rend());
    
    for(int i=0; i<v.size(); i++){
        if(k <= v[i]){
            answer++;
            break;
        }
        
        k -= v[i];
        answer++;
    }
    
    
    return answer;
}

int solution3(int k, vector<int> tangerine) {
    int answer = 0;
    map<int, int> um;
    
    for(int i=0; i<tangerine.size(); i++){
        um[tangerine[i]]++;
    }
    
    vector<int> v;
    for(auto e: um){
        v.push_back(e.second);
    }
    
    sort(v.rbegin(), v.rend());
    
    for(int i=0; i<v.size(); i++){
        if(k <= v[i]){
            answer++;
            break;
        }
        
        k -= v[i];
        answer++;
    }
    
    
    return answer;
}

int main(){
int k = 1;
vector<int> tangerine(99999, 1);
tangerine.push_back(9999999);

	
	clock_t startTime1 = clock();
	solution1(k, tangerine);
	clock_t endTime1 = clock();
	
	clock_t elapsed1 = endTime1 - startTime1;
	double timeInSecond1 = (double)(elapsed1 / CLOCKS_PER_SEC);
	
	cout << "Elapsed: " << timeInSecond1 << "s(" << elapsed1 << "ms)" << "\n";
	
	clock_t startTime2 = clock();
	solution2(k, tangerine);
	clock_t endTime2 = clock();
	
	clock_t elapsed2 = endTime2 - startTime2;
	double timeInSecond2 = (double)(elapsed2 / CLOCKS_PER_SEC);
	
	cout << "Elapsed: " << timeInSecond2 << "s(" << elapsed2 << "ms)" << "\n";
	
		clock_t startTime3 = clock();
	solution3(k, tangerine);
	clock_t endTime3 = clock();
	
	clock_t elapsed3 = endTime3 - startTime3;
	double timeInSecond3 = (double)(elapsed3 / CLOCKS_PER_SEC);
	
	cout << "Elapsed: " << timeInSecond3 << "s(" << elapsed3 << "ms)" << "\n";
	
	return 0;

}
