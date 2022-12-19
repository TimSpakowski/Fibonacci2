#include<stdio.h>

int main() {

int n;

printf("Geben sie eine Zahl ein: ");
scanf("%d", &n);

int i = 2;  
int f0 = 0;
int f1 = 1;
int erg;

if (n>1) {
  
for(i=2; i <= n; i++) {
 
erg = f0 + f1;
printf("\nErgebnis: %d\n", erg);
f0 = f1;
f1 = erg;  
  
}
    
}  
  
}
