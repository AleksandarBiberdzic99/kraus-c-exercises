//
//  main.c
//  3.11
//
//  Created by Aleksandar on 20. 7. 2026..
//

#include <stdlib.h>
#include <stdio.h>

#define MAX_LEN 100

int main(int argc, const char * argv[]) {
    
    int i,j,n,m,length;
    int a[MAX_LEN],b[MAX_LEN],c[2*MAX_LEN];
    
    while(1)
    {
        printf("Unesite broj elemenata prvog niza: ");
        if(scanf("%d",&n)!=1 || n<=0 || n>MAX_LEN)break;
        
        printf("Unesite elemente prvog niza: ");
        for(i=0;i<n;scanf("%d",&a[i++]));
        
        printf("Unesite broj elemenata drugog niza: ");
        if(scanf("%d",&m)!=1 || m<=0 || m>MAX_LEN)break;
        
        printf("Unesite elemente drugog niza: ");
        for(i=0;i<m;scanf("%d",&b[i++]));
        
        //FUZIJA DVA NIZA A I B U DRUGI NIZ C

        i=0;
        j=0;
        length=0;
        while(i<n && j<m) c[length++] = (a[i]<b[j]) ? a[i++] : b[j++];
        while(i<n) c[length++]=a[i++];
        while(j<m) c[length++]=b[j++];
        
        
        //ISPIS NIZA C KOJI JE NASTAO FUZIJOM NIZA A I NIZA B
        
        printf("Niz nakon fuzije dva niza: ");
        for(i=0;i<length;printf("%d ",c[i++]));
        
        printf("\n");
    }
    
    return EXIT_SUCCESS;
}
