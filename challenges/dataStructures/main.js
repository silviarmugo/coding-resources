function solution(str){
    const characters = str.split("");
    const length = characters.length;

    let startIndex = 0;
    let endIndex = length - 1;

    while (startIndex < endIndex){
        let current = characters[startIndex];
        characters[startIndex] = characters[endIndex];
        characters[endIndex] = current;

        startIndex++;
        endIndex--;
    }
    return characters.join("");

}

function main(){
    const name = "Basil";
    console.log(solution(name));  

}

const t1 = performance.now();
main();
const t2 = performance.now();
console.log(`Time taken is ${(t2 - t1) / 1000 }`);