#include "prime.h"

int prime(int n)
{
  int i, flag = 0;
  for (i = 2; i <= n / 2; ++i) {

        // condition for non-prime
        if (n % i == 0) {
            flag = 1;
            break;
        }
    }
    if (n < 0) {
        return 0;
    }
    if (n == 1) {
        printf("1 is neither prime nor composite.\n");
        return 0;
    }
    else {
        if (flag == 0)
        {
            printf("%d is a prime number.\n", n);
            return 1;
        }
        else
        {
            printf("%d is not a prime number.\n", n);
            return 0;
        }
    }
}
