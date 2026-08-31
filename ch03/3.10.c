//
//  main.c
//  3.10
//
//  Created by Aleksandar on 20. 7. 2026..
//

#include <stdlib.h>
#include <stdio.h>

#define MAX_LEN 100

int main(int argc, const char * argv[]) {
    
    int i,n,value;
    int a[MAX_LEN];
    
    for(;;)
    {
        printf("Unesite broj elemenata niza: ");
        if(scanf("%d",&n)!=1 || n<=0 || n>=MAX_LEN)break;
        
        printf("Unesite elemente niza u rastućem porteku: ");
        
        for(i=0;i<n;i++)
            scanf("%d",&a[i]);
        
        printf("Unesite vrednost koju želite da dodate: ");
        scanf("%d",&value);
        
        i=n-1;
        while(i>=0 && a[i]>value)
        {
            a[i+1]=a[i];
            i--;
        }
        a[i+1]=value;
        
        //ISPIS NIZA NAKON DODAVANJA NOVOG ELEMENTA
        
        printf("Niz nakon dodavanja nove vrednosti: ");
        
        for(i=0;i<n+1;printf("%d ",a[i++]));
        
        printf("\n");
    }
    return EXIT_SUCCESS;
}
