var list=[    { date: '12/1/2011', reading: 3, id: 20055 },    { date: '13/1/2011', reading: 5, id: 20053 },    { date: '14/1/2011', reading: 6, id: 45652 },    { date: '13/1/2011', reading: 5, id: 20051 },];
function customFilter(list,keyName,value)
{
    var filterList = list.filter(l=> l[keyName] == value);
   
    return filterList;
}

var lst=customFilter(list,"reading",'5');
console.log(lst);
