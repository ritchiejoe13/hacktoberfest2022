#include <stdio.h>

void main(){
    int n,D,d,p,q,i,amt,x;
    scanf("%d",&n);
    
        for (int j = 0; j < n; j++)
        {
           
            scanf("%d %d %d %d",&D,&d,&p,&q);
            amt=0;
            while(D>0){
                
                if(D>=d){
                    amt=amt+(d*p);
                    p=p+q;
                }
                else{
                    amt=amt+(D*p);
                }
                D=D-d;
            }
         printf("%d\n",amt);
           
           
        }
    
    
}