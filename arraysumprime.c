#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool is_prime(int n) {
    if (n <= 1 ||n%2==0) {
        return false;
    }

    for (int i = 2; i <= sqrt(n); i+=2) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}


int main() 
{
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }

    printf("The sum of the integers is %d\n", sum);
    if(is_prime(sum))
    {
        printf("The sum is prime");
    }
    else
        printf("The sum is not prime");

    return 0;
}
