function factorial(n){
    //do some bound checking
    if (n <= 0) return 1;
    //initialize the total variable and set it to 0
    let total = 1;
    //iterate over the value from n to 1
    for (let i = n; i >= 1; i--){
        //for each iteration
        total = total * i
    }
    //outside th loop return total
    return total;
}
function factorialRecursive(n){
    if (n <= 1) return 1;
    
    return n * factorialRecursive (n - 1);

}
console.log(factorial(2));
console.log(factorialRecursive(5));