#include <bits/stdc++.h> 
using namespace std;

// This function returns the precedence of an operator.
// The higher the precedence, the higher the returned integer value.
int precedence(char c) {
  if (c == '^') {
    return 3;
  } else if (c == '/' || c == '*') {
    return 2;
  } else if (c == '+' || c == '-') {
    return 1;
  } else {
    return -1;
  }
}

// This function converts an infix expression to a postfix expression.
void infixToPostfix(string s) {
  // Use a stack to store operators.
  stack<char> st;
  // Use a string to store the resulting postfix expression.
  string result;

  // Iterate through each character in the infix expression.
  for (char c : s) {
    // If the character is an operand (a letter or a digit), add it to the result.
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9')) {
      result += c;
    }
    // If the character is an open parenthesis, push it onto the stack.
    else if (c == '(') {
      st.push('(');
    }
    // If the character is a closed parenthesis, pop operators from the stack and add them to the result until an open parenthesis is encountered.
    else if (c == ')') {
      while (st.top() != '(') {
        result += st.top();
        st.pop();
      }
      // Pop the open parenthesis as well.
      st.pop();
    }
    // If the character is an operator, pop operators from the stack and add them to the result until the top operator has lower precedence than the current operator.
    else {
      while (!st.empty() && precedence(c) <= precedence(st.top())) {
        result += st.top();
        st.pop();
      }
      // Push the current operator onto the stack.
      st.push(c);
    }
  }

  // Pop any remaining operators from the stack and add them to the result.
  while (!st.empty()) {
    result += st.top();
    st.pop();
  }

  // Print the resulting postfix expression.
  cout << "***************" << endl;
  cout << "PostFix Expression: " << result << endl;
  cout << "***************" << endl;
}

int main() {
  // Get the infix expression from the user.
  cout << "Please enter infix expression:" << endl;
  cout << "> ";
  string exp;
  cin >> exp;

  // Convert the infix expression to a postfix expression.
  infixToPostfix(exp);

  return 0;
}
