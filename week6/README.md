# Lecture 5: Two-Dimensional Arrays

## 1. What is a Two-Dimensional Array?
A two-dimensional (2D) array is an array of arrays, often used to represent matrices or tables. It organizes data in rows and columns, allowing access to elements using two indices (row and column).

- **Key Characteristics**:
  - Stores elements in a grid-like structure.
  - Fixed size for rows and columns (in C++ static arrays).
  - Indexed starting from 0 for both rows and columns.

## 2. Infinite Loops and Nested Loops
- **Infinite Loops**: Loops that run indefinitely unless broken (e.g., `while (true)` or `for(;;)`). Use with caution to avoid program hangs.
- **Nested Loops**: Loops inside loops, commonly used to process 2D arrays.
  - Outer loop iterates over rows.
  - Inner loop iterates over columns.

**Example (Nested Loop)**:
```cpp
for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
        // Process element at [i][j]
    }
}
```

## 3. Initializing 2D Arrays
2D arrays can be initialized during declaration or by assigning values later.

- **Syntax** (C++):
  ```cpp
  dataType arrayName[rows][columns];
  ```
- **Example**:
  ```cpp
  int matrix[2][3] = {{1, 2, 3}, {4, 5, 6}}; // 2 rows, 3 columns
  int matrix[2][3] = {0};                    // All elements initialized to 0
  ```

## 4. Accessing 2D Array Elements
Elements are accessed using two indices: `arrayName[row][column]`.

- **Example**:
  ```cpp
  int matrix[2][3] = {{1, 2, 3}, {4, 5, 6}};
  cout << matrix[1][2]; // Outputs 6 (row 1, column 2)
  matrix[0][1] = 9;    // Updates element at row 0, column 1 to 9
  ```

## 5. Examples of 2D Arrays (Matrices)
Below are simple C++ examples for 2D array operations.

### 5.1 1D Array Sort, Reverse
```cpp
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sort(arr, arr + n); // Sort ascending
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    reverse(arr, arr + n); // Reverse array
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
```

### 5.2 Nested Loop: Multiplication Table
```cpp
#include <iostream>
using namespace std;

int main() {
    int n = 10;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cout << i * j << "\t";
        }
        cout << endl;
    }
    return 0;
}
```

### 5.3 2D Array (Matrix) Input and Output
```cpp
#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int matrix[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> matrix[i][j];
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
```

### 5.4 Initializing Two-Dimensional Arrays
```cpp
#include <iostream>
using namespace std;

int main() {
    int n = 3, m = 3;
    int matrix[n][m] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
```

### 5.5 Accessing Two-Dimensional Array Elements
```cpp
#include <iostream>
using namespace std;

int main() {
    int matrix[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int row, col;
    cin >> row >> col;
    cout << "Element at [" << row << "][" << col << "]: " << matrix[row][col] << endl;
    return 0;
}
```

### 5.6 File Input/Output with freopen
```cpp
#include <iostream>
using namespace std;

int main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n, m;
    cin >> n >> m;
    int matrix[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> matrix[i][j];
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
```

### 5.7 Table of Multiplication (Matrix Form)
```cpp
#include <iostream>
using namespace std;

int main() {
    int n = 5;
    int matrix[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            matrix[i][j] = (i + 1) * (j + 1);
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }
    return 0;
}
```

### 5.8 Max Element in Matrix
```cpp
#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int matrix[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> matrix[i][j];
        }
    }
    int max = matrix[0][0];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (matrix[i][j] > max) {
                max = matrix[i][j];
            }
        }
    }
    cout << "Max element: " << max << endl;
    return 0;
}
```

### 5.9 Identity Matrix (1 on Diagonal, 0 Elsewhere)
```cpp
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int matrix[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            matrix[i][j] = (i == j) ? 1 : 0;
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
```

### 5.10 Custom Diagonal Matrix (1, 2, 3 on Diagonal)
```cpp
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int matrix[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            matrix[i][j] = (i == j) ? (i + 1) : 0;
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
```

### 5.11 Opposite Identity Matrix (1 on Anti-Diagonal, 0 Elsewhere)
```cpp
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int matrix[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            matrix[i][j] = (i + j == n - 1) ? 1 : 0;
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
```

### 5.12 Opposite Custom Diagonal Matrix (1, 2, 3 on Anti-Diagonal)
```cpp
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int matrix[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            matrix[i][j] = (i + j == n - 1) ? (i + 1) : 0;
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
```

### 5.13 Symmetric Matrix Check (With Bool)
```cpp
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int matrix[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }
    bool isSymmetric = true;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (matrix[i][j] != matrix[j][i]) {
                isSymmetric = false;
                break;
            }
        }
    }
    cout << (isSymmetric ? "Symmetric" : "Not Symmetric") << endl;
    return 0;
}
```

### 5.14 Symmetric Matrix Check (With Return)
```cpp
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int matrix[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (matrix[i][j] != matrix[j][i]) {
                cout << "Not Symmetric" << endl;
                return 0;
            }
        }
    }

    cout << "Symmetric" << endl;

    return 0;
}
```

### 5.15 Symmetric Matrix Check (With Counter)
```cpp
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int matrix[n][n], count = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
            if (i != j && matrix[i][j] == matrix[j][i]) {
                count++;
            }
        }
    }
    cout << "Symmetric pairs: " << count / 2 << endl;
    return 0;
}
```

### 5.16 Max and Min in Matrix (With Location)
```cpp
#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int matrix[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> matrix[i][j];
        }
    }
    int max = matrix[0][0], min = matrix[0][0], maxRow = 0, maxCol = 0, minRow = 0, minCol = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (matrix[i][j] > max) {
                max = matrix[i][j];
                maxRow = i;
                maxCol = j;
            }
            if (matrix[i][j] < min) {
                min = matrix[i][j];
                minRow = i;
                minCol = j;
            }
        }
    }
    cout << "Max: " << max << " at [" << maxRow << "][" << maxCol << "]" << endl;
    cout << "Min: " << min << " at [" << minRow << "][" << minCol << "]" << endl;
    return 0;
}
```

### 5.17 Max Per Row
```cpp
#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int matrix[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> matrix[i][j];
        }
    }
    for (int i = 0; i < n; i++) {
        int max = matrix[i][0];
        for (int j = 1; j < m; j++) {
            if (matrix[i][j] > max) {
                max = matrix[i][j];
            }
        }
        cout << "Row " << i << " max: " << max << endl;
    }
    return 0;
}
```

### 5.18 Max Per Row Sum
```cpp
#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int matrix[n][m], maxSum = 0, maxRow = 0;
    for (int i = 0; i < n; i++) {
        int sum = 0;
        for (int j = 0; j < m; j++) {
            cin >> matrix[i][j];
            sum += matrix[i][j];
        }
        if (sum > maxSum) {
            maxSum = sum;
            maxRow = i;
        }
    }
    cout << "Row " << maxRow << " has max sum: " << maxSum << endl;
    return 0;
}
```

### 5.19 Snake Pattern in Matrix
```cpp
#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int matrix[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> matrix[i][j];
        }
    }
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            for (int j = 0; j < m; j++) {
                cout << matrix[i][j] << " ";
            }
        } else {
            for (int j = m - 1; j >= 0; j--) {
                cout << matrix[i][j] << " ";
            }
        }
    }
    cout << endl;
    return 0;
}
```