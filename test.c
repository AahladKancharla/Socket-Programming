#include <stdio.h>


int maxSliceSum(int A[],int N){

int i,j;
int maxsum,tempsum, maxslicesum;
for(i=0;i<N;i++){

for (j=0;j<N;j++){

if(j==0){

tempsum= A[i]+A[j];
}
else {

tempsum=tempsum+A[j];
}
if(tempsum> maxsum){
maxsum= tempsum;
}

}

if(maxsum> maxslicesum){

maxslicesum =maxsum;

}

}
return maxslicesum;
}

void main(){

  int c,i;
    int count;
    int arr[50];
printf("Enter the size of array \n");
scanf("%d",&count);

   for(i=0;i<count;i++){
printf("Enter the number into the array: \n");
scanf("%d",&c);
        arr[i] = c;
        
    }

int num = maxSliceSum( arr, count);

printf(" the answer is : %d",num);

}


