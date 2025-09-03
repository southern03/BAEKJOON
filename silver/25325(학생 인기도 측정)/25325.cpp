#include <iostream>
#include <string>
#include <sstream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;
int main(void){
    int n;
    cin >> n;
    cin.ignore();
    map<string,int> Mymap;

    for (int i=0;i<n;i++){
        string name;
        cin >> name;
        Mymap[name] = 0;
    }
    cin.ignore();
    for (int i=0;i<n;i++){

        string s;
        getline(cin, s);

        istringstream iss(s);
        string word;

        while (iss >> word){
            if (Mymap.find(word)!=Mymap.end()){
                Mymap[word]++;
            }
        }
    }
    // map을 vector<pair>로 옮기기
    vector<pair<string, int>> vec(Mymap.begin(), Mymap.end());

    // 정렬: 인기도 내림차순, 같으면 이름 오름차순
    sort(vec.begin(), vec.end(), [](const pair<string, int>& a, const pair<string, int>& b) {
        if (a.second != b.second) return a.second > b.second;  // 인기도 내림차순
        return a.first < b.first;  // 이름 오름차순
    });

    for (const auto& pair : vec) {
        cout << pair.first << " " << pair.second << endl;
    }
    return 0;
}
