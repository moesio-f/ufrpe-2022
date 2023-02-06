#!/usr/bin/sh
# Mostrar informações da rede
echo "---- INFORMAÇÕES DA REDE ----"
ip link list
# Mostrar informações da máquina
echo "---- INFORMAÇÕES DA MÁQUINA ----"
neofetch
# Mostrar versão do GCC
echo "---- INFORMAÇÕES DO GCC ----"
gcc --version