// Polyfill for bind()
// Basically we need to create the bind() from the scratch. See how to implement it

let example = {
    firstname : "Kashyap",
    middleName : "Jyoti",
    lastname : "Das",
    age : 22,
}

let printData = function(state, city, status){
    console.log("Name is : "+this.firstname+" "+this.lastname);
    console.log("Age is : "+this.age);
    console.log("State is : "+state);
    console.log("City is : "+city);
    console.log("Status is : "+status);
}

// Implementation of bind() manually
Function.prototype.createBind = function(...args){
    // "this" refers to the printData method
    let object = this;
    let params = args.slice(1);
    return function(...agrs){
        object.apply(args[0],[...params, ...agrs]);
    }
}

// How to use the manually created bind()
let print = printData.createBind(example,"Assam","Guwahati");
print("Happy")