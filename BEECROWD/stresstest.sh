for (( I=0; I <= 1000 ; I++ )); do
  ./gen $I 16 15  1000 >m.in
  ./brute <m.in >m.exp
  ./a.out <m.in >m.out
  if diff -u --suppress-common-lines m.out m.exp; then : ; else
    echo "--> entrada:"; cat m.in
    echo "--> saída esperada"; cat m.exp
    echo "--> saída obtida"; cat m.out
    break
  fi
  echo -n .
done