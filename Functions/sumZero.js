
const sumZero1=arr=>{
    for(let i=0;i<arr.length;i++){
        for(let j=i+1;j<arr.length;j++){
            if(arr[i]+arr[j]===0){
                console.log("inside if check");
                console.log(arr[i],arr[j]);
                return (arr[i],arr[j]);
            }
            // console.log(arr);
        }
    }
}

//Multiple Pointer Pattern
const sumZero2=arr=>{
    let left=0;
    let right=arr.length-1;
    while(left<right){
        let sum = arr[left]+arr[right];
        if(sum===0){
            return [arr[left],arr[right]];
        }else if(sum>0){
            right --;
        }else{
            left++;
        }
    }
}

let a = sumZero2([-3,-1,0,1,2]);
console.log(a);