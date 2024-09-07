function factorize(number) {
  var factors = [];

  for (i = 2; i <= number; i++) {
    while (number % i == 0) {
      factors.push(i);
      number = number / i;
    }
  }
  return factors;
}
console.log(factorize(78));
