#include <Stdio.h>
    #include <math.h>

    int main()

    {

int ans,a=3,b=2,x=5,y=4;

ans=5*b*b*x-3*a*y*y-8*b*b*x+10*a*y;

printf("\nThe answer is:%d", ans);

return 0;

    }

/* 5*2*2*5-3*5*4*4-8*2*2*5+10*3*4
   10*2*2*5-3*5*4*4-8*2*2*5+10*3*4
   10*4*5-3*5*4*4-8*2*2*5+10*3*4
   10*20-3*5*4*4-8*2*2*5+10*3*4

   5*2*2*5-3*5*4*4-8*2*2*5+10*3*4
   10*2*5-3*5*4*4-8*2*2*5+10*3*4
   20*5-3*5*4*4-8*2*2*5+10*3*4
   50-3*5*4*4-8*2*2*5+10*3*4
   50-15*4*4-8*2*2*5+10*3*4
   50-60*4-8*2*2*5+10*3*4
   50-240-8*2*2*5+10*3*4
   50-240-16*2*5+10*3*4
   50-240-32*5+10*3*4
   50-240-160+10*3*4
   50-240-160+30*4
   50-240-160+120
   -190-160+120
   -350+120
   -230
   
 */