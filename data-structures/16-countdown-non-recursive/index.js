function countDown(n){
    //iterate over the number starting from n upto 1
    for (let i = n; i >= 1; i--){
        //at each iteration, print the number
        console.log(i);
    }
}
function countDownRecursive(n){
    //base case
    if (n <= 0) return;
    //recursive case
    console.log(n);
    n--;
    countDownRecursive(n);

}
countDown(5);
countDownRecursive(10);