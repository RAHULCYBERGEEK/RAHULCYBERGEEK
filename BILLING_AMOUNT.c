#include<stdio.h>
int main()
{
    int num_of_10_coins,  num_of_5_coins, num_of_2_coins, num_of_1_coins;
    float total_amt = 0.0;
    printf("\n enter the number of rs10 coins in the piggybank : ");
    scanf("%d ", &num_of_10_coins);
    printf("\n enter the number of rs 5 coins in the piggybank : ");
    scanf("%d ", &num_of_5_coins);
    printf("\n enter the number of rs 2 coins in the piggybank : ");
    scanf("%d ", &num_of_2_coins);
    printf("\n enter the number of rs 1 coins in the piggybank : ");
     scanf("%d ", &num_of_1_coins);

     total_amt =  num_of_10_coins * 10 +num_of_5_coins * 5 + num_of_2_coins * 2 + num_of_1_coins;

     printf("\n total amount in the piggybank = %f ", total_amt);

     return 0;
}
