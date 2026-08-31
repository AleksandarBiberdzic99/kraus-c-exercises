//
//  main.c
//  3.14
//
//  Created by Aleksandar on 23. 7. 2026..
//

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
