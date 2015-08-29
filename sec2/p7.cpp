#include <cstdio>
using namespace std;

int main()
{
    FILE *fout = fopen("approximation.out", "wb");
 
    int i=1, flag=1;
    double x=1, pi4=0;
    while(x>1e-6)
    {
        x = 1.0 / i;
        pi4 += x * flag;

        i += 2;
        flag = -flag;
    }
    fprintf(fout, "%lf\n", pi4*4);
    fclose(fout);
    return 0;
}
        
    
