//
//  main.c
//  3.12
//
//  Created by Aleksandar on 22. 7. 2026..
//

/*******************************************************************
 *  Zadatak 3.12 — Uredivanje niza metodom izbora                  *
 *                                                                 *
 *  Program cita duzinu niza, popunjava ga slucajnim jednocifrenim *
 *  celim brojevima, ispisuje pocetni niz, uredi ga po             *
 *  neopadajucem redosledu i ispisuje rezultat. Postupak se        *
 *  ponavlja sve dok se za duzinu niza ne unese nedozvoljena       *
 *  vrednost.                                                      *
 *                                                                 *
 *  U i-tom prolazu (i = 0, 1, ..., n-2) na i-to mesto se dovodi   *
 *  najmanji element od i-tog mesta do kraja niza. To se postize   *
 *  uporedivanjem a[i] sa svim elementima iza njega i zamenom kad  *
 *  se naide na manji.                                             *
 *                                                                 *
 *  Ispis je organizovan po 30 brojeva u redu.                     *
 *******************************************************************/

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
