/*
there are total 63 keywords in javascript
everything that has some menaing in the language is called a keyword 

variables and constants


vriables are used to stoer the data in the code 

HOISTING:
Hoisting is a JavaScript concept that moves all variable declarations and function declarations to the top of their scope, even if they are declared later in the code. This means that a variable or function can be used before it is declared, but the value of the variable or function will be undefined.
whcih in other languages give error :=> variable was not declare 


PRIMITIVES AND RENFRENCES:
Primitives ->   int, string, double, float etc
            -> they are stored in a stack
            -> while compyng them the real value get copid

Refrences -> (), [], {}  
            -> they are stored in a heap memory
            -> while copying them the real doesn't get copied but its refrence get copied 

exaple->


var a=[1,2,3,4];
var b=a;
console.log(b);

here a has its own values loke 1,2,3,4
but b has a's value if the values from a get changes then the value of b will automatically changes.


TRUTHY FALSY
if([]){
    console.log("sen");
}
->type coercion
empty array will converted to true of boolean 


LOOPS in JS:


1)  foreach:

array.forEach(callbackFunction);
callbackFunction is a function that takes two arguments: the current element and the index of the current element.

advantages:
It is flexible, as the callbackFunction can be any function. 
easy to read

drawbacks:
It cannot be used with the break and continue statements.
It cannot be used to modify the array or object that it is iterating over.




Feature	                     For in	                                For of
Iterates over	            Properties of an object	                Values of an iterable object

Can be used with	        Objects	                                Arrays, strings, maps, and other iterable objects

Can be used with the        Yes                                     No
break and continue
statements	

FUNCTIONS IN JS:
a function is a block of code that execudes whenever it is called
USES:
1) when we don't need to run the code at present time but need to run it later
2)When we wnat to reuse the code 
3)when we want to run the code with difrent data


syntax:
function yash(name,age){//parameters
    console.log("yash sen"+" "+name+" "+age );
}

yash("sen",1);//arguments





ARROW FUNCTIONS:
-> also called as lambda function 

const a=(name)=>{
    console.log(name+ " sen");
}

// console.log(a("yash"));

a("yash")





ARRAYS in js:
arrays are user defined datatype
use to sotre set of values of ******ANY****** type



operatrions on arry:

push, pop, shift, unshift


a=[1,2,3,"yash"]
// a.push("sen")//to push value form end
// a.pop()//to delete value form end
// a.unshift("sen")//to insert value into the starting index

// a.shift()//to remove values from start index

a.splice(2,1);//remove value at 2nd index
a.splice(2,2);//remove value form 2nd index to 3rd index
console.log(a);




OBJECTS in JS:
An object in JavaScript is a data structure that can store a collection of key-value pairs. The keys can be of any type, including strings, numbers, and objects. The values can also be of any type.


syntax:

const a={
    n:"yash",
    sername:"sen"
}

console.log(a.sername);



const a={}//empty object
*/







