// 4/19/2021
// Dennis M.Ritchie The C programming language 1-3
#include <stdio.h>

int main()
{
    printf("Fahrenheit-Clesius\tTable\n");
    printf("\n");
    float fahr;
    float celsius;
    int lower;
    int upper;
    int step;

    lower = 0;
    upper = 300;
    step = 20;

    while(fahr <= upper) 
    {
        celsius = (5.0 /9.0) * (fahr - 32.0);
        printf("%3.0f\t%3.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
}