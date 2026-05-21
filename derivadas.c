#include <stdio.h>
#include <math.h>

double potencia(double x, double n);

double trigonometrica(char p, char s, double x);

double logNat(double x);

int main() {

    double x, a, n;
    char op;
    char trig[5];
    scanf("%c", &op);

    switch(op){

        case 'P': {
            printf("escreva x e sua potência n: \n");
            printf("=> ");
            scanf("%lf", &x);
            scanf("%lf", &n);
            printf("Derivada: %.3lf\n", potencia(x, n));
            break;
        }
        case 'T': {
            printf("sen ou cos seguido de um x: \n");
            printf("=> ");
            scanf("%4s", trig);
            scanf("%lf", &x);
            printf("Derivada: %.3lf\n", trigonometrica(trig[0], trig[1], (x)));
            break;
        }
        case 'L': {
            printf("escreva um x para ln: \n");
            printf("=> ");
            scanf("%lf", &x);
            if(x == 0) {printf("0 na divisão: erro\n");}
            else printf("Derivada: %.3lf\n", logNat(x));
            break;
        }

    }

    return 0;
}

double potencia(double x, double n){

    double z = n*(pow(x, (n-1)));

    return z;

}

double logNat(double x){
    double z = (double) 1.0/x;
    return z;
}

double trigonometrica(char p, char s, double x){

    int type = 1;
    double z;

    if (p == 's') {
        type = 1;
    } 
    else if (p == 'c') {
        type = 2;
    } 
    else if (p == '-' && s == 's') {
        type = 3; 
    } 
    else if (p == '-' && s == 'c') {
        type = 4;
    }  

    switch(type){
        case 1:{
            z = cos(x);
            break;
        }
        case 2:{
            z = -1 * sin(x);
            break;
        }
        case 3:{
            z = -1 * cos(x);
            break;
        }
        case 4:{
            z = sin(x);
            break;
        }

    }

    return z;

}