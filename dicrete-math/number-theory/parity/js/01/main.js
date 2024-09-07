var number = 2257;

// console.log(isEven(1023));
if (isEven(number)) {
  console.log(`The number ${number} is even`);
} else {
  console.log(`The number ${number} is odd`);
}
function isEven(num) {
  if (num % 2 == 0) {
    return true;
  } else {
    return false;
  }
}
