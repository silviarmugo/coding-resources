const people = [
    {id: 1,
        fname: "Alice",
        profession: "Engineer",
        age: 25
    },
    {
        id: 2,
        fname: "Bob",
        profession: "Designer",
        age: 30
    },
    {
        id: 3,
        fname: "Griffin",
        profession: "Engineer",
        age: 30
    },
];
const updates = people.map(function(person){
    return person.age * 2;
});

const engineers = people.filter(function(person){
    return person.profession === "Engineer";
});
const oldEngineers = people.filter(function(person){
    return person.profession === "Engineer" && person.age > 20;
});
const sumOfAges = people.reduce((acc, curr) =>{
    return acc + curr.age;
}, 0);
console.log(oldEngineers);
console.log(engineers);
console.log(sumOfAges);