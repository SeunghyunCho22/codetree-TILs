#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d", &n);
    int mul=1;
    for (int i=1; i<=10; i++){
        mul*=i;
        if (mul>=n){
            printf("%d", i);
            break;
        }
    }
    return 0;
}