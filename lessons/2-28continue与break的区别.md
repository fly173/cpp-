# 比较 break 和 continue 的不同用法

在 C++ 中，`break` 和 `continue` 都用于控制循环流程，但作用范围不同。

## 一、`break` 的用法

`break` 会立刻结束当前整个循环（或结束 `switch` 语句）。

### 示例：遇到 5 就退出循环

```cpp
#include <iostream>
using namespace std;

int main() {
	for (int i = 0; i < 10; i++) {
		if (i == 5) {
			break; // 直接结束整个 for 循环
		}
		cout << i << " ";
	}
	return 0;
}
```

输出：

```text
0 1 2 3 4
```

## 二、`continue` 的用法

`continue` 会跳过本次循环剩余代码，然后进入下一次循环。

### 示例：跳过偶数，只输出奇数

```cpp
#include <iostream>
using namespace std;

int main() {
	for (int i = 0; i < 10; i++) {
		if (i % 2 == 0) {
			continue; // 跳过当前这次循环后面的语句
		}
		cout << i << " ";
	}
	return 0;
}
```

输出：

```text
1 3 5 7 9
```

## 三、核心区别

| 对比项 | `break` | `continue` |
|---|---|---|
| 作用 | 结束整个循环 | 只跳过当前这一次循环 |
| 执行结果 | 循环不再继续 | 循环继续下一次 |
| 常见场景 | 提前终止（找到目标就退出） | 过滤某些不需要处理的数据 |

## 四、一句话记忆

- `break`：彻底退出循环。
- `continue`：跳过这次，继续下次。
