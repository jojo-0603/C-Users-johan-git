#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    int i, j;
    static int countplay, countcomp;
    char n[40], ch;
    printf("\n\n!!!!!!!!!!!!!!!\t\t  Lets us begin the game of R.S.P \t\t!!!!!!!!!!!!!\n");
    printf("\nNOTE:: U Have Three Turns\n");
    printf("\n\t lets see who wins !!\n\n");
    printf("enter the name of player:");
    scanf("%s", n);
    for (j = 0; j < 3; j++)
    {
        printf("\n\n\n******Turn No.%d********", j + 1);
        printf("\n\nenter ur choice of R.S.P:");
        fflush(stdin);
        scanf("%c", &ch);
        switch (ch)
        { // rock=0,sci=1,paper=2"
        case 'r':
        case 'R':
            printf("\n\nu have entered ROCK ");
            i = rand() % 3;
            switch (i)
            {
            case 0:
                printf("\nThe computer has entered rock \n");
                break;
            case 1:
                printf("\nThe computer has entered sci  \n");
                break;
            case 2:
                printf("\nThe conputer has entered paper \n ");
                break;
            }
            if (i == 0)
                printf("\n\tSRZ Its a draw\n");
            else if (i == 2)
            {
                printf("\n\tAWW! you lose\n");
                countcomp++;
            }
            else
            {
                printf("\n\tYAAYY! You win\n");
                countplay++;
            }

            break;

        case 's':
        case 'S':
            printf("\nu have entered siccors ");
            i = rand() % 3;
            switch (i)
            {
            case 0:
                printf("\nThe computer has entered rock \n");
                break;
            case 1:
                printf("\nThe computer has entered sci  \n");
                break;
            case 2:
                printf("\nThe conputer has entered paper \n ");
                break;
            }
            if (i == 1)
                printf("\n\tSRZ Its a draw\n");
            else if (i == 2)
            {
                printf("\n\tAWW! you lose\n");
                countcomp++;
            }
            else
            {
                printf("\n\tYAAYY! You win\n");
                countplay++;
            }

            break;

        case 'p':
        case 'P':
            printf("\nu have entered PAPER");
            i = rand() % 3;
            switch (i)
            {
            case 0:
                printf("\nThe computer has entered rock \n");
                break;
            case 1:
                printf("\nThe computer has entered sci  \n");
                break;
            case 2:
                printf("\nThe conputer has entered paper \n ");
                break;
            }
            if (i == 2)
                printf("\n\tSRZ Its a draw\n");
            else if (i == 1)
            {
                printf("AWW! you lose");
                countcomp++;
            }
            else
            {
                printf("\n\tYAAYY! You win\n");
                countplay++;
            }

            break;
        }
    }

    if (countcomp > countplay)
        printf("\n\n\t\t....Sadly %s you lose!.....\n", n);
    else if (countplay > countcomp)
        printf("\n\n\t\t$$$$$ %s: YOU WINN!!!!$$$$$\n", n);
    else
        printf(" \n\n\tSRZ PPL ITS A TIEE\n");

    return 0;
}