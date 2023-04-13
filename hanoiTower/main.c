#include <stdio.h>
#include <stdlib.h>

void hanoiTower(char a,char b,char c,int num1)
{
    int count=0;

    while(num1 > 0)
    {
        hanoiTower(a,b,c,num1);
        num1--;
        char temp = a;
        a=c;
        c=temp;
    }
}



int main()
{
    int num1;
    printf("Enter the number of Disk = ");
    scanf("%d",num1);
    hanoiTower('A','B','C',num1);

    return 0;
}
