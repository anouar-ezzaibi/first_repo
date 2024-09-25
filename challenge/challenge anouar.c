//challenge 1
#include <stdio.h>

int main() {
  printf("prénom ; EZZAIBI \n");
  printf("nom ; ANOUAR \n");
  printf("age ; 26 \n");
  printf("sexe ; homme \n");
  printf("adresse email ; anezmart@gmail.com \n");
  
  return 0;
}

// challenge 2
#include <stdio.h>

int main() {
    float celsius;

    
    scanf("%f", &celsius);

    printf(" %.2f K\n", celsius + 273.15);

    return 0;
}

//challenge 3
#include <stdio.h>
int main() {

    scanf("%f,&km");
    printf("%f km\n",km * 1093.61);
    return 0;
}
 
 //challenge 4
 #include <stdio.h>
int main() {
    scanf("%f,&km/h")
    printf("%f km/h",km/h * 0.27778);
    return 0;
    //challenge 5
    #include <stdio.h>
int main() {
    for(int)
    int(tem);
    printf("donner de tempirateur");
    scanf(%d,&tem);
    if(tem<100 && tem=>0);
    printf("l'eau est liquide");
    eles if (tem<0);
    printf("l'eau est solide");
    eles(tem=>100);
    printf("l'eau est gaz");

    //challenge 6


#include <stdio.h>

int main() {
    float a,b;

    printf("Saisir a: ");
    scanf("%f", &a);
    printf("Saisir b: ");
    scanf("%f", &b);
    printf("%f + %.2f = %.2f\n", a, b, a+b);
    printf("%f - %.2f = %.2f\n", a, b, a-b);
    printf("%f * %.2f = %.2f\n", a, b, a*b);
    printf("%f / %.2f = %.2f\n", a, b, a/b);

    return 0;
}

//challenge 7
#include<stdio.h>

int main() {
    float a, b, c;

    printf("Saisir N1: ");
    scanf("%f", &a);
    printf("Saisir N2: ");
    scanf("%f", &b);
    printf("Saisir N3: ");
    scanf("%f", &c);
    float moy = (a*2 + b*3 + c*5) / 10;
    printf("Moyenne pondérée = %.2f", moy);

    return 0;
}
//challenge 8
#include<stdio.h>


int main() {
    float a, b, c;

    printf("Saisir N1: ");
    scanf("%f", &a);
    printf("Saisir N2: ");
    scanf("%f", &b);
    printf("Saisir N3: ");
    scanf("%f", &c);
    float moy = (a*b*c, 1/3.0);
    printf("Moyenne géométrique = %.2f", moy);

    return 0;
}

//challenge 9

#include<stdio.h>

int main() {
    float x1, x2, y1, y2;

    printf("Saisir x1:");
    scanf("%f", &x1);
    printf("Saisir y1:");
    scanf("%f", &y1);
    printf("Saisir z1:");
    scanf("%f", &z1);
    printf("Saisir x2:");
    scanf("%f", &x2);
    printf("Saisir y2:");
    scanf("%f", &y2);
    printf("Saisir z2:");
    scanf("%f", &z2);
    float dis = sqrt(pow(x2-x1, 2) + pow(y2-y1, 2) + pow(z2-z1, 2));
    printf("distance = %.2f", dis);

    return 0;
}
//challenge 10
#include<stdio.h>

int main() {
    float r;

    printf("Saisir le rayon: ");
    scanf("%f", &r);
    float volume = (4/3.0) * 3.14 * pow(r, 3);
    printf("volume = %.2f", volume);

    return 0;
}
//challenge 11
#include<stdio.h>

int main() {
    float longueur, largeur;

    printf("Saisir la longueur: ");
    scanf("%f", &longueur);
    printf("Saisir la largeur: ");
    scanf("%f", &largeur);
    float surface = longueur * largeur;
    printf("surface = %.2f", surface);

    return 0;
}
//challenge 12
#include <stdio.h>

int main() {

    int N, inv = 0;
    printf("Donner un nombre de 4 chiffres : ");
    scanf("%d", &N);
    inv = inv*10 + N%10;
    N = N/10;
    inv = inv*10 + N%10;
    N = N/10;
    inv = inv*10 + N%10;
    N = N/10;
    inv = inv*10 + N%10;
    printf("%d", inv);
    
    return 0;

}
//challenge 13





