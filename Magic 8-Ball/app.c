#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<conio.h>

void main()
{
    int answer;
    char question[100];

    srand(time(0));

    printf("Welcome to the Magic 8-Ball game!");
    printf("\n\nAsk Yes/No question:");
    fgets(question,100,stdin);

    answer= rand() % 5 + 1;

    switch(answer)
    {
        case 1:
        printf("Yes! Definitely");
        break;

        case 2:
        printf("\nNo! Not at all");
        break;

        case 3:
        printf("\nMaybe!");
        break;

        case 4:
        printf("\nAsk again later!");
        break;

        case 5:
        printf("\nI can't tell you right now!");
        break;
    }
}