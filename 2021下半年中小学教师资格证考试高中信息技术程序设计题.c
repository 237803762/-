#include <stdio.h>

int main()
{
    int i,j,k;
    for(i=1;i<+100;i++)
        for(j=1;j<+100;j++)
            for(k=1;k<+100;k++)
            if(i+j+k==100)
    {
        if(i/5+j*3+k*5==100&&i%10==0)
        {
            printf("small: %d\n hen: %d\n cock: %d\n",i,j,k);
        }
    }
    return 0;
}

