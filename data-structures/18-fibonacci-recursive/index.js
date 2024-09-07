function fib(n){
    //base case
    if (n <= 1) return n;
    //recursive case
    return fib(n - 1) + fib(n - 2);
}
console.log(fib(5));