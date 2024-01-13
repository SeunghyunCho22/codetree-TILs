#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a,b;
    int count=0;
    scanf("%d %d", &a, &b);
    for (int i=a; i<=b; i++){
        if (i%2==0){
            count+=i;
        }
    }
    printf("%d", count);
    return 0;
}