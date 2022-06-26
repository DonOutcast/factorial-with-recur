#include <stdio.h>
long factor_with_recur(int n);
long factor_without_recur(int n);

int main(void) {
    int n = 0;
    long result = 0;
    long result1 = 0;
    printf("Enter any number between 0 and 12: ");
    while(scanf("%d", &n) == 1) {
    if (n < 0) {
        printf("Error a number less 0\n");
    }
    else if (n > 12) {
        printf("Number is so big\n");
   }
   else {
   printf("Recur\n");
   result = factor_with_recur(n);
   printf("%ld\n", result);
   printf("Without Recur\n");
   result1 = factor_without_recur(n);
   printf("%ld\n", result1);
   }
   }
    return 0;
}

long factor_without_recur(int n) {
    long result;
    for (result = 1; n > 1;n--) {
        result *= n;
     }
     return (result);
}

long factor_with_recur(int n) {
    long result;
    if (n > 0){
        result = n * factor_with_recur(n - 1);
    } else {
        result = 1;
    }   
    return (result);
}
 
