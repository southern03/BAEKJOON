#include <iostream>
#include <string>
using namespace std;
int main(void){
    int count_a1=0, count_a2=0;
    string patient, doctor;
    cin >> patient >> doctor;
    for (int i=0;patient[i]!='\0';i++){
        if (patient[i]=='a'){
            count_a1++;
        }
    }
    for (int i=0;doctor[i]!='\0';i++){
        if (doctor[i]=='a'){
            count_a2++;
        }
    }
    if (count_a1>=count_a2){
        cout << "go";
    }
    else{
        cout << "no";
    }
    return 0;
}
