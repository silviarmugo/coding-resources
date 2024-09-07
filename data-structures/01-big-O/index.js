function sum(a, b){
    return a + b;
}
function main(){
    const result = sum(230000, 389000);
    console.log(result);
}

// const t1 = performance.now();
main();
// const t2 = performance.now();
// console.log(`Time taken: ${(t2 - t1) / 1000 }`);