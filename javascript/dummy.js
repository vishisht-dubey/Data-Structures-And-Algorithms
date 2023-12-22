// "use strict";
// // // let x = "vishisht";
// // // console.log(x);

// // // var symbol = Symbol("jahnavi");
// // // console.log(symbol);

// // // var obj  = {
// // //     1:"vishsiht",2:"dubey",3:()=>{console.log(obj[0]);}
// // // }

// // // Object.keys(obj).map((value)=>{
// // //     console.log(typeof obj[value]);
// // //     if(typeof obj[value]=="function")
// // //     console.log(obj[value]());

// // // });

// // // // console.log(obj[3]);

// // // let currentDate = new Date();
// // // console.log(currentDate.getTimezoneOffset);

// // // const name = ["vishisht","abhirvey","aryaman"];
// // // console.log(name[0]);
// // // var change = ["summer","winter","autumn"];
// // // {
// // //     const name = ["vinnet","umang","devansh"];
// // //     console.log(name[0]);
// // // }
// // // // const name = ["one","two","three"];
// // // // console.log(name[0]);   cannot declare const variable with a same name in same block scope
// // // console.log(new Date().toUTCString())

// // // const info = {
// // //     name:"vishisht",
// // //     age:"20",
// // //     batch:"2021",
// // //     jobRole:"Full Stack Developer",
// // //     location:"Gurgaon"
// // // }
// // // console.log(info?.city);

// // // var bool = true;
// // // if(bool){
// // //     const number = 19;
// // //     console.log(number);
// // // }
// // // number = 90;
// // // console.log(number);

// // // var k = 10;
// // // var y;
// // // console.log(k+y);
// // // var y =10;

// // // console.log(19>>2);
// // // console.log(19<<2);
// // // console.log(19>>>2);
// // // console.log(-5>>2);
// // // console.log(-5>>>2);

// // // // Javascript Labels
// // // // label:statement

// // // // let const var

// // // console.log(year);
// // // var year = 2023;

// // // console.log(year);
// // // let year = 2023;

// // // console.log(year);
// // // const year = 2023;

// // // const a=1;  must be intialized
// // // let b; if not intialized contains a default value undefined
// // // b=10;
// // // var c;  if not intialized contains a default value undefined
// // // console.log(a,b,c);

// // // if(true){
// // //     let age = 20;
// // //     var age2 = 20;
// // // }
// // // console.log(age2,age)

// // // const car = {
// // //     name :"BMW",
// // //     model:"720 i",
// // //     series:"7 series",
// // //     variant:"hybrid(petrol+electric)",
// // //     year:"2023"
// // // }
// // // console.log(car['owner']?"hi":"not");
// // // console.log(car)
// // // car['owner']="vishisht";
// // // console.log(car)
// // // delete car.owner;
// // // console.log(car);
// // // const arr = [10,12,13,15,18,23,30];
// // // console.log(arr);
// // // arr.push(900);
// // // console.log(arr);
// // // arr.splice(6,1);
// // // console.log(arr);
// // // arr[5]=1900;
// // // console.log(arr);

// // // We uses array.map(function) for iteration from an array
// // // Object.keys(obj_name).map() is used for iteration over an object

// // // let t1 = "jaanisht";

// // // try{
// // //     // console.log(v);
// // //     if(isNaN(t1)) throw "IT IS A STRING";
// // // }
// // // catch(err){
// // //     console.log(err);
// // // }
// // // let v;
// // // let buddy;
// // // function active(){
// // //     buddy = "jahnavi"
// // // }
// // // // active()
// // // console.log(buddy);
// // // b=10;
// // // console.log(b);
// // // let b;

// // // async function check(){
// // //     console.log(this);
// // //     const data = await fetch()
// // // }
// // // check();

// // // function objectCheck() {
// // //   console.log(this);
// // // }
// // // objectCheck();
// // // const car = {
// // //   name: "BMW",
// // //   model: "720 i",
// // //   series: "7 series",
// // //   variant: "hybrid(petrol+electric)",
// // //   year: "2023",
// // //   get: function () {
// // //     return this.name;
// // //   },
// // // };

// // // const carKeys = Object.keys(car);
// // // console.log(carKeys);
// // // const result = carKeys.reduce((acc, curr) => {acc[curr] = car[curr];return acc;},[]);
// // // console.log(typeof result);

// // // const car2 = {
// // //   name: "Mercedes",
// // // };
// // // console.log(car.get());

// // // function getSqaure(num) {
// // //   return num * num;
// // // }
// // // const number = [10, 23, 45, 67, 13, 18, 22];
// // // const sqrtNumber = number.map(getSqaure);
// // // console.log(sqrtNumber);

// // // const reducedNumber = number.filter((value) => (value % 5 === 0)||(value%10===0));
// // // console.log(reducedNumber);
// // // const x = 0;
// // // const sum = number.reduce((accumulator,currentNumber)=>accumulator+currentNumber,x);
// // // console.log(sum,x);

// // // const newObj = {
// // //   name: "vishisht",
// // //   year: "2021",
// // //   branch: "pharmaceutical",
// // //   fullDetails: function () {
// // //     console.log(this);
// // //     return this.name + " " + this.branch + " " + this.year;
// // //   },
// // // };

// // // function myFunc(newObj) {
// // //   let v = newObj;
// // //   return this;
// // // }
// // // console.log(myFunc());

// // // let numb = this;
// // // console.log(this);

// // // console.log(newObj.fullDetails())

// // // const data = {
// // //   city: "Gwalior",
// // //   temp: "24.3C",
// // //   state: "Madhya Pradesh",
// // //   country: "India",
// // //   res: function () {
// // //     return this.city + " " + this.country + " " + this.temp + " " + this.state;
// // //   },
// // // };

