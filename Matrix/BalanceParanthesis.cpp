#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool isBalanced(string expression) {
    stack<char> parenthesesStack;
    for (char bracket : expression) {
        if (bracket == '(' || bracket == '{' || bracket == '[') {
            parenthesesStack.push(bracket);
        } else {
            if (parenthesesStack.empty()) {
                // Unmatched closing bracket
                return false;
            }
            char top = parenthesesStack.top();
            parenthesesStack.pop();
            if ((bracket == ')' && top != '(') ||
                (bracket == '}' && top != '{') ||
                (bracket == ']' && top != '[')) {
                // Mismatched opening and closing brackets
                return false;
            }
        }
    }
    // The expression is balanced if the stack is empty at the end
    return parenthesesStack.empty();
}
int main() {
    string expression;

    // Get expression from the user
    cout << "Enter a parenthetical expression: ";
    cin >> expression;
    // Check if the expression is balanced
    if (isBalanced(expression)) {
        cout << "The expression is balanced.\n";
    } else {
        cout << "The expression is not balanced.\n";
    }

    return 0;
}

