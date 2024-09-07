const person = {
    id : 1,
    fname : "Alice",
    age : 30,
    isAdmin: false,
    gender: "female",
    likes : {
        hobby : "Dancing",
        category : "Salsa",
    },
};

const {fname, 
    age,
    likes: {hobby},
} = person;

console.log(`hi ${fname} , you are ${age} years old today. You like ${hobby}`);

// person.fname = "Somebody else";
// person.city = "Nairobi";
// console.log(person);
