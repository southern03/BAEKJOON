#include <iostream>
using namespace std;
int main(){
    int n,m;
    cin >> n;
    for (int i=0;i<n;i++){
        cin >> m;
        char ch[21];
        cin >> ch;
        for (int k=0;ch[k]!='\0';k++){
            for (int l=0;l<m;l++){
                cout << ch[k];
            }
        }
        cout << '\n';
    }
    return 0;
}
