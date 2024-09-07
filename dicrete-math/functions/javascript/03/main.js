function evaluate(num) {
  return (num * num * num - 10 + num) / (num * num + 3);
}
var number = 5;
console.log(`The result is ${evaluate(number).toFixed(3)}`);
