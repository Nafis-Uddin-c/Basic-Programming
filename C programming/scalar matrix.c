#include <stdio.h>
int main()
{
    int n, m;
    scanf("%d%d", &n, &m);
    int a[n][m];
    int flag = 1;
    if(n!=m)
    {
        flag =0;
    }
    for(int i = 0; i<n; i++)
    {
        for(int j =0 ; j<m; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<m; j++)
        {
            if(i==j)
            {
                if(a[i][j] != a[0][0])
                {
                    flag = 0;
                }
            }
            else if(a[i][j]!=0)
            {
                flag = 0;
            }
        }
    }
    if(flag == 0)
    {
        printf("Not scalar matrix");
    }
    else 
    {
        printf("Scalar matrix");
    }
    return 0;
}