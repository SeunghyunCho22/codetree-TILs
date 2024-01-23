#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d", &n);
    int k;
    int sum=0;
    for (int i=1; i<=100; i++){
        sum+=i;
        k=i;
        if (sum>=n){
            break;
        }
    }
    printf("%d", k);
    return 0;
}