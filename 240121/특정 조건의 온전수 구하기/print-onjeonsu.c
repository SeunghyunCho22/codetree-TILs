#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d", &n);
    for (int i=1; i<=n; i++)
    {
        if (i%2==0 || i%5==0 || i%3==0)
        {
            if(i%9==0)
            {
                printf("%d ",i);
            }
            continue;
        }
        printf("%d ",i);
    }

    return 0;
}