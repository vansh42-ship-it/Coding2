//fundamentals of javascript
//array objects functions return async js coding
// foreach map filter find index()f

var arr = [1, 2, 3, 4];
arr.forEach(function (val) {
  console.log(val + " Hello");
});
var newArr = arr.map(function (val) {
  return val + 10;
});

console.log(newArr);

var ans = arr.filter(function (val) {
  if (val > 3) {
    return true;
  } else return false;
});

console.log(ans);

var ans2 = arr.find(function (val) {
  if (val == 12) return val;
});
console.log(ans2);
