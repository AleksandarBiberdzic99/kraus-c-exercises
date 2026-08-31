//
//  main.c
//  3.3
//
//  Created by Aleksandar on 19. 7. 2026..
//

#include <stdlib.h>
#include <stdio.h>

#define MAX_NUMBER 100

int main(int argc, const char * argv[]) {
    
    int i,n;
    double vector1[MAX_NUMBER],vector2[MAX_NUMBER],scalar_product;
    
    while(1)
    {
        printf("Unesite duzinu dva vektora(najvise 100): ");
        
        if(scanf("%d",&n)!=1 || n<=0 || n>MAX_NUMBER)break;
        
        printf("Unesite komponente vektora 1: ");
        
        for(i=0;i<n;i++)
            scanf("%lf",&vector1[i]);
        
        printf("Unesite komponente vektora 2: ");
        
        for(i=0;i<n;i++)
            scanf("%lf",&vector2[i]);
        
        scalar_product=0.0;
        
        for(i=0;i<n;i++)
            scalar_product+=vector1[i]*vector2[i];
        
        printf("Skalarni proizvod vektora 1 i vektora 2 je: %.3lf\n",scalar_product);
        
        
        
    }
    
    return EXIT_SUCCESS;
}
