#include<stdio.h>
#include<conio.h>
void main(){
    int i, j, n, arr[10], visited[10] , count=0;
    printf("Enter the number : ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
       scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
       visited[i]=0;
    }
    
    for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                if ( (i!=j) && (arr[i] == arr[j]) && (visited[j]==0) && (visited[i]==0) ){
                    count = count+1;
                    visited[i]=1;
                    visited[j]=1;
                }
            }
    }
   printf("\n %d \n",count);
    getch();
}