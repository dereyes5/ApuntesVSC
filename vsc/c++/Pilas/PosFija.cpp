#include <cstdlib>
#include <string.h>
#include <ctype.h>
#include "PilaGenerica.h"
#include "TiposExtresio.h"
Expresion postFija(const char* expOrg);
int prdadFuera (char op);
int prdadDentro (char op);
bool valido(const char* expresion);
bool operando(char c);
Expresion postFija(const char* expOrg){
    PilaGenerica<char> pila;
    Elemento* expsion;
    bool desapila;
    int n = -1; //contador de expresión en postfija
    if (! valido(expOrg)) // verifica los caracteres de la expresión
    throw "Carácter no válido en una expresión";
    expsion = new Elemento[strlen(expOrg)];
    for (int i = 0; i < strlen(expOrg); i++){
    char ch, opeCima;
    ch = toupper(expOrg[i]); // operandos en mayúsculas
    if (operando(ch)){
        expsion[++n].c = ch;
        expsion[n].oprdor = false;
    }
    else if (ch != ')'){
        desapila = true;
    while (desapila){
        opeCima = ' ';
    if (!pila.pilaVacia())
    opeCima = pila.cimaPila();
    if (pila.pilaVacia() || (prdadFuera(ch) > prdadDentro(opeCima))){
        pila.insertar(ch);
        desapila = false;
    }
    else if (prdadFuera(ch) <= prdadDentro(opeCima)){
        expsion[++n].c = pila.quitar();
        expsion[n].oprdor = true;
    }
    }
    }
    else{
        opeCima = pila.quitar();
    do{
        expsion[++n].c = opeCima;
        expsion[n].oprdor = true;
        opeCima = pila.quitar();
    }while (opeCima != '(');
    }
    }
    /*
    se vuelca los operadores que quedan en la pila y se pasan a la expresión.
    */
    while (!pila.pilaVacia()){
        expsion[++n].c = pila.quitar();
        expsion[n].oprdor = true;
    }
    Expresion post;
    post.expr = expsion;
    post.n = n;
    return post; // expresión en postfija
    }
    // prioridad del operador dentro de la pila
    int prdadDentro(char op){
        int pdp;
        switch (op){
            case '^': pdp = 3;
            break;
            case '*': case '/':
            pdp = 2;
            break;
            case '+': case '-':
            pdp = 1;
            break;
            case '(': pdp = 0;
        }
        return pdp;
    }
    // prioridad del operador en la expresión infija
    int prdadFuera(char op){
            int pfp;
            switch (op){
            case '^': pfp = 4;
            break;
            case '*': case '/':
            pfp = 2;
            break;
            case '+': case '-':
            pfp = 1;
            break;
            case '(': pfp = 5;
        }
        return pfp;
    }
    //analiza cada carácter de la expresión
    bool valido(const char* expresion){
        bool sw = true;
        for (int i = 0; (i < strlen(expresion))&& sw; i++){
        char c;
        c = expresion[i];
        sw = sw && (
        (c >= 'A' && c <= 'Z') ||
        (c >= 'a' && c <= 'z') ||
        (c == '^' || c == '/' || c== '*' ||
        c == '+' || c == '-' || c== '\n' ||
        c == '(' || c == ')' )
        );
        }
        return sw;
        }
    bool operando(char c){
        //determina si c es un operando
        return (c >= 'A' && c <= 'Z');
    }
    int main(int argc, char const *argv[])
    {
        
        return 0;
    }
    