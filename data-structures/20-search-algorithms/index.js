function search(array, value){
    //iterate over each element of the array
    for (let i = 0; i < array.length; i++){
        //at each iteration check if the value matches the value at the current index
        if (value === array[i]) return i;
    }
    return -1;
}
// let counties = ["Kakamega", "Kajiado", "Nairobi", "Busia", "Kilifi", "Kwale",
//      "Homabay", "Garissa", "Mandera", "Kirinyaga", "Lamu", "Mombasa",
//     "Kitui", "TanaRiver", "Bomet", "transzoia", "Narok", "Migori"
// ];
let states = ["alabama", "alaska", "american samoa", "arkansas", "colorado", 
    "connecticut", "delaware", "oregon", "wisconsin", "wyoming"];
console.log(search(counties, "homabay"));