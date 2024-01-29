#include <stdio.h>

void print10Stars(){
    for (int j=0; j<10; j++){
        printf("*");
    }
    
}

int main() {
    // 여기에 코드를 작성해주세요.

    for(int i=0; i<5; i++){
        print10Stars();
        printf("\n");
        }

    return 0;
}