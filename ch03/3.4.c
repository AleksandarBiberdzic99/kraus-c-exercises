//
//  main.c
//  3.4
//
//  Created by Aleksandar on 19. 7. 2026..
//

#include <stdlib.h>
#include <stdio.h>

#define MAX_NUMBER 1000

int main(int argc, const char * argv[]) {
    
    int i,n;
    double a[MAX_NUMBER],min;
    
    while(1)
    {
        printf("Unesite broj elemenata niza: ");
        
        if(scanf("%d",&n)!=1 || n<=0 || n>MAX_NUMBER)break;
        
        printf("Unesite elemente niza: ");
        
        for(i=0;i<n;scanf("%lf",&a[i++]));
        
        min=a[0];
        
        for(i=1;i<n;i++)
            if(a[i]<min)
                min=a[i];
        
        printf("min= %.2lf\n",min);
    
    }
    
    return EXIT_SUCCESS;
}
