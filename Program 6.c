//Insert an element from the array from user defined position.
#include<stdio.h>
void main(){

int arr[20], i, pos, value, n;

printf("Enter the limit:");
scanf("%d",&n);

for(i=0; i<n; i++){
    printf("Enter value %d:",i+1);
    scanf("%d",&arr[i]);
}

printf("\n Enter position at which you want to insert value:");
scanf("%d",&pos);
pos = pos-1;
printf("\n Enter new value to be inserted:");
scanf("%d",&value);

//logic

for(i=n; i>=pos; i--){
    arr[i] - 1;
}
arr[pos] = value;
for(i=0; i<n+1; i++){
    printf("\n %d", arr[i]);
}

}
