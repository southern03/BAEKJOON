#include <iostream>
using namespace std;
int main(){
    int n;
    int student[30]={};
    for (int i=0;i<28;i++){
        cin >> n;
        student[n-1]=1;
    }
    for (int i=0;i<30;i++){
        if (student[i]==0){
            cout << i+1 << "\n";
        }
    }
    return 0;
}
