#include <bits/stdc++.h>
using namespace std;
// Yes, that's correct.

// In C++, break statements can only be used inside loops and switch statements. When a break statement is executed inside a loop or switch statement, it immediately terminates the innermost loop or switch statement that contains it.

// Since break statements are only effective inside loops and switch statements, they are also limited to the block in which they are defined. This means that a break statement inside a loop will only break out of that loop and not affect any other loops or statements outside of it.
int main()
{
    for (int i = 0; i < 10; i++) {
    if (i == 7) {
        break;
    }
    cout << i << endl;
    }
    return 0;
}

