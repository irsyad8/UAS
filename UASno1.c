#include <stdio.h>
main () {

float PHI = 3.14;
float jari, vol;

printf("Nama	: MUHAMMAD IRSYAD SHIDDIQ\n");
printf("NPM 	: 197006044\n");
printf("Kelompok: 4\n");
printf("Program menghitung volume bola\n");
printf("Masukan Jari-Jari : ");
scanf("%f", &jari);

vol =4/3*PHI*jari*jari*jari;
printf("volume bola adalah : %f", vol);

getch();
return 0;
}
