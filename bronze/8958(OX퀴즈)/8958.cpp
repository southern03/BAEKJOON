#include <iostream>
using namespace std;
int main(){
    int n, flag=0;
    cin >> n;
    char ch[n][81];
    for (int i=0;i<n;i++){
        cin >> ch[i];
    }
    for (int i=0;i<n;i++){
        int score=0;
        for (int j=0;ch[i][j]!='\0';j++){
            if (ch[i][j]=='O'){
                flag++;
                score+=flag;
            }
            else{
                flag=0;
            }
        }
        cout << score << endl;
        flag=0;
    }
    return 0;
}
