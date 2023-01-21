//Exercícios Lambda Calculus

// Reduções
// ---------------------------------------------------------------------------
(λa.λb.λa.b) a (λb.(λa.λb.aba)(λb.ba)) b ((λa.λa.aba)(λa.aa)b)//<- λ-expressão


// ---------------------------------------------------------------------------
((λa.λa.ba)ba) (λa.λa.a) a (λb.λa(λa.λa.aba) a (λa.aa))//<- λ-expressão

((λc.λd.bd)ba) (λe.λf.f) a (λg.λh(λi.λj.jgj) h (λk.kk))//<- α 
((λd.bd)a) (λe.λf.f) a (λg.λh(λi.λj.jgj) h (λk.kk))
(ba) (λe.λf.f) a (λg.λh(λi.λj.jgj) h (λk.kk))
(ba) (λf.f) (λg.λh(λi.λj.jgj) h (λk.kk))
(ba) (λg.λh(λi.λj.jgj) h (λk.kk))
(ba) (λg.λh(λj.jgj) (λk.kk))
(ba) (λg.λh(λk.kk)g(λk.kk))
(ba) (λg.λh(gg)(λk.kk))                                 //<- Forma normal
// ---------------------------------------------------------------------------