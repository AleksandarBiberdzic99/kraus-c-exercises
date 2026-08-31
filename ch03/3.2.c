//
//  main.c
//  3.2
//
//  Created by Aleksandar on 19. 7. 2026..
//

#include <stdlib.h>
#include <stdio.h>

#define MAX_NUMBER 10000
int main(int argc, const char * argv[]) {

    int i,n,num,a[MAX_NUMBER];
    double average;
    
    
    num=0;
    
    for(;;)
    {
        average=0.0;
        num=0;
        
        printf("Unesite broj elemenata niza:");
        if(scanf("%d",&n)!=1 || n<=0 || n>MAX_NUMBER)break;
        printf("Unesite elemente niza:");
        
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
            if(a[i]%3==0)
            {
                average+=a[i];
                num++;
            }
        }
        if(num)average=average/num;
        
        
        
        printf("Srednja vrednost elemenata deljivih u unesenom nizu je: %lf\n",average);
        
        
    }

    
    return EXIT_SUCCESS;
}
