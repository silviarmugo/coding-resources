function search (arr, value){
    //iterate over elements in the array
    for (let i = 0; i < arr.length; i++){
        //for each iteration, if the value is found at a particular index, return the index
        if (arr[i] === value)return i;
    }
    //outside the loop retrn -1
    return -1;
}
console.log(search([1,2,3,4, 5, 6], 14));