const countUniqueValue=arr=>{
    if(arr.length===0){
        return 0;   
    }
    let i=0;
    for(let j=1;j<arr.length;j++){
        if(arr[i]!==arr[j]){
            i++;
            arr[i]=arr[j];
        }
        console.log(i,j);
    }
    console.log(i+1);
    return i+1;
}
let a = countUniqueValue([1,1,1,1,2,3]);