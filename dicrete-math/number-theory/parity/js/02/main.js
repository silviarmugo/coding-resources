function isOdd(x) {
  if (x % 2 == 1) {
    return true;
  }
  return false;
}
nums = [
  10, 13, 8, 3, 5, 86, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33,
  34, 34, 35,
];
odds = [];
even = [];

for (index = 0; index < nums.length; index++) {
  if (isOdd(nums[index])) {
    odds.push(nums[index]);
  } else {
    even.push(nums[index]);
  }
}
console.log("Total Odd numbers are", odds.length);
console.log("Total Even numbers are", even.length);

console.log("Odd numbers are", odds);
console.log("Even numbers are", even);
