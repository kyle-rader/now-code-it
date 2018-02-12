/*
Given a number stored in an array such as [1, 3, 6, 9] that represents 1369. Write a function that adds 1 to the given number and return it in the same array format.

Assumptions
The input number / array can be 0 or more digits / elements
Each digit / element in the array is between 0 and 9(inclusive)
Constraints
The return value / number must be in the same array format.

Potential Solutions
Iterative: Add 1 to last digit and find carry -> iterate from end to start of array adding carry until carry is zero
Recursive: Not seeing an elegant base case and recursive step just yet but I do sort of see the potential of addings 1 to a smaller version of the original problem and building up a final solution from there.Simple case /maybe base case when there is 1 number or no numbers in the array. Return value is [carry, (elem(0) + 1) % 10]

Starting with the iterative solution because the recursive one I’m seeing as clearly and it may have a higher space complexity but not better runtime.
*/

// Testing functions
function testArr(a1, a2) {
  return a1.join('') === a2.join('');
}

function expect(exp, val) {
  if (testArr(exp, val)) {
    console.log('Passed!');
  }
  else {
    const error = `Failed!\n${exp.join(' ')} != ${val.join(' ')}`;
    console.log(error);
  }
}

function testAddOne(a1, a2) {
  expect(addOne(a1), a2);
}

function addOne(input = []) {
  // Check input
  if (!input || input.length === 0)
    return [1];

  const n = input.length;
  let carry = 1;
  for (let i = n - 1; i >= 0; i--) {
    if (carry === 0) break;
    const sum = input[i] + carry;
    carry = Math.floor(sum / 10);
    input[i] = sum % 10;
  }

  // Check for remaining carry
  if (carry > 0) {
    input.unshift(carry);
  }
  return input;
}

// Test Cases
testAddOne(null, [1])
testAddOne([], [1])
testAddOne([1], [2])
testAddOne([9], [1, 0])
testAddOne([1, 2, 3, 9], [1, 2, 4, 0])
testAddOne([9, 9], [1, 0, 0])
