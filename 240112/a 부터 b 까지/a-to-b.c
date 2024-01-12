#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a,b;
    scanf("%d %d", &a, &b);
    printf("%d ", a);
    for (int i=a; i<=b;){
        if (i%2==0){
            i=i+3;
            if (i>b){
                break;
            }
            printf ("%d ",i);
        }
        else{
            i=i*2;
            if(i>b){
                break;
            }
            printf("%d ", i);
        }
    }
    return 0;
}