#include <stdio.h>

int main()
{
    //printf("Hello World!\n");
    int n;
    scanf("%d",&n);
    int a[n];
    int i;
    for( i=0;i<n;i++)
        scanf("&d",&a[i]);
    int x=0,y=0,z=0;
    for( i=0;i<n;i+=3)
        x+=a[i];
    for( i=1;i<n;i+=3)
        y+=a[i];
    for( i=2;i<n;i+=3)
        z+=a[i];
    printf("%d %d %d",x,y,z);
    return 0;
}

