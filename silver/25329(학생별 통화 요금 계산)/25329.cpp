#include <iostream>
#include <string>
#include <sstream>
#include <string.h>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;
int calc_fee(int min) {
    if (min <= 100) return 10;
    int over = min - 100;
    return 10 + ((over + 49) / 50) * 3;  // 올림 처리
}
int main(void){
    int n;
    cin >> n;
    cin.ignore();

    map<string, int> call;

    int time;
    string name;
    for (int i=0;i<n;i++){
        string s;
        getline(cin, s);

        istringstream iss(s);
        string word;

        int time=0;
        string name="";
        while (iss >> word){
            if (word.find(':') != string::npos){
                size_t pos = word.find(':');
                int hour = stoi(word.substr(0, pos));        // ':' 앞 부분
                int minute = stoi(word.substr(pos + 1));     // ':' 뒤 부분
                time = hour * 60 + minute;
            } else {
                name = word;
            }
        }
        call[name] += time;
    }
    
    for (auto& p : call) {
        p.second = calc_fee(p.second);
    }
    
    vector<pair<string, int>> sortedCalls(call.begin(), call.end());

    sort(sortedCalls.begin(), sortedCalls.end(), [](const pair<string, int>& a, const pair<string, int>& b) {
        if (a.second == b.second) {
            return a.first < b.first;
        }
        return a.second > b.second;
    });
    for (const auto& p : sortedCalls) {
        cout << p.first << " " << p.second << endl;
    }
    return 0;
}
