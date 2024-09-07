let fname = "Jedidah";
let age = 30;
// const address = "Nairobi";
// fname = "Steve";

// console.log("Hello " + fname, "you are in " + address );
// console.log(age);

console.log(`Hello ${fname} you are ${age} years old`, greet(fname));
function greet(fname){
    return `Salamu kwa ${fname}`
}
