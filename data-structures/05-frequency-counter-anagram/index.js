function isAnagram(str1, str2) {
    //check if the two strings are the same lenght, if  not return false
    if (str1.length !== str2.length) return false;
    //create an object to keep track of character count
    let lookup = {};
    //iterate over every character of the first string
    for (char of str1){
        if (lookup[char] > 0) {
            lookup[char]++;
        }
        else {
            lookup[char] = 1;
        }
    }
    console.log(lookup);
    console.log(lookup["d"]);
    //iterate over evey character of the second string
    for (char of str2){
        if (!lookup[char]) return false
        lookup[char]--;
    }
    console.log(lookup);
    return true
}
console.log(isAnagram("dormitory", "dirtyroom"));
// console.log(isAnagram("true", "car"));
// console.log(isAnagram(" ", " "));
// console.log(isAnagram("team", "meat"));