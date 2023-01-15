
#include <stdio.h>

int main()
{
    float a,b,c;
    
    printf("for km to m press 1 and press 2 for m to km="); 
    scanf("%f",&a);
    if(a=1)
    {
        printf("Enter a number in km:");
        scanf("%f",&b);
        c=b*1000;
        printf(" value in meter: %f\n",c);
    }
    else if(a=2)
    {
        printf("Enter a number in meter:");
        scanf("%f",&b);
        c=b/1000;
        printf("value in kilometer :%f\n",c);
    }
     else{
        printf("INVALID INPUT");
    
     }
     return 0;
     

}



