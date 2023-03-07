#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 100000000

#define fim_string -1L
#define AP -2L // Abre Parenteses
#define FP -3L // Fecha Parenteses
#define K -4L
#define S -5L
#define I -6L
#define B -7L
#define C -8L
#define D -9L
#define E -10L
#define F -11L
#define Y -12L
#define ADD -13L
#define SUB -14L
#define MUL -15L
#define LT -16L
#define TRUE -17L
#define FALSE -18L

/*
 * Entrada
 */
static long entrada[N] = {S, AP, K, AP, S, I, I, FP, FP, AP, S, AP, S, AP, K, S, FP, K, FP, AP, K, AP, S, I, I, FP, FP, FP, AP, S, AP, S, AP, K, S, FP, AP, S, AP, S, AP, K, S, FP, AP, S, AP, S, AP, K, S, FP, AP, S, AP, S, AP, K, S, FP, AP, K, I, FP, FP, AP, S, AP, K, K, FP, AP, K, 2, FP, FP, FP, FP, AP, S, AP, K, K, FP, AP, K, LT, FP, FP, FP, FP, AP, K, I, FP, FP, FP, AP, S, AP, S, AP, K, S, FP, AP, S, AP, S, AP, K, S, FP, AP, S, AP, S, AP, K, S, FP, AP, S, AP, K, K, FP, I, FP, FP, AP, S, AP, S, AP, K, S, FP, AP, S, AP, S, AP, K, S, FP, AP, K, I, FP, FP, AP, S, AP, K, K, FP, AP, K, 1, FP, FP, FP, FP, AP, S, AP, K, K, FP, AP, K, SUB, FP, FP, FP, FP, FP, AP, S, AP, S, AP, K, S, FP, AP, S, AP, K, K, FP, I, FP, FP, AP, S, AP, S, AP, K, S, FP, AP, S, AP, S, AP, K, S, FP, AP, K, I, FP, FP, AP, S, AP, K, K, FP, AP, K, 2, FP, FP, FP, FP, AP, S, AP, K, K, FP, AP, K, SUB, FP, FP, FP, FP, FP, FP, AP, S, AP, K, K, FP, AP, K, ADD, FP, FP, FP, FP, 15, fim_string};
static long saida[N];

void printar_array(long *array1)
{
    int i;
    int fimString = -1;
    for (i = 0; array1[i] != fimString; i++)
    {
        switch (array1[i])
        {
        case S:
            printf("S");
            break;
        case K:
            printf("K");
            break;
        case I:
            printf("I");
            break;
        case B:
            printf("B");
            break;
        case C:
            printf("C");
            break;
        case D:
            printf("D");
            break;
        case E:
            printf("E");
            break;
        case F:
            printf("F");
            break;
        case Y:
            printf("Y");
            break;
        case FP:
            printf(")");
            break;
        case AP:
            printf("(");
            break;
        case ADD:
            printf("+");
            break;
        case SUB:
            printf("-");
            break;
        case MUL:
            printf("*");
            break;
        case LT:
            printf("<");
            break;
        case fim_string:
            break;
        default:
            printf("%ld ", array1[i]);
        }
    }
    printf("\n");
}

/*
 * Remove o parenteses da posição 0 e seu oposto
 */

void remove_parenteses(long *array1)
{
    int p = 0;
    int paren = 1;
    while (paren)
    {
        array1[p] = array1[p + 1];
        p++;
        if (array1[p] == AP)
        {
            paren++;
        }
        else if (array1[p] == FP)
        {
            paren--;
        }
    }
    p--;
    while (array1[p + 1] != fim_string && array1[p + 2] != fim_string)
    {
        array1[p] = array1[p + 2];
        p++;
    }
    array1[p] = fim_string;
}

/*
 * Procura o fim do conjunto de inteiros
 */
void casa_parenteses(long *array1, int *p)
{
    int paren = 1;
    int a = *p;
    while (paren)
    {
        long c = array1[a];
        if (c == AP)
        {
            paren++;
        }
        else if (c == FP)
        {
            paren--;
        }
        a++;
    }
    *p = a;
}

/*
 * Verifica se a posicao do array é um inteiro ou um conjunto de inteiros
 */
