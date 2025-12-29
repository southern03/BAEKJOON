#include <stdio.h>
int main(){
    int n;
    int student[30]={};
    for (int i=0;i<28;i++){
        scanf("%d",&n);
        student[n-1]=1;
    }
    for (int i=0;i<30;i++){
        if (student[i]==0){
            printf("%d\n",i+1);
        }
    }
    return 0;
}
