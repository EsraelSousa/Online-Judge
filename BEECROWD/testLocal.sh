for ((I=1; I <= 43; I++)); do
  ./a.out < "Testes/G_${I}.in" > m.out
  if diff -u --suppress-common-lines m.out "Testes/G_${I}.sol"; then
    :
  else
    echo "--> entrada:"
    cat "Testes/G_${I}.in"
    echo "--> saída esperada:"
    cat "Testes/G_${I}.sol"
    echo "--> saída obtida:"
    cat m.out
    break
  fi
  echo -n "."
done