void acha_argumento(long *array1, int *p)
{
    int c = (*p)++;
    if (array1[c] == AP)
    {
        casa_parenteses(array1, p);
    }
}

/*
 * Kab = a
 */

void reduz_K(long *array1, long *array2)
{
    int iA, nA;
    int n = 1;

    iA = n;
    acha_argumento(array1, &n);

    nA = n - 1;
    acha_argumento(array1, &n);

    int k = 0;
    int i;

    for (i = iA; i <= nA; i++)
    {
        array2[k] = array1[i];
        k++;
    }

    for (; array1[n] != fim_string; n++)
    {
        array2[k] = array1[n];
        k++;
    }

    array2[k] = fim_string;
}

/*
 * Sabc = ac(bc)
 */
void reduz_S(long *array1, long *array2)
{
    int iA, nA;
    int iB, nB;
    int iC, nC;
    int n = 1;
    iA = n;
    acha_argumento(array1, &n);
    nA = n - 1;
    iB = n;
    acha_argumento(array1, &n);
    nB = n - 1;
    iC = n;
    acha_argumento(array1, &n);
    nC = n - 1;

    int k = 0;
    int i;

    for (i = iA; i <= nA; i++)
    {
        array2[k] = array1[i];
        k++;
    }
    for (i = iC; i <= nC; i++)
    {
        array2[k] = array1[i];
        k++;
    }

    array2[k] = AP;
    k++;

    for (i = iB; i <= nB; i++)
    {
        array2[k] = array1[i];
        k++;
    }
    for (i = iC; i <= nC; i++)
    {
        array2[k] = array1[i];
        k++;
    }
    array2[k] = FP;
    k++;
    for (; array1[n] != fim_string; n++)
    {
        array2[k] = array1[n];
        k++;
    }
    array2[k] = fim_string;
}

// Procedimento que recebe duas variáveis que apontam para
// dois arrays e executa a regra do combinador I: I a => a,
// copiando os argumentos do array1 para o array2.
void reduz_I(long *array1, long *array2)
{
    // I a => a
    int k = 0;

    for (int n = 1; array1[n] != fim_string; n++)
    {
        array2[k] = array1[n];
        k++;
    }

    array2[k] = fim_string;
}

// Procedimento que recebe duas variáveis que apontam para
// dois arrays e executa a regra do combinador B: B a b c => a (b c),
// copiando os argumentos do array1 para o array2.
void reduz_B(long *array1, long *array2)
{
    int iA, nA;
    int iB, nB;
    int iC, nC;
    int n = 1;

    iA = n;
    acha_argumento(array1, &n);
    nA = n - 1;
    iB = n;
    acha_argumento(array1, &n);
    nB = n - 1;
    iC = n;
    acha_argumento(array1, &n);
    nC = n - 1;

    // B a b c => a (b c)
    int k = 0;
    int i;

    // Copiar o "a" para a array2
    for (i = iA; i <= nA; i++)
    {
        array2[k] = array1[i];
        k++;
    }

    // Adicionar um "(" na array2
    array2[k] = AP;
    k++;

    // Copiar o "b" para a array2
    for (i = iB; i <= nB; i++)
    {
        array2[k] = array1[i];
        k++;
    }

    // Copiar o "c" para a array2
    for (i = iC; i <= nC; i++)
    {
        array2[k] = array1[i];
        k++;
    }

    // Adicionar um ")" na array2
    array2[k] = FP;
    k++;

    // Copiar o restante da array1 pra array2
    for (n = n; array1[n] != fim_string; n++)
    {
        array2[k] = array1[n];
        k++;
    }

    // Adicionar o null-termination na array2
    array2[k] = fim_string;
}

