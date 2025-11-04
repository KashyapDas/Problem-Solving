// Call, Apply, Bind in JavaScript
/*
    Call() => Executes a function immediately with a specified this value and individual arguments.Invokes function immediately and Arguments passed individually.

    Apply() => Same as call(), but takes arguments as an array (useful for variadic functions).
*/

let printFullName = function(hometown, state){
        console.log("My name is : "+this.firstname + " " + this.lastname +" and age is : "+this.age);
        console.log("My hometown is : "+hometown+" and state is : "+state);
    }

let example1 = {
    firstname : "Kashyap",
    lastname : "Das",
    age : 22,
}


// Call Method
printFullName.call(example1, "Sualkuchi","Assam");
// Apply Method 
printFullName.apply(example1,["Mumbai","Maharastra"]);
// Bind Method
let result = printFullName.bind(example1);
result("Jorhat","Assam");

