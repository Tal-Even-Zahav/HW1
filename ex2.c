#include <stdio.h>
int main()
{
    int score =0, cnt = 0, gradenum = 0;
    printf("Please enter the exam score (0-100):\n");
    scanf("%d", &score);
    while ((score < 0 || score > 100)&&(cnt<2))
        { 
            cnt++;
            printf("Invalid exam score: %d\nPlease enter a new exam score in the range 0-100:\n",score);
            scanf("%d", &score);
        }
    if (cnt == 2)
        printf("The user has inserted 3 consecutive times an invalid score.\nExiting the program!\n");
    else
    {
        gradenum = score /10;
        switch (gradenum)
        {
        case 10:
            printf("Grade: A\nExcellent work!\n");
            break;
        case 9:
            printf("Grade: A\nExcellent work!\n");
            break;
        case 8:
            printf("Grade: B\nWell done.\n");
            break;
        case 7:
            printf("Grade: C\nNot bad! You can do better..\n");
            break;
        case 6:
            printf("Grade: D\nYou passed, but there is room for improvement.\n");
            break;
        case 5:
            printf("Grade: E\nBarely passed - you should work harder next time.\n");
            break;
        default:
            printf("Grade: F\nYou Failed - you need to review the material.\n");
            break;
        }





    }
    return 0 ;
    
}