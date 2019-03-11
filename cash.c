#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
int cents_owed;

do
{
cents_owed = get_float("change owed: \n");
}
while(cents_owed <= 0.00);


    int quarters = cents_owed / 25;
    printf("quarters: ");
    printf("%d\n", quarters);

    int dimes = (cents_owed % 25) / 10;
      printf("dimes: ");
    printf("%d\n", dimes);

    int nickels = ((cents_owed % 25) % 10) / 5;
      printf("nickels: ");
    printf("%d\n", nickels);

  printf("pennies: ");
    int pennies = ((cents_owed % 25) % 10) % 5;
     printf("%d\n", pennies);


printf("total coins: ");
    printf("%d\n", quarters + dimes + nickels + pennies);


}