// // // const another_data = {
// // //   city: "Galway",
// // //   temp: "-1.2C",
// // //   state: "null",
// // //   country: "Germany",
// // // };

// // // const pi = 3.14;

// // // console.log(data.res.apply(another_data));
// // // console.log(data.res.call(another_data));
// // // console.log(data.res.bind(another_data)());

// // // closures
// // // a function which can access variables of parent functions even after the parent function is called

// // // const counter = (function () {
// // //   let add = 0;
// // //   return function () {
// // //     return (add += 1);
// // //   };
// // // })();

// // // counter();
// // // counter();
// // // counter();
// // // console.log(counter());

// // // let convo = {
// // //   batch: [2018, 2019],
// // //   degree: ["BTECH", "MTECH"],
// // //   students: "1600+",
// // //   college: "IIT-BHU",
// // //   date: "05-10-2023",
// // // };
// // // console.log(convo);

// // // function greet(){
// // //     return this.college;
// // // }
// // // console.log(greet.bind(convo)());
// // // console.log(pi);

// // // function date() {
// // //   const today = new Date();
// // //   return today;
// // // }
// // // console.log(date());

// // // function mth(callBack) {
// // //   const cr = new Date();
// // //   callBack(cr);
// // // }()=>{console.log("Hiii Vishisht")}
// // // function getSec() {
// // //   const data = new Date();
// // //   return data.toString();
// // // }
// // // console.log(mth(getSec));
// // setTimeout(() => {
// //   console.log("Hiii Vishisht");
// // }, 2000);
// // var na = "vishisht";
// // // const check = new Promise((res, rej) => {
// // //   if (na == "vishisht") res("Going Good");
// // //   rej("Bad Gateway");
// // // });
// // // check
// // //   .then(() => {
// // //     resolve("No error");
// // //   })
// // //   .catch((err) => {
// // //     reject(err);
// // //   });

// // // const p = new Promise((resolve, reject) => {
// // //   const data = "https/google.com";
// // //   if (data.startsWith("ab")) {
// // //     resolve(data);
// // //   } else {
// // //     reject("error");
// // //   }
// // // });

// // // p.then((data) => {
// // //   console.log(data);
// // // }).catch((data) => {
// // //   console.log(data);
// // // });

// // // async function get() {
// // //   const result = await fetch();
// // //   if (result.status == 200) console.log(result);
// // //   else console.log("hello");
// // // }

// // // OOPS CONCEPT JAVASCRIPT
// // class convocation {
// //   constructor(year, number) {
// //     this.year = year;
// //     this.number = number;
// //   }

// //   getStudent(num) {
// //     return `There are more than ${num} students graduating this year`;
// //   }

// //   static greetings(x) {
// //     return "Batch of " + x.year;
// //   }

// // }

// // const person_1 = new convocation(2023, 12);
// // // console.log(person_1.getStudent(1600));
// // // console.log(person_1);
// // console.log(convocation.greetings(person_1));

// // class colleges extends convocation {
// //   constructor(name, year, number) {
// //     super(year, number);
// //     this.name = name;
// //   }
// //   show(num) {
// //     return this.getStudent(num);
// //   }
// //   getStudent(){
// //     return "Method Overidden nothing else";
// //   }
// //   get cname() {
// //     return this.name;
// //   }
// //   set cname(x) {
// //     this.name = x;
// //   }
// // }

// // const college_one = new colleges("IIT-B", 2023, 34);
// // // console.log(college_one.show(1200));
// // // console.log(college_one.name);
// // // console.log(college_one.number);
// // // console.log(college_one.year);
// // college_one.cname = "IIT-BHU";
// // console.log(college_one.show(1200));
// // console.log(college_one.name);
// // console.log(college_one.number);
// // console.log(college_one.year);
// // console.log(college_one.name);

// // const fun = {
// //   name: "vishisht",
// //   city: "Gwalior",
// // };
// // const info = {
// //   data: function () {
// //     return this.name + " " + this.city;
// //   },
// // };
// // fun.__proto__ = info;
// // console.log(fun.data());
// // console.log(info.data.apply(fun));

// // JSON
// let data = {
//   firstName: "Vishisht",
//   lastName: "Dubey",
//   age: 20,
//   year: 3,
//   branch: "Pharmaceutical",
//   program: "IDD",
// };
// console.log(typeof data);
// const x = JSON.stringify(data);
// console.log(JSON.parse(x));
// var n = "n";
// var m = "m";
// function hi(n,m) {
//   return "Learning about"+ n + m + "eval function" ;
// }
// console.log(eval("hi"+'("'+n+","+m+'")'));

// c =3 ;
// var c;
// console.log(c);
// function m(one){
//   return "This is first"+" "+toString(one);
// // }
// // // Generator Functions

// // function* asyncTask() {
// //   const data = yield m(); // Pause and wait for data to be fetched
// //   console.log(data);
// // }

// // const task = asyncTask(1);
// // const result = task.next();

// // // console.log(result.data);
// // console.log(result.value);

// function test_1() {
//   console.log("This is the first message");
// }

// setTimeout(() => {
//   console.log("This is the second message");
// },0);

// function test_2(){
//   console.log("This is the third message");
// }


// test_1();
// test_2();


// const x = function(message){
//   setTimeout(()=>{console.log("Hello"+message)},500);
// }
// console.log("Hii Vishisht");
// x("Devansh");
// console.log("Hii Abhirvey");
// x("Akshay");

// const arr = [1,2,3,4,5,2];
// arr.splice(2,4);
// console.log(arr);