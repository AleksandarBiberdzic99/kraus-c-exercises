//
//  main.c
//  3.8b
//
//  Created by Aleksandar on 20. 7. 2026..
//

#include <stdlib.h>
#include <stdio.h>

#define MAX_LEN 100

int main(int argc, const char * argv[]) {
    
    int num,k,n,i;
    int a[MAX_LEN];
    
    for(;;)
    {
        printf("Unesite broj elemenata niza: ");
        if(scanf("%d",&n)!=1 || n<=0 || n>MAX_LEN)break;
        
        printf("Unesite elemente niza: ");
        for(i=0;i<n;scanf("%d",&a[i++]));
        
        printf("Unesite poziciju od koje želite da brišite elemente: ");
        if(scanf("%d",&k)!=1 || k<0 || k>n-1)break;
        
        printf("Unesite koliko elemenata želite da obrišete: ");
        if(scanf("%d",&num)!=1 || (k+num)>n || num<1)break;
        
        
        
        for(i=k+num;i<n;a[k++]=a[i++])
            ;
        n=n-num;
        
        printf("Elementi niza nakon brisanja: ");
        
        for(i=0;i<n;printf("%d ",a[i++]));
        
        printf("\n");
    }
    
    return EXIT_SUCCESS;
}
