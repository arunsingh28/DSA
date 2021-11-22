"use strict";

let a = [1, 2, 4, 7, 34, 56];

function deleteArray(a, index, el) {
    let newArray = [...a];
    newArray.splice(index, el);
    return newArray;
}

console.log(a);

console.log(deleteArray(a, 0, 3));