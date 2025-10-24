#include <stdio.h>

int main() {
int arr[5];

        for (int i =0;i<=5;i++){
                scanf ("%d",&arr[i]);
        }int max =arr[0],min =arr[0],minidx =0,maxdx =0;
            for (int i =0;i<5;i++){
                    if (arr[i] >max){

                            max =arr[i];
                        maxdx =i;                  
                     }
                     if (arr[i] < min){
                            min = arr[i];
                            minidx = i;
            }
            } 
                    printf ("maximum number %d ",max);
                printf ("minimum number %d ",min);

    return 0;
}

