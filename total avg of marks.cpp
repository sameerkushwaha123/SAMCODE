#include <stdio.h>
#include <math.h>
int main()
{
    float m,tm = 0;
    int n;
    printf("enter the number of subject:");
    scanf("%d", &n);
    printf("enter total marks of examination:");
    scanf("%f", &m);
    int a[n];
    printf("enter the marks in each subject:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        tm = tm + a[i];
    }

    printf("%f is average of the marks\n", tm / n);
    printf("%f%% is percentage of the marks", (tm /m)*100);
    return 0;
}
