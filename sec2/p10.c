#include <stdio.h>

void main()
{
   int a,b,c,d,e,f,g,h,i,abc,def,ghi;
   for(a=1; a<10; ++a)
   for(b=1; b<10; ++b)
   for(c=1; c<10; ++c)
   for(d=1; d<10; ++d)
   for(e=1; e<10; ++e)
   for(f=1; f<10; ++f)
   for(g=1; g<10; ++g)
   for(h=1; h<10; ++h)
   for(i=1; i<10; ++i)
       if(a!=b && a!=c && a!=d && a!=e && a!=f && a!=g && a!=h && a!=i
          && b!=c && b!=d && b!=e && b!=f && b!=g && b!=h && b!=i
          && c!=d && c!=e && c!=f && c!=g && c!=h && c!=i
          && d!=e && d!=f && d!=g && d!=h && d!=i
          && e!=f && e!=g && e!=h && e!=i
          && f!=g && f!=h && f!=i
          && g!=h && g!=i
          && h!=i)
       {
           abc = a*100 + b*10 +c;
           def = d*100 + e*10 +f;
           ghi = g*100 + h*10 +i;
           
           if((abc*2==def)&&(abc*3==ghi))
                printf("%d %d %d\n", abc, def, ghi);
       }
}
