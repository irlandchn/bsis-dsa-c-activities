#include <stdio.h>
#include <stdlib.h>

int maxDigit_1(int x)
{
    int n = 0;
    while(x>0){
        n = x%10;
        x = x/10;
    }
    return(n);
}

void max_num(int *m, int *n)
{
    int s=1, k, c=0, num1, num2, p, q;
    p = *m;
    q = *n;
    k = q;
    for(;k>0; c++){
        k = k/10;
    }
    for(;c>0; c--){
        s = s*10;
    }
    num1 = p * s + q;
    k = p;
    c = 0;
    for(; k>0; c++){
        k = k/10;
    }
    s = 1;
    for(; c>0; c--){
        s = s * 10;
    }
    num2 = q * s + p;
    if(num1 > num2){
        *m = p;
        *n = q;
    }else{
        *m = q;
        *n = p;
    }
}
int main()
{
    int size, temp, a, b, z;

    system("color e");
    printf("\n\n\t\t\t*******************************************************************");
    printf("\n\t\t\t*\t\t\t  Maximum Salary\t\t\t  *");
    printf("\n\t\t\t*******************************************************************");

    printf("\n\n\nHow many numbers do you wish to enter?: ");
    scanf("%d", &size);
    int digits[size];

    for(int k=0; k<size; k++)
        scanf("%d", &digits[k]);
    for(int i=0; i<size-1; i++){
        for (int j=0; j<size-1; j++){
            if (maxDigit_1(digits[j]) < maxDigit_1(digits[j+1]))
            {
                temp = digits[j];
                digits[j] = digits[j+1];
                digits[j+1] = temp;
            }
            else if(maxDigit_1(digits[j]) == maxDigit_1(digits[j+1]))
            {
                a = digits[j];
                b = digits[j+1];
                max_num(&a, &b);
                digits[j] = a;
                digits[j+1] = b;
            }
        }
    }
    printf("\nYour largest salary from your given numbers is: ");
    for(z = 0; z < size; z++){
        printf("%d", digits[z]);
    }


}
