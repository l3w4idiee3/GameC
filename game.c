#include <stdio.h>

int main()
{
    int i;
    int ans1, ans2, ans3, ans4, ans5;
    int point1, point2, point3, point4, point5, point6, point7, point9, point10;
    int point01, point02, point03, point04, point05, point06, point07, point08, point09, point010;

    printf(" Welcome to the Game and Enjoy\n\n");

    printf("> Press 7 to start the game\n");
    printf(">Press 0 to exit the game\n");

    scanf("%d", &i);

    if (i == 7)
    {
        printf("The game has started\n\n");
    }
    else if (i ==0)
    {
        printf("The game has ended\n\n");
    }
    else
    {
        printf("Invalid\n\n");
    }

    if (i == 7)
    {
        printf("1) Which is the smallest planet in the solar system?\n\n");
        printf("1) Pluto\n");
        printf("2) Jupiter\n");
        printf("3) Earth\n");
        printf("4) Mars");

        printf("Enter Your answer : ");
        scanf("%d", &ans1);

        if (ans1 == 1)
        {
            printf("Correct answer\n");
            point1 = 5;
            printf("You have scored %d point\n", point1);
        }
        else
        {
            printf("Wrong anwer\n");
            point01 = 0;
            printf("You have scored %d point\n", point01);
        }

        printf("2) what is the highest mountain in Africa\n\n");
        printf("1) Mt.Kenya\n");
        printf("2) Mt.Ruwenzori\n");
        printf("3) Mt.Kilimanjaro\n");
        printf("4) Mt.Longonot\n");

        printf("Enter your Answer\n");
        scanf("%d", &ans2);

        if (ans2 == 3)
        {
            printf("Correct answer\n");
            point2 = 5;
            printf("You have scored %d point\n", point2);
        }
        else
        {
            printf("wrong answer\n");
            point02 = 0;
            printf("You have scored %d point\n", point01);
        }

        printf("3) There are 10 birds on a wall, a shooter shoots one of them .How many birds were left?\n\n");
        printf("1) Zero\n");
        printf("2) Nine\n");
        printf("3) Eight\n");
        printf("4) All remained\n");

        printf("Enter your Answer\n");
        scanf("%d", &ans3);

        if (ans3 == 1)
        {
            printf("Correct answer\n");
            point3 = 5;
            printf("You have scored %d point\n", point3);
        }
        else
        {
            printf("Wrong asnwer\n");
            point03 = 0;
            printf("You have scored %d point\n", point03);
        }

        printf("4) The more you take, the more you leave behind. What am I?\n\n");
        printf("1) Money\n");
        printf("2) Footsteps\n");
        printf("3) Land\n");
        printf("4)Famous & popularity\n");

        printf("Enter your Answer\n");
        scanf("%d", &ans4);

        if (ans4 == 2)
        {
            printf("Correct answer\n");
            point4 = 5;
            printf("You have scored %d point\n", point4);
        }
        else
        {
            printf("Wrong answer\n");
            point04 = 0;
            printf("You have scored %d point\n", point04);
        }

        printf("5) What goes up but never comes down?\n\n");
        printf("1) Plants\n");
        printf("2) age\n");
        printf("3) mountain\n");
        printf("4) Building");

        printf("Enter your Answer\n");
        scanf("%d", &ans5);

        if ( ans5 == 2)
        {
            printf("Correct answer\n");
            point5 = 5;
            printf("You have scored %d point\n", point5);
        }
        else
        {
            printf("Wrong answer\n");
            point05 = 0;
            printf("You have scored %d point\n", point05);
        }
    }

}