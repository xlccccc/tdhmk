## Dubug

大多数问题都随着clion的报错用搜索引擎解决掉了

有少部分编译失败的地方

### ①

在第三题中的static变量

```cpp
    static int count;
    static int totalScore;
```

不用**const**，在定义的时候是无法初始化的

**const**很明显不符合要求

而不初始化就无法编译

在经过搜索后发现

```cpp
int Student::count = 0;
int Student::totalScore = 0;
```

要在类的实现中用此方法初始化，不知道和直接初始化有什么太大的区别。

### ②

在第四题中，写入文件需要用到矩阵数据

而矩阵是**private**的

对于txt文件，我为了避免使用友元

```cpp
std::string Matrix::getMatrixString() {
    std::string result;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            result += std::to_string(matrix[i][j]) + " ";
        }
        result += "\n";
    }
    return result;
}
```

写了一个这样的函数

而在二进制的写入中，**write**函数要求的是**char***

如果是一个字符一个字符写入是可以的，但这样读的时候就会很麻烦

并没有想到什么好的办法，最后还是用了友元来访问了矩阵数据从而实现写入二进制文件