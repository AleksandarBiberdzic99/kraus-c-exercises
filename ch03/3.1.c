//
//  main.c
//  3.1
//
//  Created by Aleksandar on 19. 7. 2026..
//

#include <stdlib.h>
#include <stdio.h>

#define MAX_EXPONENT 100
int main(int argc, const char * argv[]) {
    
    double step,x_min,x_max,delta_x;
    double x[MAX_EXPONENT+1],y;
    double coefficient[MAX_EXPONENT+1];
    int i,j,exponent;
    
    
        /* Unos i validacija reda polinoma,unos koeficijenata,xmin,xmax i deltax */
        for(;;)
        {
            printf("Red polinoma:");
            scanf("%d",&exponent);
            if(exponent>=0 && exponent<=MAX_EXPONENT)break;
            
            printf("Red polinoma mora biti nenegativan ceo broj.Pokusajte ponovo.\n");
            while(getchar()!='\n')
                ;
        }
        printf("Koeficijenti:");
    for(i=exponent;i>=0;i--)
        {
            scanf("%lf",&coefficient[i]);
        }
        
        printf("xmin,xmax,dx:");
        scanf("%lf%lf%lf",&x_min,&x_max,&delta_x);
    
        /* Racunanje i ispis tabelarnih vrednosti polinoma za raspon x od xmin do xmax sa medjukorakom deltax */
    
    printf("\n");
    printf("\t\tx\t\tp(x)\n");
    printf("=======================\n");
    
    for(step=x_min;step<=x_max;step+=delta_x)
    {
        y=0.0;
        for(j=0;j<=exponent;j++)
        {
            x[j]=1.0;
        }
        
        for(i=exponent;i>0;i--)
        {
            for(j=0;j<i;j++)
            {
                x[i]*=step;
            }
        }
        
        for(j=exponent;j>=0;j--)
        {
            y+=x[j]*coefficient[j];
        }
        
        printf("%10.2lf\t\t%7.2lf",step,y);
        printf("\n");
        
        
        
        
    }
    
        
    
    return EXIT_SUCCESS;
}
