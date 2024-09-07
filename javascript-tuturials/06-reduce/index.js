
const results = function (nums){
    let sum = 0;
    for (index = 0; index < nums.length; index ++){
        sum += nums[index];
    }
    return sum;
};
const results1 = (nums) => {
    let sum = 0;
    for (index = 0; index < nums.length; index ++){
        sum += nums[index];
    }
    return sum;
};
const results2 = (nums) => {
    return nums.reduce(function(acc, current){
        return acc+ current;
    }, 0);
};

const results3 = (nums) => {
    return nums.reduce((acc, current) => acc + current);
};

const results4 = (nums) => {
    return nums.reduce((sum, current) => {
        return sum + current
    }, 0);
};

function main(){
    const nums = [1, 2, 3, 4, 5];

    console.log(results(nums));
    console.log(results1(nums));
    console.log(results2(nums));
    console.log(results3(nums));
    console.log(results4(nums));
};

main();

