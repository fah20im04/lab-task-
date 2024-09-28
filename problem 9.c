#include <stdio.h>
int main()
{
    int N,i,max;
    scanf("%d", &N);
    int arr[N];
    for (int i=0; i<N; i++)
    {
        scanf("%d", &arr[i]);
    }max = arr[0];
    for(i=1;i<N;i++){
        if(arr[i]>max){
            max = arr[i];
        }

    }

    printf("The maximum is: %d\n", max);
    return 0;
}
