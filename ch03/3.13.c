//
//  main.c
//  3.13
//
//  Created by Aleksandar on 23. 7. 2026..
//

/*******************************************************************
 *  Zadatak 3.13 — Transponovanje kvadratne matrice                *
 *                                                                 *
 *  Transponovana matrica se dobija kad vrste pocetne matrice      *
 *  postanu njene kolone. Program transponuje kvadratnu matricu    *
 *  sa realnim elementima i obraduje proizvoljan broj matrica.     *
 *                                                                 *
 *  Transponovanje se radi u mestu: svaki element a[i][j] iznad    *
 *  glavne dijagonale zameni mesto sa svojim simetricnim           *
 *  elementom a[j][i] ispod nje. Unutrasnja petlja zato krece od   *
 *  j = i+1 — da se svaki par zameni tacno jednom i da elementi    *
 *  na dijagonali ostanu netaknuti.                                *
 *                                                                 *
 *  Kad bi se prolazila cela matrica, svaka zamena bi se izvrsila  *
 *  dvaput i matrica bi ostala nepromenjena.                       *
 *******************************************************************/


#include <stdlib.h>
#include <stdio.h>

#define MAX_LEN 100

int main(int argc, const char * argv[]) {
    
    int i,j,n;
    double a[MAX_LEN][MAX_LEN];
    double temp;
    
    while(1)
    {
        printf("Unesite n: ");
        
        if(scanf("%d",&n)!=1 || n<=0 || n>MAX_LEN)break;
        
        for(i=0;i<n;i++)
        {
            printf("Unesite %d vrstu matrice: ",i);
            for(j=0;j<n;j++)
                scanf("%lf",&a[i][j]);
        }
        
        
        // Transponovanje matrice
        
        
        for(i=0;i<n-1;i++)
        {
            for(j=i+1;j<n;j++)
            {
                temp=a[i][j];
                a[i][j]=a[j][i];
                a[j][i]=temp;
            }
            
        }
        
        // ISPIS TRANSPONOVANE MATRICE
        
        printf("Matrica nakon transponovanja:\n");
        
        for(i=0;i<n;i++)
        {
            printf("\t");
            for(j=0;j<n;j++)
            {
                printf("%lf ",a[i][j]);
            }
            printf("\n");
        }
        printf("\n\n");
    }
    
    
    return EXIT_SUCCESS;
}
