#include<stdio.h>

int main()
{
    int n, cnt = 0;
    scanf("%d", &n);
    while(n--)
    {
        int t, cnthere = 0;
        for(int i = 0; i < 3; i++)
        {
            scanf("%d", &t);
            if(t)
                cnthere++;
        }
        if(cnthere >= 2)
            cnt++;
    }
    printf("%d\n", cnt);
    return 0;
}