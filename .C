#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int majority(int a[],int n)
    {
    int m;
    int i=0;
    for(int j=0;j<n;j++)
        {
        if(i==0)
            {
            m=a[j],i=1;
            }
        else{
            (m==a[j])?i++:i--;
            }
        }
    return m;
    }

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int n;
    scanf("%d",&n);
    int a[100];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        }
    int d=majority(a,n);
    printf("%d",d);
    return 0;
}
