# 互動式計算機

請撰寫一個計算機程式。此計算機程式可以從鍵盤讀進一連串的數字與對應的運算，輸出最後的運算結果。

### 輸入格式：
- 第一行是一個整數，代表初始數值。接下來有不一定行數的兩個一空白隔開的數字，代表要運算的數值以及要進行的運算。

### 輸出格式：
- 一個整數。

### 運算對應的數值如下表：

| 運算     | 數值 |
|----------|------|
| 加法     | 0    |
| 減法     | 1    |
| 乘法     | 2    |
| 除法     | 3    |
| 取餘數   | 4    |

如果讀到的運算不是上述合法數值（不是 0, 1, 2, 3, 4），不需做任何運算。除法以根據 C 語言整數除法來做（除不盡的部分無條件捨去）。

### 提示：
- 可檢查 `scanf` 傳回的數值，判斷是否已經讀完所有輸入。
- 使用 `switch-case`，沒有做任何動作，放在最後的 `default` 要整個移除。

### Input Example 1

如果一開始數值是 20。然後要進行的運算是先加 5，然後乘以 10，接著減去 3，然後除以 2，最後除以 6 取餘數。則輸入是：
```
20
5 0
10 2
3 1
2 3
6 4
```

### Output Example 1

20 加 5 等於 25，乘以 10 之後等於 250，減去 3 之後等於 247，除以 2 之後等於 123，最後除以 6 的餘數是 3。因此輸出是：

```
3
```

### Input Example 2

如果輸入出現未定義的運算，如下例：
```
20
4 -8
5 0
6 10
10 2
3 1
7 5
2 3
6 4
```
### Output Example 2

上述的三行：`4 -8`, `6 10`, `7 5`，第二個代表運算的數值都沒有定義。可以跳過。結果和範例一的運算一樣。因此輸出一樣是：
```
3
```
