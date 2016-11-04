//
//  main.c
//  workshop
//
//  Created by Aymeric LEMOINE on 18/10/2016.
//  Copyright © 2016 Aymeric LEMOINE. All rights reserved.
//

#include <stdio.h>
#include <math.h>

int main()
{
    int a,b,c;      // comm tests
    int X1,X2;
    int alpha;
    int delta;
    printf("quel est l'équation:aX^2+bX+C=0 \n");
    printf("a=");
    scanf("%d",&a);
    printf("b=");
    scanf("%d",&b);
    printf("c=");
    scanf("%d",&c);
    
    delta=b*b - 4*a*c;
    if (delta > 0)
    {
        printf("il existe 2 solution: \n");
        X1=-b-sqrt(delta)/2*a;
        printf("X1:%d \n",X1);
        X2=-b+sqrt(delta)/2*a;
        printf("X2:%d \n",X2);
    }
    else if (delta ==0)
    {
        printf("il existe une solution:\n");
        alpha=-b/2*a;
        printf("alpha:%d\n",alpha);
    }
    else if (delta < 0)
    {
        printf("il n'existe aucune solution parmis les réels. \n");
    }
    return 0;
}
