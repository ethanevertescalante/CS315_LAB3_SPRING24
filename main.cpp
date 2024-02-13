#include <iostream>
#include <vector>

// For this lab, you are to write an iterative and a recursive solution to each of the following problems.

bool iterativeMember(const std::vector<int> &numbers, int n, int key) {
    // Write an iterative solution for the member problem.
    // Is "key" one of the values in numbers[0 .. n-1]?

    return false;  // This is a placeholder to make clion happy
}

bool recursiveMember(const std::vector<int> &numbers, int n, int key) {
    // Write a recursive solution to the member problem.
    // Is "key" one of the values in numbers[0 .. n-1]?

    return false;  // This is a placeholder to make clion happy
}

bool iterativeAreIdentical(const std::vector<int> &numbers1, const std::vector<int> &numbers2, int n) {
    // Write an iterative solution to the are identical problem.
    // Given two vectors each of which has n elements, do they contain the same elements in
    // the same positions?

    // Example 1:
    // numbers1 contains 34, 21, 80, 56, 100
    // numbers2 contains 34, 21, 80, 56, 100
    // iterativeAreIdentical(numbers1, number2, 5) should return true.

    // Example 2:
    // numbers1 contains 32, 21, 80, 56, 100
    // numbers2 contains 34, 100, 30, 56, 21
    // iterativeAreIdentical(numbers1, number2, 5) should return false.

    return true; // this is a placeholder
}

bool recursiveAreIdentical(const std::vector<int> &numbers1, const std::vector<int> &numbers2, int n) {
    // Write a recursive solution to the are identical problem.
    // Given two vectors each of which has n elements, do they contain the same elements in
    // the same positions?

    // Example 1:
    // numbers1 contains 34, 21, 80, 56, 100
    // numbers2 contains 34, 21, 80, 56, 100
    // iterativeAreIdentical(numbers1, number2, 5) should return true.

    // Example 2:
    // numbers1 contains 32, 21, 80, 56, 100
    // numbers2 contains 34, 100, 30, 56, 21
    // iterativeAreIdentical(numbers1, number2, 5) should return false.

    return true; // this is a placeholder
}

bool interactivePalindrome(const std::string &s) {
    // Given a string, determine if it is a palindrome or not.
    // A string is said to be a palindrome if it is reads the
    // same forward and backward. For example, "dad" and "kayak"
    // are palindromes.
    // Recall that you can use array de-referencing operator
    // to refer to the characters of strings.
    // For example, if s is a string, you could do: s[0], s[1],
    // s[name.length()-1], to refer to the first, second, and
    // the last character of the string, respectively.

    return false;
}


bool interactiveRecursively(const std::string &s) {
   // Given a string, determine if it is a palindrome or not.
   // Write this one recursively.

   return false;
}

bool countInversionsIteratively(const std::vector<int> &v, int n) {
    // Two consecutive values in a vector are inverted at index i if
    // v.at(i) > v.at(i+1). The assumption is that i+1 < n.

    // A sorted list with n elements does not have any inversion
    // because v.at(i) <= v.at(i+1) when 0 <= i < n - 1.

    // This function counts and returns the number of inversions
    // in the first n elements of v.

    // For example, if v contains {5, 8, 10, 6, 7},
    // this function should return 1 as 10 is larger
    // than 6 -- the only inversion in this list.


}

bool countInversionsRecursively(const std::vector<int> &v, int n) {
     // Count and return the number of inversion in the first n
     // elements of v, recursively.
     
}

bool interactivePalindrome2(const std::string &s) {
    // Given a string, determine if it is a palindrome or not.
    // This time, s could contain non-letter characters.
    // Your task is to ignore those and only compare the letters
    // to determine if s is a palindrome or not.

    // For example, the string "a man, a plan, a canal, panama"
    // is a palindrome if you were to ignore the non-letter
    // characters.

    // You should NOT preprocess the string. That is,
    // you can not write a loop to collect the letters
    // into a string and then process this new string.
    // That is, you should only have one loop.

    return false;
}


bool interactiveRecursively2(const std::string &s) {
    // Given a string, determine if it is a palindrome or not.
    // The string may have non-letter characters.
    // Write this one recursively.

    // You should NOT preprocess the string.

    // You should NOT preprocess the string. That is,
    // you can not write a loop to collect the letters
    // into a string and then process this new string.

    return false;
}


void iterativeIntersection(const std::vector<int> &values1,
                          const std::vector<int> &values2,
                          std::vector<int> &result, int values1NumElements, int values2NumElements) {
    // "values1" and "values2", two independent vectors, have "values1NumElements" and
    // "values2NumElements" values. This function finds the elements that are on both lists and
    // adds them to "result".


    // Example:
    // values1 contains: 1, 2, 13, 4, 15, 6, 7
    // values1NumElements is 7

    // values2 contains: 5, 2, 10, 4, 21, 6
    // values2NumElements is 6

    // std::vector<int> result = {}  -- an empty vector
    // After having called iterativeIntersection(values1, values2, result, 7, 6)
    // result should contain: 2, 4, 6. These are elements that are on both lists.

    // You will have to write a helper function to solve this problem. This function
    // performs a lookup and based on the outcome, the calling function decide whether
    // to add an element to the "result" or not.
}

void recursiveIntersection(const std::vector<int> &values1,
                          const std::vector<int> &values2,
                          std::vector<int> &result, int values1NumElements, int values2NumElements) {
    // "values1" and "values2", two independent vectors, have "values1NumElements" and
    // "values2NumElements" values. This function finds the elements that are on both lists and
    // adds them to "result".


    // Example:
    // values1 contains: 1, 2, 13, 4, 15, 6, 7
    // values1NumElements is 7

    // values2 contains: 5, 2, 10, 4, 21, 6
    // values2NumElements is 6

    // std::vector<int> result = {}  -- an empty vector
    // After having called iterativeIntersection(values1, values2, result, 7, 6)
    // result should contain: 2, 4, 6. These are elements that are on both lists.


    // You will have to write a recursive helper function to solve this problem. This function
    // performs a lookup and based on the outcome, the calling function decide whether
    // to add an element to the "result" or not.

}

int main() {
    // Here is how you can create a vector and initialize it.
    std::vector<int> numbers1 = {10, 20, 65, 23, 66, 42, 12, 55};


    return 0;
}
