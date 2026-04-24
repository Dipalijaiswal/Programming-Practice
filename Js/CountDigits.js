function countDigits(n){
let count =0;
while(n !=0){
    n=Math.floor(n/10);
    count ++;
}
return count;
}
let n=3454;
console.log(countDigits(n));