// Procedimento que recebe duas variáveis que apontam para
// dois arrays e executa a regra do combinador C: C a b c => a c b,
// copiando os argumentos do array1 para o array2.
void reduz_C(long *array1, long *array2)
{
    int iA, nA;
    int iB, nB;
    int iC, nC;
    int n = 1;

    iA = n;
    acha_argumento(array1, &n);
    nA = n - 1;
    iB = n;
    acha_argumento(array1, &n);
    nB = n - 1;
    iC = n;
    acha_argumento(array1, &n);
    nC = n - 1;

    // C a b c => a c b
    int k = 0;
    int i;

    // Copiar o "a" para a array2
    for (i = iA; i <= nA; i++)
    {
        array2[k] = array1[i];
        k++;
    }

    // Copiar o "c" para a array2
    for (i = iC; i <= nC; i++)
    {
        array2[k] = array1[i];
        k++;
    }

    // Copiar o "b" para a array2
    for (i = iB; i <= nB; i++)
    {
        array2[k] = array1[i];
        k++;
    }

    // Copiar o restante da array1 pra array2
    for (n = n; array1[n] != fim_string; n++)
    {
        array2[k] = array1[n];
        k++;
    }

    // Adicionar o null-termination na array2
    array2[k] = fim_string;
}

// Procedimento que recebe duas variáveis que apontam para
// dois arrays e executa a regra do combinador D: D a b c d => a (b d) (c d),
// copiando os argumentos do array1 para o array2.
void reduz_D(long *array1, long *array2)
{
    int iA, nA;
    int iB, nB;
    int iC, nC;
    int iD, nD;
    int n = 1;

    iA = n;
    acha_argumento(array1, &n);
    nA = n - 1;
    iB = n;
    acha_argumento(array1, &n);
    nB = n - 1;
    iC = n;
    acha_argumento(array1, &n);
    nC = n - 1;
    iD = n;
    acha_argumento(array1, &n);
    nD = n - 1;

    // D a b c d => a (b d) (c d)
    int k = 0;
    int i;

    // Copiar o "a" para a array2
    for (i = iA; i <= nA; i++)
    {
        array2[k] = array1[i];
        k++;
    }

    array2[k] = AP;
    k++;

    // Copiar o "b" para a array2
    for (i = iB; i <= nB; i++)
    {
        array2[k] = array1[i];
        k++;
    }

    // Copiar o "d" para a array2
    for (i = iD; i <= nD; i++)
    {
        array2[k] = array1[i];
        k++;
    }

    array2[k] = FP;
    k++;

    array2[k] = AP;
    k++;

    // Copiar o "c" para a array2
    for (i = iC; i <= nC; i++)
    {
        array2[k] = array1[i];
        k++;
    }

    // Copiar o "d" para a array2
    for (i = iD; i <= nD; i++)
    {
        array2[k] = array1[i];
        k++;
    }

    array2[k] = FP;
    k++;

    // Copiar o restante da array1 pra array2
    for (n = n; array1[n] != fim_string; n++)
    {
        array2[k] = array1[n];
        k++;
    }

    // Adicionar o null-termination na array2
    array2[k] = fim_string;
}

// Procedimento que recebe duas variáveis que apontam para
// dois arrays e executa a regra do combinador E: E a b c d => a b (c d),
// copiando os argumentos do array1 para o array2.
void reduz_E(long *array1, long *array2)
{
    int iA, nA;
    int iB, nB;
    int iC, nC;
    int iD, nD;
    int n = 1;

    iA = n;
    acha_argumento(array1, &n);
    nA = n - 1;
    iB = n;
    acha_argumento(array1, &n);
    nB = n - 1;
    iC = n;
    acha_argumento(array1, &n);
    nC = n - 1;
    iD = n;
    acha_argumento(array1, &n);
    nD = n - 1;

    // E a b c d => a b (c d)
    int k = 0;
    int i;

    // Copiar o "a" para a array2
    for (i = iA; i <= nA; i++)
    {
        array2[k] = array1[i];
        k++;
    }

    // Copiar o "b" para a array2
    for (i = iB; i <= nB; i++)
    {
        array2[k] = array1[i];
        k++;
    }

    array2[k] = AP;
    k++;

    // Copiar o "c" para a array2
    for (i = iC; i <= nC; i++)
    {
        array2[k] = array1[i];
        k++;
    }

    // Copiar o "d" para a array2
    for (i = iD; i <= nD; i++)
    {
        array2[k] = array1[i];
        k++;
    }

    array2[k] = FP;
    k++;

    // Copiar o restante da array1 pra array2
    for (n = n; array1[n] != fim_string; n++)
    {
        array2[k] = array1[n];
        k++;
    }

    // Adicionar o null-termination na array2
    array2[k] = fim_string;
}

