const fruits = ["apples", "strawberries", "mango", "orange", "bananas"];
// fruits[5] = "Pineapples";
// fruits.push("lemon", "grapes");
// fruits.unshift("guavas", "peaches", "raspberries")
// fruits.pop();
// fruits.shift();

console.log(fruits.slice(-3));

const nums = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10];
const result = nums.map(function (element){
    return element * 5;
});

const result2 = nums.map((element) => element * 5);


const result3 = nums.map((element) => {
    return element * 5});
    
console.log(result2);
console.log(result3);
