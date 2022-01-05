#include <stdio.h>

int num;
int bit;

void user_input()
{
    printf("Enter a decimal number: ");
    scanf(" %d", &num);
    printf("Enter the bit number(0,1,...,31): ");
    scanf(" %d", &bit);
}
int main()
{
    while(1)
    {
        int x;
        int value;

        printf("Enter the number of the operation(1,2,3,4):\n");
        printf("1-Set bit\n");
        printf("2-Clear bit\n");
        printf("3-Toggle bit\n");
        printf("4-Read bit\n");
        scanf(" %d",&x);

        if(x==1)
        {
            user_input();
            printf("%d",num);

            printf("Enter the new bit value(0/1): ");
            scanf(" %d", &value);

            if(value==1)
            {
                num = num | 1<<bit;
            }
            else
            {
                num = num & ~(1<<bit);
            }
            printf("The new value of the number is %d\n",num);

        }
        else if(x==2)
        {
            user_input();
            num = num & ~(1<<bit); //clearing the desired bit
            printf("The new value of the number is %d\n",num);
        }
        else if(x==3)
        {
            user_input();
            num = num ^ 1<<bit; //XOR with the desired bit for toggling it
            printf("The new value of the number is %d\n",num);
        }
        else if(x==4)
        {
            user_input();
            if(num & (1<<bit)) //reading the bit and printing its value
            {
                printf("1\n");
            }else{
            printf("0\n");
            }
        }
        else
            printf("Invalid input!\n");

        printf("\n");
    }

    return 0;
}
