#include <stdio.h>

int main(void)
{
    int n;
    int j=0;
    int i;
    int sum=0;
    printf("please enter the number:");
    scanf("%d", &n);

    printf("bit-reversed£º");

    for(i=0; n>0; j=0){
        j=n%10;
        n/=10;
        printf("%d", j);
        sum+=j;
    }

    printf("sum=%d\n", sum);

    return 0;
}
