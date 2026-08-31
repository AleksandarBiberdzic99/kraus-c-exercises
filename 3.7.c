//
//  main.c
//  3.7
//
//  Created by Aleksandar on 19. 7. 2026..
//

#include <stdlib.h>
#include <stdio.h>

#define MAX_NUMBER 10000
int main(int argc, const char * argv[]) {
    
    int all_integers[MAX_NUMBER],positive[MAX_NUMBER],negative[MAX_NUMBER];
    int i,n,p=0,g=0;
    
    while(1)
    {
        printf("Unesite broj elemenata niza: ");
        if(scanf("%d",&n)!=1 || n<=0 || n>MAX_NUMBER)break;
        
        printf("Unesite elemente niza: ");
        
        for(i=0;i<n;scanf("%d",&all_integers[i++]));
        
        
        for(i=0;i<n;i++)
            if(all_integers[i]<0)
                negative[g++]=all_integers[i];
            else
                positive[p++]=all_integers[i];
        
        printf("Pozitivni brojevi: ");
        for(i=0;i<p;printf("%d ",positive[i++]));
        
        printf("\n");
        
        printf("Negativni brojevi: ");
        for(i=0;i<g;printf("%d ",negative[i++]));
        
        printf("\n");
        
        p=0;g=0;
        
    }
    
    return EXIT_SUCCESS;
}
