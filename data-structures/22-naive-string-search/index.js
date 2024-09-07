function naiveSearch(long, short){
    //initialize the count to 0
    let count = 0;
    //iterate over each character in the longer string
    for (let i = 0; i < long.length; i++){
        //for each iteration, of the longer string, loop over the shorter string
        for (let j = 0; i < short.length; j++){
            console.log(long[i], short[j]);
            //within each iteration in the shorter String, if the characters dont match
            //break out of the inner loop
            if (short[j] !== long[i + j]) {
                console.log("breaking");
                break;
            }
            //if they do match, move on to the next character
            //keep going till you reach the end of the shorter string
            //if you reach the end of the short string, it means you found a match
            //increment the count of matches
            if (j === short.length - 1){
                console.log("found 1");
                count ++;
            }
        }
    }
    //return the count at the end
    return count; 
}
console.log(naiveSearch("harold said haha", "haha"));