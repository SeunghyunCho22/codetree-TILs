#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    for (int i=1; i<=n; i++){
        int k=0;
        if (i%2==0 || i%3==0){
            k=1;
        }
        printf("%d ", k);
    }
    return 0;
}