var lib = require('./lib.out');

lib._sayHi(); // direct calling works
lib.ccall("sayHi"); // using ccall etc. also work
console.log(lib._daysInWeek()); // values can be returned, etc.
