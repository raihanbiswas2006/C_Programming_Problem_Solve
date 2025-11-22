#include <iostream>
#include <stack>
using namespace std;

void insertAtBottom(stack<int> &st, int x)
{
    if (st.empty())
    {
        st.push(x);
        return;
    }

    int topElement = st.top();
    st.pop();

    insertAtBottom(st, x);
    st.push(topElement);
}

void reverseStack(stack<int> &st)
{
    if (st.empty())
        return;

    int topElement = st.top();
    st.pop();

    reverseStack(st);
    insertAtBottom(st, topElement);
}

int main(){

    stack<int> st;
    int n, value;

    cout << "Give Number of Elements in Stack: ";
    cin >> n;

    cout << "Give Stack Elements (top to bottom):" <<endl;
    for (int i = 0; i < n; i++)
    {
        cin >> value;
        st.push(value);
    }

    reverseStack(st);

    cout << "Reversed Stack (top to bottom): ";
    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }

    cout <<endl;

    return 0;
}