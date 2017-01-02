#include<stdio.h>
#include<conio.h>
using namespace std;

int main()
{
    int n;
    scanf("%d",&n);
    for(int i =0;i<n;i++)
    
    {
             for(int k=0;k<i;k++)
                    printf(" ");
            for(int j=0;j<=i;j++)
            {
                   
            printf("*");
            }
            printf("\n");
}

for(int i =n-1;i>0;i--)
    
    {
             for(int k=i;k>0;k--)
                    printf(" ");
            for(int j=i;j>0;j--)
            {
                   
            printf("*");
            }
            printf("\n");
}



getch();
    }
