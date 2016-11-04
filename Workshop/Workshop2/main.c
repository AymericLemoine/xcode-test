//
//  main.c
//  Workshop2
//
//  Created by Aymeric LEMOINE on 18/10/2016.
//  Copyright © 2016 Aymeric LEMOINE. All rights reserved.
//

#include <stdio.h>

int main()
{
    int un,a,k,u0=0;
    int i=0;

    
    printf("Un+1= (Un+ A/Un)/2 \n");
    printf("Quel est la valeur de A?\n A=");
    scanf("%d",&a);
    printf("Quel est le nombre d'itération?\n k=");
    scanf("%d",&k);
    
    for (i=0; i!=k ; i++)
    {
        un= (u0+ a/u0)/2;
        u0=un;
        printf("%d \n",un);
        
    }
    
    
    return 0;
}
