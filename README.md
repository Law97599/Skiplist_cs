<!--
 * @Author: JasonLaw
 * @Date: 2022-07-24 17:01:42
 * @LastEditors: JasonLaw
 * @LastEditTime: 2022-07-29 15:17:31
 * @FilePath: /Skiplist_cs/README.md
 * @Description: 
-->
# 基于跳跃表的CS架构数据库
## 项目描述
本项目是基于跳表实现的 C/S 架构数据库，使用 C++ 实现。服务器拥有 16 个数据库，最多支持 16 台客户端连接服务器，每个客户端有单独的数据库。服务器可以对建立连接的客户端进行管理。
## 项目亮点
- 使用 Socket 编程实现服务端与客户端之间的通信；
- 使用 C++ 实现基于跳表实现的轻量级键值型存储引擎。具有插入数据、删除数据、查询数据、数据持久化、文件加载数据等功能;
- 利用 C++ 类模板的特性实现跳表数据库底层数据结构，支持存储 string，int 等基本数据类型，也可存储自定义的数据类型。
- 对存储引擎进行性能测试。在随机写读情况下，该引擎每秒可处理读写请求数（QPS）超过 20w。
## 项目结构
```
.
├── README.md
├── Skiplist_client
│   ├── bin
│   │   ├── client
│   │   └── CMakeLists.txt
│   ├── build
│   ├── CMakeLists.txt
│   └── src
│       ├── Client.cpp
│       ├── CMakeLists.txt
│       └── Command.h
└── Skiplist_server
    ├── bin
    │   ├── CMakeLists.txt
    │   └── server
    ├── build
    ├── CMakeLists.txt
    └── src
        ├── CMakeLists.txt
        ├── Command.h
        ├── Node.h
        ├── Server.cpp
        ├── Server.h
        └── Skiplist.h
```

## 项目运行
### 编译
```
# 编译服务器
cd ./Skiplist_server/build
cmake ..
make

# 编译客户端
cd ./Skiplist_client/build
cmake ..
make
```
### 运行
```
./Skiplist_server/bin/server # 运行服务器
./Skiplist_client/bin/client # 运行客户端
```