#include <stdio.h>

int main() {
    int  a[25],n,i ;
    int m, largest;
    printf(" Enter the Numbers of Array Element: ");
    scanf("%d", &n);
    printf("Enter the Array Element : \n");
    for (  i=1; i<=n; i++){
    scanf("%d", &a[i]);
}
    printf("Array Elements are : \n");
    for (i=1; i<=n; i++){
    printf("\t %d", a[i]);
}

   largest = 0;
   
   for(m = 0; m < 10; m++) {
      if( largest < a[m] ) 
         largest = a[m];
   }
   
   printf("\nLargest element of array is %d", largest);   
   
   return 0;
}
