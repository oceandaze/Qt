#ifndef STRUCT_DATA_H
#define STRUCT_DATA_H
enum TypeInfo
{
    LOGIN_REQ,//登录请求
    LOGIN_RES,//登录响应


    LOG_REQ,//日志请求
    LOG_RES,//日志响应

};

struct Head {
   int type;
   int len;
};

struct Log_Req
{
    Head head;
    int level; // 日志级别
    char timeBegin[32];
    char timeEnd[32];
    Log_Req() {
        head.type = LOG_REQ;
        head.len = sizeof(Log_Req);
    }
};

struct logInfo
{
    int id;
    int level;
    char desc[64];
    char func[32];
    int lineNum;
    char logTime[32];
    char userName[32];
};
struct LogRes //日志响应，会根据不同查询条件得到不同结果
{
    Head head;
    logInfo logInfo[0];//柔性数组
};

#endif // STRUCT_DATA_H





