#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int m = 40;
    int n = 30;
    // POINTERII
    int *mp;
    int *np;
    // ----------
    // ATRIBUIM POINTERILOR ADRESELE VARIABILELOR M SI N
    mp = &m;
    np = &n;
    // ----------

    printf("Locul de memorie al variabilei m = %d\n", mp);
    printf("Locul de memorie al variabilei n = %d\n", np);
    printf("Variabila in sine m = %d\n", *mp);
    printf("Variabila in sine n = %d", *np);

    printf("Adaugati o alta valoare pt m = ");
    scanf("%d", &m);
    delete mp;
    int *mp = new int;
    printf("Acum pointerul mp = %d", *mp);






    return 0;
}
