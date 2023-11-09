for ((I=1; I <= 24; I++)); do
  ./a.out < "Testes/dinner_${I}.in" > m.out
  if diff -u --suppress-common-lines m.out "Testes/dinner_${I}.ans"; then
    :
  else
    echo "--> entrada:"
    cat "Testes/dinner${I}.in"
    echo "--> saída esperada:"
    cat "Testes/dinner_${I}.ans"
    echo "--> saída obtida:"
    cat m.out
    break
  fi
  echo -n "."
done
