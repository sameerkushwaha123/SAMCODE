#include <stdio.h>
float main()
{
    float a,b,c;
    printf("value of a before swaping a=");
    scanf("%f",&a);
    printf("value of b before swaping b=");
    scanf("%f",&b);
    c=0;
    a+=b;
    c+=a;
    c-=b;
    b=c;
    a-=b;
    printf("value of a after swaping=%f",a);
    printf("value of b after swaping=%f",b);
    return 0;
    
}

