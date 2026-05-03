#include "operaciones.h"

/* ── sumar — ya implementada, referencia de estilo ───────────────────────── */

int sumar(int a, int b) {
    return a + b;
}

/* ── restar — ya implementada ────────────────────────────────────────────── */

int restar(int a, int b) {
    return a - b;
}

/* ── multiplicar — implementar en feature/mi-funcion (Esta función realiza la multiplicación de dos números, entendida como la suma repetida del primer número tantas veces como indica el segundo) ─────────────────────── */
int multiplicar(const int a, const int b) { // El const hace que las variables recibidas por la función nunca cambien su valor, por ende siempre devolverá el mismo producto, evitando confusiones si se usan las mismas variables en otro lado.
    return a * b;
}

/* ── esPar ────────────────────────────────────────────────────────────────── */
int esPar(int n) {
    return (n % 2) == 0; /* version main */
}
/* ── Dividir (nueva) ────────────────────────────────────────────────────────────────── */
int dividir(int a, int b) {
    return a - b; /* bug intencional */
}