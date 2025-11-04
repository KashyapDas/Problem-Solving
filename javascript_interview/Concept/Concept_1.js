// Prototype and Prototypal Inheritance

/*
Basically used to created the user-defined methods for objects, array, functions that we define by our own. 
*/

// Example - 1
let object = {
    name : "Kashyap Jyoti Das",
    age : 22,
    printDetails : function(){
        console.log("Name : "+this.name+" Age : "+this.age);
    }
}
let object2 = {
    name : "Jubin Das"
}
// Never do this. It lead to huge performance issue
object2.__proto__= object
console.log(object2.name); // Jubin Das
console.log(object2.__proto__.name);  // Kashyap Jyoti Das
object2.printDetails() // Name : Jubin Das Age : 22

// Example - 2
let arr = [10,20,30,40,50,60,70,80,90,100];

arr.__proto__.doSum = function(){
    let sum = 0;
    for(let i =0; i<arr.length; i++){
        sum+=arr[i];
    }
    return sum;
}

arr.__proto__.printSum = function(){
    const result = arr.doSum();
    console.log(result);
}

console.log(arr.doSum());
arr.printSum();
