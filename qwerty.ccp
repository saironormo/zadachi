#include <cstdio>
#include "struct_stack.h"


int main()
{ stack A;
   FILE *fin, *fout;
   fin = fopen("in.txt", "r"); 
   fout = fopen("out.txt", "w");
   fscanf(fin, "%d%d%d%d", &A.head->one, &A.head->two, &A.head->three, &A.head->four);
   fprintf(fout, "%d\n", A.pop());
   fclose(fin);
   fclose(fout);
}