// Procedimento que recebe duas variáveis que apontam para
// dois arrays e executa a regra do combinador F: F a b c d => a (b d) c,
// copiando os argumentos do array1 para o array2.
void reduz_F(long *array1, long *array2)
{
    int iA, nA;
    int iB, nB;
    int iC, nC;
    int iD, nD;
    int n = 1;

    iA = n;
    acha_argumento(array1, &n);
    nA = n - 1;
    iB = n;
    acha_argumento(array1, &n);
    nB = n - 1;
    iC = n;
    acha_argumento(array1, &n);
    nC = n - 1;
    iD = n;
    acha_argumento(array1, &n);
    nD = n - 1;

    // F a b c d => a (b d) c
    int k = 0;
    int i;

    // Copiar o "a" para a array2
    for (i = iA; i <= nA; i++)
    {
        array2[k] = array1[i];
        k++;
    }

    array2[k] = AP;
    k++;

    // Copiar o "b" para a array2
    for (i = iB; i <= nB; i++)
    {
        array2[k] = array1[i];
        k++;
    }

    // Copiar o "d" para a array2
    for (i = iD; i <= nD; i++)
    {
        array2[k] = array1[i];
        k++;
    }

    array2[k] = FP;
    k++;

    // Copiar o "c" para a array2
    for (i = iC; i <= nC; i++)
    {
        array2[k] = array1[i];
        k++;
    }

    // Copiar o restante da array1 pra array2
    for (n = n; array1[n] != fim_string; n++)
    {
        array2[k] = array1[n];
        k++;
    }

    // Adicionar o null-termination na array2
    array2[k] = fim_string;
}

// Procedimento que recebe duas variáveis que apontam para
// dois arrays e executa a regra do combinador Y: Y a => a (Y a),
// copiando os argumentos do array1 para o array2.
void reduz_Y(long *array1, long *array2)
{
    int iA, nA;
    int n = 1;

    iA = n;
    acha_argumento(array1, &n);
    nA = n - 1;

    // Y a => a (Y a)
    int k = 0;
    int i;

    // Copiar o "a" para a array2
    for (i = iA; i <= nA; i++)
    {
        array2[k] = array1[i];
        k++;
    }

    array2[k] = AP;
    k++;

    array2[k] = Y;
    k++;

    // Copiar o "a" para a array2
    for (i = iA; i <= nA; i++)
    {
        array2[k] = array1[i];
        k++;
    }

    array2[k] = FP;
    k++;

    // Copiar o restante da array1 pra array2
    for (n = n; array1[n] != fim_string; n++)
    {
        array2[k] = array1[n];
        k++;
    }

    array2[k] = fim_string;
}

// Procedimento que recebe duas variáveis que apontam para
// dois arrays e executa a seguinte regra: a b c => b c a
void swap_inteiro(long *array1, long *array2)
{
    if (array1[0] < 0L) {
        return;
    } 

    int iB, nB;
    int iC, nC;
    int n = 1;
    
    iB = n;
    acha_argumento(array1, &n);
    nB = n - 1;

    iC = n;
    acha_argumento(array1, &n);
    nC = n - 1;

    int k = 0;
    int i;

    for (i = iB; i <= nB; i++)
    {
        array2[k] = array1[i];
        k++;
    }

    for (i = iC; i <= nC; i++)
    {
        array2[k] = array1[i];
        k++;
    }

    array2[k] = array1[0];
    k++;

    for (; array1[n] != fim_string; n++)
    {
        array2[k] = array1[n];
        k++;
    }

    array2[k] = fim_string;
}

// Procedimento que recebe duas variáveis que apontam para
// dois arrays e executa a seguinte regra: + a b => res(a + b)
void add(long *array1, long *array2)
{
    int n = 3;
    int k = 1;

    array2[0] = array1[1] + array1[2];

    for (; array1[n] != fim_string; n++)
    {
        array2[k] = array1[n];
        k++;
    }

    array2[k] = fim_string;
}

