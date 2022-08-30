/*
 * @Author: JasonLaw
 * @Date: 2022-07-20 14:57:45
 * @LastEditors: JasonLaw
 * @LastEditTime: 2022-07-24 17:42:04
 * @FilePath: /Skiplist_cs/Skiplist_server/src/Server.h
 * @Description:
 */
#ifndef MINIREDIS_SERVER_H

#include <arpa/inet.h>
#include <sys/socket.h>
#include <sys/types.h>

#include <iostream>
#include <map>
#include <string>

#include "Skiplist.h"
using namespace std;
#define MINIREDIS_SERVER_H

// 数据库的个数
const int dbNum = 16;

// 定义在redis中需要使用到的数据结构
// 使用STL中的map作为dict，后期可能会自己造轮子
// 数据库使用一个dict表示
typedef Skiplist<string, string> myDB;

class Server;
class Client;
// 对命令的函数指针进行typedef
// 用命令的函数指针表示一个命令集合
typedef void (*CommandFun)(Server*, Client*, string, string&, bool&);

// 服务端
class Server {
 public:
  int sListen;
  sockaddr_in local;
  //  端口号
  int port;
  // 服务端存储资源的数据库
  // 数据库数组 每个元素是一个MyDB类型的指针
  myDB* DB[dbNum];
  // 命令集合
  // 用一个map表示存储在服务端的命令集合
  // key为命令的名字，value为一个指向函
  // 数的指针，根据命令的名字指向对应的函数
  map<string, CommandFun> Commands;
};

// 客户端
class Client {
 public:
  Client(){};
  int sClient;
  sockaddr_in my_client;
  // 客户端对应的数据库
  myDB db;
};

#endif