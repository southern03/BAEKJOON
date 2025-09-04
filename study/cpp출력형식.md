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

## 🔎 기능별 비교표

| 기능           | C (`printf`)     | C++ (`cout`)                         |
|----------------|------------------|---------------------------------------|
| 소수점 자릿수  | `%.9lf`          | `fixed << setprecision(9)`           |
| 과학적 표기    | `%e`             | `scientific`                         |
| 기본 표기      | `%f`             | `defaultfloat`                       |
| 출력 폭 지정   | `%10d`           | `setw(10)`                           |
| 0 패딩         | `%05d`           | `setw(5) << setfill('0')`            |
| 문자열 출력    | `%s`             | `cout << string`                     |

##📍 정리

C: 문자열 포맷(%d, %lf) 기반 → 빠르고 직관적

C++: 스트림 조작자(setw, setprecision) 기반 → 가독성, 유연성 좋음

백준/알고리즘 문제 풀이에서는 cout << fixed << setprecision(n)을 표준처럼 사용
