function getElement<ElementType>(array:ElementType[],index:number){
    return array[index];
}
const n = [1,2,3,4,5];
const res_one = getElement(n,3);
const N = ["12","34","56","78","90"];
const res_two = getElement(N,3);

type ApiRes<Data,Status>={
    data:Data
    code:Status
}

const res_three : ApiRes<{name:string,age:number},{value : number}> = {
   data:{
    name:"vishisht",
    age:20
   },
   code :{value : 300} ,
}