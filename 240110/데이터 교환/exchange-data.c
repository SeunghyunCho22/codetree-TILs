#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a=5, b=6, c=7;
    int temp1=a;
    a=c; // 목표는 7 5 6
    // 7 6 7
    int temp2=b;

    c=b;
    // 7 6 6

    b=temp1;

    printf("%d\n%d\n%d", a, b, c);
    
    return 0;
}