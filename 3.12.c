//
//  main.c
//  3.12
//
//  Created by Aleksandar on 22. 7. 2026..
//

#include <stdlib.h>
#include <stdio.h>
#include <time.h>

#define MAX_LEN 1000000

int main(int argc, const char * argv[]) {
    
    int i,j,n;
    int a[MAX_LEN];
    int max_index,temp;
    srand((unsigned)time(NULL));
    
    
    for(;;)
    {
        printf("Unesite dužinu niza: ");
        if(scanf("%d",&n)!=1 || n<=0 || n>MAX_LEN)break;
        
       // Generisanje nasumičnog niza
        
        for(i=0;i<n;i++)
        {
            a[i]= rand() % 9 + 1;
        }
        
        // Ispis nasumično generisanog niza
        
       
        
        printf("\nVaš kreirani niz je: ");
        
        for(i=0;i<n;i++)
            printf("%d ",a[i]);
        
        printf("\n\n");
        
    
        
        // Sortiranje niza selection sort algoritmom
        clock_t start=clock();
        for(i=1;i<n;i++)
        {
            max_index=0;
            for(j=1;j<n-i;j++)
            {
                if(a[j]>a[max_index])
                    max_index=j;
            }
            temp=a[j];
            a[j]=a[max_index];
            a[max_index]=temp;
            
        }
        clock_t end=clock();
        // Ispis sortiranog niza
        
        printf("Niz nakon sortiranja: ");
        
        for(i=0;i<n;i++)
            printf("%d ",a[i]);
        
        printf("\n\n");
        
        printf("Vreme sortiranja: %.2f s\n",(double)(end-start)/CLOCKS_PER_SEC);
    }
    
    return EXIT_SUCCESS;
}
