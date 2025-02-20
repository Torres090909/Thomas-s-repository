#include <stdio.h> 
int main() 
{
    int n;
    scanf("%d", &n);
    int way[n+1];
    way[0]=0;
    way[1]=0;
    way[2] = 1;  
    way[3] = 2;  
    for (int i = 4; i <= n; i++) {
        way[i] = (i - 1) * (way[i - 1] + way[i - 2]);
    }
    printf("%d", way[n]);
    return 0;
}