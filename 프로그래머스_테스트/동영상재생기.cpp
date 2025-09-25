#include <string>
#include <vector>
#include <iostream>

using namespace std;


int minuteToSeconds(string video_len){
    string minute = video_len.substr(0, 2);
    string second = video_len.substr(3, 5);
    
    cout << "minute: " << minute << " second: " << second << "\n";
    
    int seconds = stoi(minute) * 60;
    
    return (seconds + stoi(second));
}

string secondsToMinute(int seconds){
    string answer;
    int minute = seconds / 60;
    int second = seconds % 60;
    if (minute < 10){
        answer += "0";
    }
    answer += to_string(minute);
    answer += ":";
    if (second < 10){
        answer += "0";
    }
    answer += to_string(second);
    
    return answer;
}

string solution(string video_len, string pos, string op_start, string op_end, vector<string> commands) {
    int video_second = minuteToSeconds(video_len);
    int pos_second = minuteToSeconds(pos);
    int op_start_second = minuteToSeconds(op_start);
    int op_end_second = minuteToSeconds(op_end);
    
    for(int i=0; i<commands.size(); i++){
        if (commands[i].compare("next") == 0){
            pos_second += 10;
            if (pos_second >= video_second) pos_second = video_second;
        } else if (commands[i].compare("prev") == 0){
            pos_second -= 10;
            if (pos_second <= 0) pos_second = 0;
        }
        if (op_start_second <= pos_second && pos_second <= op_end_second){
        	pos_second = op_end_second;
		}
    	
    }
    
    
    
    string answer = secondsToMinute(pos_second);
    return answer;
}

int main(){
	vector<string> v = {"next"};
	cout << solution("30:01", "29:55", "01:00", "01:30", v);
}
