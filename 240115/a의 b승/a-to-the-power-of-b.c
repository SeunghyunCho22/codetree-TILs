#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int prod=1;
    int a,b;
    scanf("%d %d", &a, &b);
    for(int i=0; i<b; i++){
        prod*=a;
    }

    printf("%d", prod);
    return 0;
}