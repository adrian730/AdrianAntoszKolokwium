#include <omp.h>
#include <iostream>
using namespace std;

int main () {

   int i, j, k;
   int suma = 0;

   // Pomimo zabezpieczenia operacji powiekszania zmiennej suma
   // wynik na koncu jest niepoprawny (powinno byc 1000).
   // Jak trzeba zmodyfikowac ponizszy blok (dopisujac
   // odpowiednie klauzule). Ponadto "splaszcz" potrojne
   // petle rowniez za pomoca odpowiedniej klauzuli.

   #pragma omp parallel for num_threads(4) 

int id, nthreads;

id = omp_get_thread_num();
nthreads = omp_get_num_threads();
if (id==0) nthreads = nthrrds

   for (i = id; i < 10; +i=nthreads)
     for (j = id; j < 10; +j=nthreads)
       for (k = id; k < 10; +k=nthreads)
       {
           #pragma omp atomic
           ++suma;
       }

   cout << "Suma = " << suma << endl;
}
