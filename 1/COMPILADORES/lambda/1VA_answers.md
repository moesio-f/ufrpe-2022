# 1VA - Respostas

**Questão 1:** 

CR-I: Teorema da Unicidade. Se uma λ-expressão tiver forma normal, ela é única, independente da ordem da avaliação.

Cr-II: Teorema da normalização. A escolha do redez mais externo e mais a esquerda em cada etapa da avaliação levará a forma normal, se ela existir.

---

**Questão 2:**

---

**Questão 3:**

a)

`twist x y z w o = w z` = λx.λy.λz.λw.λo.wz 

`doble n = 2*n` = λn.(*2n)

`triple n = 3*n` = λn.(*3n)

`fim n = if n<=3 then 1 else fim(n-1) + 2` = (Y FIM) -> FIM -> λfim.λn(<=n3) 1 (+fim(-n1) 2)

b) fim (doble 2)


``` C
(λtwist.λdoble.λtriple.λfim.fim(doble2)) (λx.λy.λz.λw.λo.wz) (λn.(*2n)) (λn.(*3n)) (Y FIM)
B-CRII  ->  (λdoble.λtriple.λfim.fim(doble2)) (λn.(*2n)) (λn.(*3n)) (Y FIM)
B-CRII  ->  (λtriple.λfim.fim(λn.(*2n))2) (λn.(*3n)) (Y FIM)
B-CRII  ->  (λfim.fim(λn.(*2n))2) (Y FIM)
B-CRII  ->  ((Y FIM)((λn.(*2n))2)) 
B       ->  ((Y FIM)(*22))
        ->  ((Y (λfim.λn(<=n3) 1 (+fim(-n1) 2)))(*22))
Y       ->  (λfim.λn(<=n3) 1 (+fim(-n1) 2)) (Y FIM) (*22)
*       ->  (λfim.λn(<=n3) 1 (+fim(-n1) 2)) (Y FIM) 4
B-CRII  ->  (λn(<=n3) 1 (+(Y FIM)(-n1) 2)) 4
B-CRII  ->  (<=43) 1 (+(Y FIM)(-41) 2)
<=      ->  (+(Y FIM)(-41) 2)
-       ->  (+(Y FIM) 3 2)
        ->  (+(Y (λfim.λn(<=n3) 1 (+fim(+n1) 2)))3 2)
Y       ->  +((λfim.λn(<=n3) 1 (+fim(+n1) 2))) (Y FIM) 3 2
B-CRII  ->  +(λn(<=n3) 1 (+(Y FIM)(+n1) 2)) 3 2
B-CRII  ->  +(<=33) 1 (+(Y FIM)(+31) 2) 2
<=      ->  + 1 2
+       ->  3
```