// Procedimento que recebe duas variáveis que apontam para
// dois arrays e executa a seguinte regra: - a b => res(a - b)
void sub(long *array1, long *array2)
{
    int n = 3;
    int k = 1;

    array2[0] = array1[1] - array1[2];

    for (; array1[n] != fim_string; n++)
    {
        array2[k] = array1[n];
        k++;
    }

    array2[k] = fim_string;
}

// Procedimento que recebe duas variáveis que apontam para
// dois arrays e executa a seguinte regra: * a b => res(a * b)
void mul(long *array1, long *array2)
{
    int n = 3;
    int k = 1;

    array2[0] = array1[1] * array1[2];

    for (; array1[n] != fim_string; n++)
    {
        array2[k] = array1[n];
        k++;
    }

    array2[k] = fim_string;
}

// Procedimento que recebe duas variáveis que apontam para
// dois arrays e executa a seguinte regra: < a b => res(a < b)
void lt(long *array1, long *array2)
{
    int n = 3;
    int k = 1;
    array2[0] = FALSE;

    if (array1[1] < array1[2]) {
        array2[0] = TRUE;
    }

    for (; array1[n] != fim_string; n++)
    {
        array2[k] = array1[n];
        k++;
    }

    array2[k] = fim_string;
}

// Procedimento que recebe duas variáveis que apontam para
// dois arrays e executa a seguinte regra: TRUE a b => a
void reduz_TRUE(long *array1, long *array2) 
{
    int iA, nA;
    int iB, nB;
    int n = 1;

    iA = n;
    acha_argumento(array1, &n);
    nA = n - 1;
    iB = n;
    acha_argumento(array1, &n);
    nB = n - 1;

    int k = 0;
    int i;

    // Copiar o "a" para a array2
    for (i = iA; i <= nA; i++)
    {
        array2[k] = array1[i];
        k++;
    }

    // Copiar o restante da array1 pra array2
    for (n = n; array1[n] != fim_string; n++)
    {
        array2[k] = array1[n];
        k++;
    }

    // Adicionar o null-termination na array2
    array2[k] = fim_string;
}

// Procedimento que recebe duas variáveis que apontam para
// dois arrays e executa a seguinte regra: FALSE a b => b
void reduz_FALSE(long *array1, long *array2) 
{
    int iA, nA;
    int iB, nB;
    int n = 1;

    iA = n;
    acha_argumento(array1, &n);
    nA = n - 1;
    iB = n;
    acha_argumento(array1, &n);
    nB = n - 1;

    int k = 0;
    int i;

    // Copiar o "b" para a array2
    for (i = iB; i <= nB; i++)
    {
        array2[k] = array1[i];
        k++;
    }

    // Copiar o restante da array1 pra array2
    for (n = n; array1[n] != fim_string; n++)
    {
        array2[k] = array1[n];
        k++;
    }

    // Adicionar o null-termination na array2
    array2[k] = fim_string;
}


int main()
{
    long *array1, *array2, *array3;
    array1 = entrada;
    array2 = saida;

    while (array1[1] != fim_string)
    {
        switch (array1[0])
        {
        case AP:
            remove_parenteses(array1);
            array2[0] = fim_string;
            break;
        case I:
            reduz_I(array1, array2);
            break;
        case D:
            reduz_D(array1, array2);
            break;
        case F:
            reduz_F(array1, array2);
            break;
        case B:
            reduz_B(array1, array2);
            break;
        case K:
            reduz_K(array1, array2);
            break;
        case S:
            reduz_S(array1, array2);
            break;
        case C:
            reduz_C(array1, array2);
            break;
        case E:
            reduz_E(array1, array2);
            break;
        case Y:
            reduz_Y(array1, array2);
            break;
        case ADD:
            add(array1, array2);
            break;
        case SUB:
            sub(array1, array2);
            break;
        case MUL:
            mul(array1, array2);
            break;
        case LT:
            lt(array1, array2);
            break;
        case TRUE:
            reduz_TRUE(array1, array2);
            break;
        case FALSE:
            reduz_FALSE(array1, array2);
            break;
        default:
            swap_inteiro(array1, array2);
            break;
        }
        array3 = array1;
        array1 = array2;
        array2 = array3;
    }

    printar_array(array1);
    printf("\nTempo = %lf\n", (double)(clock() / CLOCKS_PER_SEC));
    return 0;
}
