const salary = [1000, 5000, 1000, 1500, 30000, 200000];
const shiruCompany = salary.filter(function (salary){
    return salary >= 5000
});

const shiruCompany1 = salary.filter((salary) => salary >= 5000);

const shiruCompany2 = salary.filter((salary) =>{
    return salary >= 5000;
});
console.log(shiruCompany);
console.log(shiruCompany1);
console.log(shiruCompany2);

const names = ["Basil", "Josephine Nzila", "Jedidah Nzila", "Gen-z"];

const jedArray = names.filter((name) => name === "Jedidah");


const nzilaOnlyArray = names.filter((name) => 
    name.toLowerCase().includes("Nzila")
);

console.log(jedArray);
console.log(nzilaOnlyArray);