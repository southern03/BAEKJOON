# 📌 C vs C++ 출력 형식 정리

## ✅ C 스타일 (`printf`)
```c
// 소수점 9자리까지 출력
printf("%.9lf\n", (double)A / B);

// 정수 10칸 오른쪽 정렬
printf("%10d\n", 42);

// 5자리, 빈 칸을 0으로 채움
printf("%05d\n", 42);
```

## ✅ C++ 스타일 (cout + <iomanip>)
```cpp
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int A = 42;
    double B = 3.1415926535;

    // 소수점 9자리까지 출력
    cout << fixed << setprecision(9) << B << '\n';

    // 정수 10칸 오른쪽 정렬
    cout << setw(10) << A << '\n';

    // 5자리, 빈칸을 0으로 채움
    cout << setw(5) << setfill('0') << A << '\n';

    return 0;
}
```
