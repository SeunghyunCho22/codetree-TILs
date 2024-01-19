#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d", &n);
    int count=0;
    for (int i=1; i<=n; i++){
        if(i%2==0 || i%3==0 || i%5==0){
            continue;
        }
        count+=1;
    }
    print("%d", count);
    return 0;
}