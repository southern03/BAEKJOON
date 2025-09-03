#include <iostream>
using namespace std;
int main(void){
    int n, m;
    int* arr = new int[n];
    cin >> n;
    int cnt=0;
    for (int i=0;i<n;i++)
        cin >> arr[i];
    cin >> m;
    for (int i=0;i<n;i++)
        if (arr[i]==m)
            cnt++;
    cout << cnt;
    delete[] arr;
    return 0;
}
