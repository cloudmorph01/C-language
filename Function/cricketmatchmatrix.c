
#include <stdio.h>

int mainOfTheMatch(int runs[2][11])
{
    int i, j;
    int maxRuns = runs[0][0];
    int player = 1;
    int team = 1;

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 11; j++)
        {
            if (runs[i][j] > maxRuns)
            {
                maxRuns = runs[i][j];
                player = j + 1;
                team = i + 1;
            }
        }
    }

    printf("\nMan of the Match:\n");
    printf("Team: %d\n", team);
    printf("Player: %d\n", player);
    printf("Runs: %d\n", maxRuns);

    return maxRuns;
}

int main()
{
    int runs[2][11];
    int i, j;

    for (i = 0; i < 2; i++)
    {
        printf("\nEnter runs for Team %d:\n", i + 1);

        for (j = 0; j < 11; j++)
        {
            printf("Player %d: ", j + 1);
            scanf("%d", &runs[i][j]);
        }
    }

    mainOfTheMatch(runs);

    return 0;
}
