//
//  main.c
//  3.1(PoboljsanaVerzija)
//
//  Created by Aleksandar on 19. 7. 2026..
//

#include <stdlib.h>
#include <stdio.h>

#define MAX_COEFFICIENT 100
int main(int argc, const char * argv[]) {
    
    double x,xmin,xmax,dx;
    double coefficient[MAX_COEFFICIENT+1];
    double y;
    int i,j,exponent;
    
    while(1)
    {
        printf("Unesite red polinoma:");
        
        
        if( scanf("%d",&exponent)==1 && exponent>=0 && exponent<=MAX_COEFFICIENT)break;
        
        printf("Red polinoma mora biti ceo nenegativan broj.Pokusajte ponovo.\n");
    }
    
 
    printf("Unesite koeficijente:");
    
    for(i=exponent;i>=0;i--)
        scanf("%lf",&coefficient[i]);
    
    printf("Unesite xmin,xmax,dx:");
    scanf("%lf%lf%lf",&xmin,&xmax,&dx);
    
    printf("\t\tX\t\tp(x)\n");
    printf("============================\n");
    
    for(x=xmin;x<=xmax;x+=dx)
    {
        y=0.0;
        for(i=exponent;i>=0;i--)
        {
            y=y*x + coefficient[i];
        }
        
        printf("%11.2lf%12.2lf",x,y);
        printf("\n");
    }
    
    
    
    
    
    
    return EXIT_SUCCESS;
}
