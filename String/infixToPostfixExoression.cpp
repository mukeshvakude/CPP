#include <iostream>
#include <stack>


using namespace std;

// Function to check if a character is an operator
bool isOperator(char ch) {
    return (ch == '+' || ch == '-' || ch == '*' || ch == '/');
}

// Function to get the precedence of an operator
int getPrecedence(char op) {
    if (op == '+' || op == '-')
        return 1;
    else if (op == '*' || op == '/')
        return 2;
    return 0; // If the character is not an operator
}

// Function to convert infix expression to postfix
string infixToPostfix(string infix) {
    stack<char> operatorStack;
    string postfix;

    for (char ch : infix) {
        if (isalnum(ch)) {
            postfix += ch; // Operand, add to the postfix expression
        } else if (isOperator(ch)) {
            while (!operatorStack.empty() && getPrecedence(operatorStack.top()) >= getPrecedence(ch)) {
                postfix += operatorStack.top();
                operatorStack.pop();
            }
            operatorStack.push(ch);
        } else if (ch == '(') {
            operatorStack.push(ch);
        } else if (ch == ')') {
            while (!operatorStack.empty() && operatorStack.top() != '(') {
                postfix += operatorStack.top();
                operatorStack.pop();
            }
            operatorStack.pop(); // Pop the '('
        }
    }

    // Pop remaining operators from the stack
    while (!operatorStack.empty()) {
        postfix += operatorStack.top();
        operatorStack.pop();
    }

    return postfix;
}


int main() {
    string infixExpression;
    cout << "Enter infix expression: ";
    getline(cin, infixExpression);

    string postfixExpression = infixToPostfix(infixExpression);
    cout << "Postfix expression: " << postfixExpression << endl;
    return 0;
}

