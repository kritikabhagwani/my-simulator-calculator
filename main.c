// ludo dice distribution analyzer
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    // creating loop for dice 1 when rolled
    int i;
    double arr[13]={0.0};

        // Initialize random number function
          srand((time(0))) ;
         for(i=1;i<=1000000;i++){
        int num1= (rand() %6)+1;
        int num2= (rand() %6)+1;
        int sum =num1+num2;
        //array to calculate how many times each sum appears
        arr[sum]=arr[sum]+1;
         }
         for(i=2;i<=12;i++){
             printf("number of times %d appears is %lf\n",i,arr[i]);
             double p= arr[i]/1000000;
             printf("probability of %d is %lf\n",i,p);
         }
}




