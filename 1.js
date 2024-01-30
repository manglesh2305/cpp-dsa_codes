
const A= new Date(2019,05,01);
const B= new Date(2020,08,02);
let m1=A.getMonth();
let m2=B.getMonth();
let Y1=A.getFullYear();
let Y2=B.getFullYear();
console.log(m1);
console.log(m2);
console.log(Y1);
console.log(Y2);
let Y=Y2-Y1;
let s=m1;
let lim=12;

for(let i=0;i<=Y;i++){
    
    for(let x=s;x<=lim;x++){
        if(x%3==0){
            if(x<10){
                console.log( Y1+i+"-0"+x);    
            }
            else
                console.log( Y1+i+"-"+x);
        }
    }
    s=1;
    lim=12;
    if(Y2==Y1+Y) lim=m2;
    
}

// manglesh 


