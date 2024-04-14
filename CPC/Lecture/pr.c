#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int a[n];
printf("Enter %d value =  \n",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int check=a[0],count=0,temp=0;
    for(int i=0;i<n;i++)
    {
        if(check==a[i] && count<=3)
        {
            check = a[i];
            count++;
        }
        else if( count<3 && check != a[i]){
            temp=1;
            break;
        }

        else if( count>3 || check != a[i])
        {
            if(count>3)
            {
                temp=1;
                break;
            }
            if(check != a[i] && count==3)
            {
                check = a[i];
                count=0;
                i--;
            }
        }

    }
    printf("\n\n");

    if(count%3==0 && temp==0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}