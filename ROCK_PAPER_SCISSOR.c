#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int GenerateRandomNumber(int a)
{
    srand(time(NULL));
    return rand() % a;
}

int main()
{
    system("cls");
    printf("\n                                                                  START GAME\n");
    char Name[20];
    printf("          Enter your Name : ");
    scanf("%s",&Name);
    printf("\n");

    int i = 1;

    char R[10] = "ROCK";
    char P[10] = "PAPER";
    char C[10] = "SCISSOR";
    int choice;

    int Points_Of_User,Points_Of_Computer,Point_Counter_For_Computer=0,Point_Counter_For_User=0;
    while (i < 8)
    {
        int flag=0;
        
        
        printf("ROUND %d : ROCK  PAPER  SCISSOR\n", i);
        printf("YOUR TURN ARYAN : ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 0:
            printf("%s", R);
            printf("\n\n\n");
            break;
        case 1:
            printf("%s", P);
            printf("\n\n\n");
            break;
        case 2:
            printf("%s", C);
            printf("\n\n\n");
            break;
        }

        printf("COMPUTER'S TURN : ");
        int random = GenerateRandomNumber(3);
        printf("%d\n", random);

        switch (random)
        {
        case 0:
            printf("%s", R);
            printf("\n\n\n");
            break;
        case 1:
            printf("%s", P);
            printf("\n\n\n");
            break;
        case 2:
            printf("%s", C);
            printf("\n\n\n");
            break;
        }

        if (choice==random)
        {
            printf("MATCH DRAW\n\n");
            printf("--------------------------------------------------------------------------------\n\n");
            
        }
        else if(choice==0 && random==1 || choice==0 && random==2 || choice==2 && random==1)
        {
            printf("%s IS WINNER\n\n",Name);
            printf("--------------------------------------------------------------------------------\n\n");
            flag=0;
        }
        else{
            printf("COMPUTER IS WINNER\n\n");
            printf("--------------------------------------------------------------------------------\n\n");
            flag=1;
        }
        
        if (flag==0)
        {
            Point_Counter_For_User++;
            Points_Of_User=Point_Counter_For_User;
        }
        else if(flag==1)
        {
            Point_Counter_For_Computer++;
            Points_Of_Computer=Point_Counter_For_Computer;
        }
        

        i++;
    }

    if (Point_Counter_For_User==Point_Counter_For_Computer)
    {
        printf("                                                                  MATCH TIE\n");
    }
    else if (Point_Counter_For_User>Point_Counter_For_Computer)
    {
        printf("WINNER OF THIS MATCH IS %s.\n",Name);
    }
    else
    {
        printf("WINNER OF THIS MATCH IS COMPUTER\n\n\n\n\n\n");
    }
    

    return 0;
}