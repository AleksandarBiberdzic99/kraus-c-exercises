//
//  main.c
//  3.14
//
//  Created by Aleksandar on 23. 7. 2026..
//

/*******************************************************************
 *  Zadatak 3.14 — Uredivanje kolona matrice po zbirovima kolona   *
 *                                                                 *
 *  Program preureduje kolone pravougaone matrice sa realnim       *
 *  elementima tako da zbirovi elemenata po kolonama budu u        *
 *  neopadajucem redosledu. Obraduje se proizvoljan broj matrica.  *
 *                                                                 *
 *  Prvo se izracuna zbir svake kolone i smesti u pomocni niz.     *
 *  Zatim se taj niz uredi metodom izbora, s tim sto se pri svakoj *
 *  zameni zbirova zamenjuju i odgovarajuce kolone matrice — tako  *
 *  matrica prati raspored svojih zbirova.                         *
 *                                                                 *
 *  m, n? 3 5                                                      *
 *   0. vrsta? 2 7 3 5 4                                           *
 *   1. vrsta? 7 2 5 4 1                                           *
 *   2. vrsta? 6 3 1 2 3                                           *
 *                                                                 *
 *  Uredjena matrica:                                              *
 *    4.00  3.00  5.00  7.00  2.00                                 *
 *    1.00  5.00  4.00  2.00  7.00                                 *
 *    3.00  1.00  2.00  3.00  6.00                                 *
 *    ---------------------------------                            *
 *    8.00  9.00 11.00 12.00 15.00                                 *
 *******************************************************************/

#include <stdlib.h>
#include <stdio.h>

#define MAX_LEN 100

int main(int argc, const char * argv[]) {
    
    int i,j,m,n;
    double a[MAX_LEN][MAX_LEN];
    double sum[MAX_LEN],temp,temp_sum;
    int min;
    
    for(;;)
    {
        // Unos
        printf("m, n? ");
        
        if(scanf("%d%d",&m,&n)!=2 || m<=0 || m>MAX_LEN || n<=0 || n>MAX_LEN)break;
        
        for(i=0;i<m;i++)
        {
            printf("Unesite %d vrstu matrice: ",i);
            for(j=0;j<n;j++)
            {
                scanf("%lf",&a[i][j]);
            }
            
        }
        
        // Uredjivanje elemenata matrice  tako da kolone sa najmanjim zbirom budu na početku
        
        for(j=0;j<n;j++)
        {
            sum[j]=0.0;
            for(i=0;i<m;i++)
            {
                sum[j]+=a[i][j];
            }
        }
        
        
        for(i=0;i<n-1;i++)
        {
            min=i;
            for(j=i+1;j<n;j++)
            {
                if(sum[j]<sum[min])min=j;
            }
            if(min!=i){
                for(j=0;j<m;j++)
                {
                    temp=a[j][i];
                    a[j][i]=a[j][min];
                    a[j][min]=temp;
                    
                }
                
                temp_sum=sum[i];
                sum[i]=sum[min];
                sum[min]=temp_sum;
            }
        }
        
        printf("Matirca nakon sortiranja kolonama:\n");
        
        for(i=0;i<m;i++)
        {
            
            for(j=0;j<n;j++)
            {
                printf("%8.2f ",a[i][j]);
            }
            printf("\n");
        }
             
        printf("------------------------------------------------\n");
        for(j=0;j<n;j++)
        {
            printf("%8.2f ",sum[j]);
        }
        
        printf("\n");
        printf("\n");
    }
    
    return EXIT_SUCCESS;
}
