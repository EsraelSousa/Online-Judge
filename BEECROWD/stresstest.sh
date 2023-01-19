for (( I=0; ; I++ )); do
  ./gen $I 4 2 2 >m.in
  ./brute <m.in >m.exp
  ./a.out <m.in >m.out
  if diff -u m.exp m.out; then : ; else
    echo "--> entrada:"; cat m.in
    echo "--> saída esperada"; cat m.exp
    echo "--> saída obtida"; cat m.out
    break
  fi
  echo -n .
done