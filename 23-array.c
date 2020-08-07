#include<stdio.h>

int main() {
    int marks[2][4] ={ { 68, 50, 75, 65 }, { 1, 2, 3, 4 } };
    // marks[0]=45;
    // marks[1]=47;
    // marks[2]=49;
    // marks[3]=51;
    // marks[4]=53;
    // printf("marks of student 1 is:\n %d\n", marks[0]);
    // printf("marks of student 2 is:\n %d\n", marks[1]);
    // printf("marks of student 3 is:\n %d\n", marks[2]);
    // printf("marks of student 4 is:\n %d\n", marks[3]);
    // printf("marks of student 5 is:\n %d\n", marks[4]);

    // for (int i = 0; i < 4; i++)
    // {
    //     printf("Enter the marks of each individual\n", i);
    //     scanf("%d", &marks[i]);
    // }

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {

            // printf("The marks of roll-%d,%d is %d\n", i, j, marks[i][j]);
            printf("%d ", marks[i][j]);

        }
        printf("\n");

    }


    return 0;
}