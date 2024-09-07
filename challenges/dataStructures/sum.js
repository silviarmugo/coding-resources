function solution(n){
    let sum = 0;
    for (i = 1; i <= n; i++){
        sum = sum + i;
    }
    return sum;
        
}
function solution2(n){
    return n *(n + 1) / 2
}


function main(){
    console.log(solution(1000));

    console.log(solution2(1000));
}

main();