const student = {
    id: 1,
    name: "Jeddy",
    age: 29,
    football: "arsenal",
    address: "Kasarani",
    colors: ["Red", "Green", "blue"],
};

delete student.football;
// console.log(student.name);
// console.log(student.colors[1]);

student.gender = "female";
console.log(student);