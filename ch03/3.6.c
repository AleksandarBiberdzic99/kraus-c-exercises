//
//  main.c
//  3.6
//
//  Created by Aleksandar on 19. 7. 2026..
//

#include <stdlib.h>
#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int nmax,b[20];
    int n,k;
    
    printf("nmax ? ");
    scanf("%d",&nmax);
    
    for(n=0;n<=nmax;n++)
    {
        b[n]=1;
        for(k=n-1;k>0;k--)
            b[k]=b[k]+b[k-1];
        for(k=0;k<=n;k++)
            printf("%d ",b[k]);
        
        printf("\n");
    }
    
    return EXIT_SUCCESS;
}
