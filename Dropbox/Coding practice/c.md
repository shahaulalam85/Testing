## 1️⃣ Frequency Counting using map
```cpp

    map<long long, long long> frequency_map;
    for (int i = 0; i < n; i++) 
        frequency_map[a[i]]++;

```
## How it works
- map stores key → value
- key = number
- value = frequency

## 2️⃣ frequency_map.size()
```cpp

    if (frequency_map.size() >= 3)
    // Count distinct elements
    [1,1,2,2] → size = 2
    [1,2,3]   → size = 3


```