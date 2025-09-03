#include <iostream>
#include <vector>
using namespace std;
void maxf(int m){
    vector<int> v={};
    do{
        if (m==2){
            v.push_back(1);
            m=m-2;
        }
        else if (m==3){
            v.push_back(7);
            m=m-3;
        }
        else if (m>3){
            v.push_back(1);
            m=m-2;
        }
        else{}
    }while(m>0);
    for (int i=v.size()-1;i>=0;i--){
        cout << v[i];
    }
}
void minf(int m){
    vector<int> u={};
    while(m>0)
    {
        if (m>11&&m!=17){
            u.push_back(8);
            m=m-7;
        }
        else if (m==17){
            u.push_back(0);
            u.push_back(0);
            u.push_back(2);
            m = m-17;
        }
        else if (m==11){
            u.push_back(0);
            u.push_back(2);
            m=m-11;
        }
        else if (m==10){
            u.push_back(2);
            u.push_back(2);
            m=m-10;
        }
        else if (m==9){
            u.push_back(8);
            u.push_back(1);
            m=m-9;
        }
        else if (m==8){
            u.push_back(0);
            u.push_back(1);
            m=m-8;
        }
        else if (m==7){
            u.push_back(8);
            m=m-7;
        }
        else if (m==6){
            u.push_back(6);
            m=m-6;
        }
        else if (m==5){
            u.push_back(2);
            m=m-5;
        }
        else if (m==4){
            u.push_back(4);
            m=m-4;
        }
        else if (m==3){
            u.push_back(7);
            m=m-3;
        }
        else if (m==2){
            u.push_back(1);
            m=m-2;
        }
        else {}
    }
    for (int i=u.size()-1;i>=0;i--){
        cout << u[i];
    }
}
int main(){
    int n;
    cin >> n;
    int* arr = new int[n];
    for (int i=0;i<n;i++){
        cin >> arr[i];
    }
    for (int i=0;i<n;i++){
        minf(arr[i]);
        cout << " ";
        maxf(arr[i]);
        cout << "\n";
    }
    delete[] arr;
    return 0;
}
