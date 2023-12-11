#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
    stack<int> parenthesesStack;
    cout<<parenthesesStack.empty();
    parenthesesStack.push(10);
    parenthesesStack.push(20);
    parenthesesStack.push(30);
    cout<<"Stack empty "<<parenthesesStack.empty()<<endl;
    cout<<"Top of stack "<<parenthesesStack.top()<<endl;
    cout<<"Size of Stack "<<parenthesesStack.size()<<endl;
    
    return 0;
}
