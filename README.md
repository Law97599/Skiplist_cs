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