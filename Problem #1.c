#include <stdio.h>
#include <stdlib.h>
#define CHANGES 3

void change(int amnt)
{
    int pieces, i, total=0;
    int coinList[total];
    int coins[CHANGES] = {10, 5, 1};

    for (int num = 0; num < CHANGES; num++){
        pieces = amnt / coins[num];
        if (pieces){
            amnt = amnt % coins[num];
            printf("\n%d piece(s) of %d peso coin\n", pieces, coins[num]);
        }
        total += pieces;
    }
    printf("\nTotal number of coins: %d", total);
    printf("\n\n");
    system("pause");
}
int main()
{
    int amnt;
    while(1){
        system("cls");
        system("color e");

        printf("\n\n\t\t\t=====================================================================");
        printf("\n\t\t\t=\t\t\t    Money Change\t\t\t    =");
        printf("\n\t\t\t=====================================================================");

        printf("\n\n\nEnter Amount: ");
        scanf("%d", &amnt);
        if(amnt >= 1 && amnt <= 1000){
            change(amnt);
        }
        else{
            printf("Please enter amount between 1 to 1000\n\n");
            system("pause");
        }
    }
    return 0;
}
