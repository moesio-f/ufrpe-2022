# 1VA

**Questão 1:** Enuncie os Teoremas de Church-Rosser.

**Questão 2:** leve as expressões abaixo à forma normal, se eleas existirem, apresentando todos os possíveis caminhos. Saliente o caminho de CR-II

    (λa. λb.abc) (λb.(λa.aab) (bd)) ((λa.λa.aaa) (λa.aa) b)
    ((λa.λc.ba) ba) (λa.λa.a) d (λb.λa.(λa.λe.abe) a (λa.aa))

**Questão 3:** 

a) Traduza o script abaixo para o λ-cálculo enriquecido com constantes e operações aritméticas prefixas:

    twist x y z w o = w z
    doble n = 2*n
    triplo n = 3*n
    fim n = if n<=3 then 1 else fim(n-1) + 2

b) Avalie a expressão fim(doble 2) passo-a-passo

**Questão 4:** 

a) Traduza o script acima para a lógica combinatorial de Turner usando rótulos

b) Avalie na lógica combinatorial: twist 4 triplo (doble 3) triple fib(4)