#include<stdio.h>
int main()
{
    int x=10;
    int y=x++;
    printf("%d",y);
    int z= ++y;
    printf("%d\n",z++);
    printf("%d",z);
    return 0;
}
