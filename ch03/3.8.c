//
//  main.c
//  3.8
//
//  Created by Aleksandar on 19. 7. 2026..
//

#include <stdlib.h>
#include <stdio.h>

#define MAX_NUMBER 100
int main(int argc, const char * argv[]) {
    
    int a[MAX_NUMBER],n,k,i;
    
    while(1)
    {
        printf("Unesite broj elemenata: ");
        if(scanf("%d",&n)!=1 || n<=0 || n>MAX_NUMBER)break;
        
        printf("Unesite elemente niza: ");
        
        for(i=0;i<n;scanf("%d",&a[i++]));
        
        printf("Unesite poziciju elementa koji zelite da obrisite: ");
        if(scanf("%d",&k)!=1 || k<0 || k>n-1)break;
        
        
        
        for(i=k;i<n-1;i++)
            a[i]=a[i+1];
        
        n--;
        
        printf("Niz nakon brisanja elementa: ");
        
        for(i=0;i<n;printf("%d ",a[i++]));
        printf("\n");
        
        
    }
    return EXIT_SUCCESS;
}
