#include <stdio.h>
int main()
{
    int m, n;
    printf("Enter the number of processes and the instances of resources\n");
    scanf("%d", &m);
    scanf("%d", &n);
    int allocated[m][n];
    int maxallowed[m][n];
    int available[n];
    printf("Enter the Resources: Allocated to: \n");
    for (int i = 0; i < m; i++)
    {
        printf("Process %d\t", i);
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &allocated[i][j]);
        }
    }
    printf("\n");
    printf("Enter the Resources: Allowed for \n");
    for (int i = 0; i < m; i++)
    {
        printf("Process %d\t", i);
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &maxallowed[i][j]);
        }
    }
    printf("\n");
    printf("Enter the instances of the resources available \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &available[i]);
    }

    int needed[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            needed[i][j] = maxallowed[i][j] - allocated[i][j];
        }
    }
    int visited[m], ind = 0;
    for (int i = 0; i < m; i++)
    {
        visited[i] = 0;
    }
    int ans[m];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            int flag = 0;
            for (int k = 0; k < n; k++)
            {
                if (needed[j][k] > available[k])
                {
                    flag = 1;
                    break;
                }
            }
            if (flag == 0 && visited[j] != 1)
            {
                visited[j] = 1;
                ans[ind++] = j;
                for (int l = 0; l < n; l++)
                {
                    available[l] += allocated[j][l];
                }
            }
        }
    }
    for (int i = 0; i < m; i++)
    {
        if (visited[i] == 0)
        {
            printf("Not in safe state\n");
            return 0;
        }
    }
    printf("The order of execution is: ");
    for (int i = 0; i < m; i++)
    {
        printf("P %d\t", ans[i]);
    }
    printf("\n");
}
