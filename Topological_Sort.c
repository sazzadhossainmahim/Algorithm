#include <stdio.h>

int main()
{
    int row, column;
    int input;
    int array[10][10];
    int indegree[10];
    int flag[10];
    int count = 0;
    int k;

    printf("Enter the Number of Vertices:\n");
    scanf("%d", &input);
    printf("Enter the Adjacency Matrix\n");

    for (row = 0; row < input; row++)
    {
        printf("Enter Row %d\n", row + 1);
        for (column = 0; column < input; column++)
            scanf("%d", &array[row][column]);
    }

    for (row = 0; row < input; row++)
    {
        indegree[row] = 0;
        flag[row] = 0;
    }

    for (row = 0; row < input; row++)
        for (column = 0; column < input; column++)
            indegree[row] = indegree[row] + array[row][column];

    printf("\n The Topological Order is:");

    while (count < input)
    {
        for (k=0;k<input;k++){
            if((indegree[k]==0) && (flag[k]==0)){
                printf("%d", (k+1));
                flag [k] = 1;

            }

            for(row=0;row<input;row++)
            {
                if(array[row][column])
                indegree[k]--;
            }
        }

        count++;
    }

    return 0;
}