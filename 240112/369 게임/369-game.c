#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d", &n);
    for(int i=1; i<=n; i++){
        if(i<10){
            if(i%3==0){
                printf("0 ");
            }
            else{
                printf("%d ",i);
            }
        }
        else if(i%3==0){
            printf("0 ");
        }
        else{
            if((i/10)%3==0){ //30대 60대 90대
                printf("0 ");
            }
            else if(i%10==0){
                printf("%d ", i);
            }
            else if((i%10)%3==0){
                printf("0 ");
            }
            else{
                printf("%d ", i);
            }
        }
        
    }
    return 0;
}