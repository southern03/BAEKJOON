#include <iostream>
using namespace std;
int main(){
    int A = 1, B =1, C=1;
    for (;;){
        cin >> A >> B >> C;
        if (A==0&B==0&C==0){
            break;
        }
        else{
            if (A*A + B*B == C*C || A*A + C*C == B*B || B*B + C*C == A*A){
                cout << "right" << endl;
            }
            else{
                cout << "wrong" << endl;
            }
        }
    }
    return 0;
}
