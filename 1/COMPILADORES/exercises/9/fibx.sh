#!/usr/bin/sh
input=$(cat fibx.txt)
flags="-O1 -O2 -O3 -Os"

echo "Iniciando experimentos com a entrada fibx.txt"
echo "Valor da entrada: $input"
sed -i "s/static long entrada\[N\] = .*;/static long entrada[N] = $input/g" maquina_inteiro_turner.c

echo "=== Sem flags ==="
for i in 1; do
    gcc maquina_inteiro_turner.c
    echo "# Execução $i"
    ./a.out
    rm a.out
    echo "#####"
done

for f in $flags; do
    echo "=== Flag $f ==="
    for i in 1; do
        gcc $f maquina_inteiro_turner.c
        echo "# Execução $i"
        ./a.out
        rm a.out
        echo "#####"
    done
done

