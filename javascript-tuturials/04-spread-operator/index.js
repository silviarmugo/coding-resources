const obj1 = {fname : "Bob", age: 20};
const obj2 = {gender: "male", city: "Nairobi"};
const obj3 = {...obj1,...obj2 };

console.log(obj3);

const citricFruits = ["lemon", "Oranges", "Pineapples"];
const wildfruits = ["strawberries", "guavas"];
const allFruits = [...wildfruits,...citricFruits];

console.log(allFruits);