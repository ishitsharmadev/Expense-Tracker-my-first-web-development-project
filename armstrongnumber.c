#include <math.h>
#include <stdio.h>


int armstrong(int x) {
    int count=0, last_digit, sum=0, temp;
    temp = x; // temp stores the value of x 
    while(x != 0){
        x /= 10;     //removes last digit and increases count
        ++count;  //count basically tells the number of digits in our number
    }
    x = temp; // restore the original value of x using temp

    while (x != 0){
        last_digit = x % 10;  //gives us the last digit of the number
        sum = sum + pow(last_digit, count); //it powers the last digit by the count 
        x /= 10; // it removes the last digit from the number
    }
    if (sum == temp) {
        return 1;
    } else {
        return 0; 
    }
}

int main() {
  int num;
  printf("Enter a number: ");
  scanf("%d", &num);

  if (num < 0) {
    printf("Armstrong numbers are defined only for positive integers.\n");
    return 1; // Exit program with an error code (optional)
  }

  if (armstrong(num)) {
    printf("%d is an Armstrong number\n", num);
  } else {
    printf("%d is NOT an Armstrong number\n", num);
  }

  return 0;
}
