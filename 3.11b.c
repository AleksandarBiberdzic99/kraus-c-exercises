//
//  main.c
//  3.11b
//
//  Created by Aleksandar on 22. 7. 2026..
//

#include <stdlib.h>
#include <stdio.h>

#define MAX_LEN 100

int main(int argc, const char * argv[]) {
    
    int i,j,n,m;
    int a[2*MAX_LEN],b[MAX_LEN];
    
    while(1)
    {
        printf("Unesite broj elemenata prvog niza: ");
        if(scanf("%d",&n)!=1 || n<=0  || n>MAX_LEN)break;
        
        printf("Unesite elemente prvog niza: ");
        for(i=0;i<n;scanf("%d",&a[i++]));
        
        printf("Unesite broj elemenata drugog niza: ");
        if(scanf("%d",&m)!=1 || m<=0 || m>MAX_LEN)break;
        
        printf("Unesite elemente drugog niza: ");
        for(j=0;j<m;scanf("%d",&b[j++]));
        
        // Dodavanje elemenata niza b u niz a
        i=n-1;
        j=m-1;
        while(j>=0)
        {
            if(i>=0 && a[i]>=b[j])
            {
                a[i+j+1]=a[i];
                i--;
            }
            else
            {
                a[i+j+1]=b[j];
                j--;
            }
        }
        
        printf("Niz a nakon dodavanja niza b: ");
        for(i=0;i<(m+n);printf("%d ",a[i++]))
            ;
            printf("\n");
    }
    
    return EXIT_SUCCESS;
}
