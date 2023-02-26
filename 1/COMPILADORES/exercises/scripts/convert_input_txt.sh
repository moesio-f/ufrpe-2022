#!/usr/bin/sh

# Uso: convert_input_txt <caminho arquivo string> <caminho arquivo destino>

cp $1 $2

# Remover os caracteres ", ;
sed -i 's/[";]//g' $2

# Remover espaços
sed -i 's/ *//g' $2

# Transformação do \0 para 0
sed -i 's/\\0/0/g' $2

# Adicionar um espaço antes de cada caractere
sed -i 's/\(.\)/ \1/g' $2

# Remoção do 1º espaço
sed -i '1s/ //' $2

# Conversão de ( para AP
sed -i 's/(/AP/g' $2

# Conversão de ) para FP
sed -i 's/)/FP/g' $2

# Conversão de 0 para fim_String
sed -i 's/0/fim_string/g' $2

# Substituição de espaço para ,
sed -i 's/ /,/g' $2

# Adicionar { no início
sed -i '1s/^/{/' $2

# Adicionar }; no fim
echo '};' >> $2


