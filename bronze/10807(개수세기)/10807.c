#include <stdio.h>
int main(void){
    int n, m;
    int arr[101] = {};
    scanf("%d",&n);
    int cnt=0;
    for (int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    scanf("%d",&m);
    for (int i=0;i<n;i++)
        if (arr[i]==m)
            cnt++;
    printf("%d\n",cnt);
    return 0;
}