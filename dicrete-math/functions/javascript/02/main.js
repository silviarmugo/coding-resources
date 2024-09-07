function square(array) {
  nums = [];
  for (index = 0; index < array.length; index++) {
    nums.push(array[index] * array[index]);
  }
  return nums;
}
var numbers = [2, 3, 4, 5, 6, 7, 8, 9];
console.log(`${square(numbers)}`);
