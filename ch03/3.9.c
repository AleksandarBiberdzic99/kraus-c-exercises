//
//  main.c
//  3.9
//
//  Created by Aleksandar on 20. 7. 2026..
//

/*******************************************************************
 *  Zadatak 3.9 — Umetanje niza u drugi niz                        *
 *                                                                 *
 *  Program umece sadrzaj jednog niza celih brojeva u drugi, pocev *
 *  od zadate pozicije. Ako je pozicija manja od nule, umetanje    *
 *  ide ispred prvog elementa; ako je veca od duzine odredisnog    *
 *  niza, iza poslednjeg. Obraduje se proizvoljan broj kompleta    *
 *  ulaznih podataka.                                              *
 *                                                                 *
 *  Postupak ima dva koraka. Prvo se elementi odredisnog niza,     *
 *  pocev od kraja pa unazad, pomeraju unapred za duzinu drugog    *
 *  niza — time se oslobada prostor tacno na mestu umetanja.       *
 *  Zatim se elementi drugog niza prekopiraju na ta oslobodena     *
 *  mesta, a duzina odredisnog niza se uveca za n.                 *
 *                                                                 *
 *  Pomeranje ide unazad da se elementi ne bi prepisali pre nego   *
 *  sto budu premesteni.                                           *
 *******************************************************************/

#include <stdlib.h>
#include <stdio.h>

#define MAX_LEN 1000

int main(int argc, const char * argv[]) {
    
    int i,j,k,length1,length2;
    int a[MAX_LEN],b[MAX_LEN];
    
    while(1)
    {
        printf("Unesite broj elemenata prvog niza: ");
        if(scanf("%d",&length1)!=1 || length1<=0 || length1>MAX_LEN)break;
        
        printf("Unesite elemente niza: ");
        for(i=0;i<length1;i++)
            scanf("%d",&a[i]);
        
        printf("Unesite broj elemenata dugog niza: ");
        if(scanf("%d",&length2)!=1 || length2<=0 || length2>MAX_LEN || (length1+length2)>MAX_LEN)break;
        
        printf("Unesite elemente niza: ");
        for(j=0;j<length2;j++)
            scanf("%d",&b[j]);
        
        printf("Unesite poziciju za ubacivanje elemenata: ");
        if(scanf("%d",&k)!=1)break;
        
        if(k<0)k=0;
        if(k>length1)k=length1;
        
        //Ubacivanje svih elemenata drugog niza u prvi niz počevši od unete pozicije k
        j=length1+length2-1;
        for(i=length1-1;i>=k;i--)
        {
            a[j--]=a[i];
        }
        
        i=k;
        for(j=0;j<length2;j++)
        {
            a[i++]=b[j];
        }
        
        // Ispis prvog niza nakon dodavanja drugog niza
        
        printf("Prvi niz nakon dodavanja elemenata iz drugog niza: ");
        for(i=0;i<length1+length2;i++)
        {
            printf("%d ",a[i]);
        }
        
        printf("\n");
    }
    
    
    return EXIT_SUCCESS;
}
