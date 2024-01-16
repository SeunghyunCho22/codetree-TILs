#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int val, sum_val;
    sum_val=0;
    for (int i=0; i<10; i++){
        scanf("%d", &val);
        sum_val+=val;
    }
    printf("%d", sum_val);

    return 0;
}