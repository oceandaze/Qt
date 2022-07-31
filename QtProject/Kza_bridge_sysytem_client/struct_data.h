#ifndef STRUCT_DATA_H
#define STRUCT_DATA_H

enum TypeInfo
{
    LOGIN_REQ,// 登录请求
    LOGIN_RES,// 登录响应

    LOG_REQ,// 日志请求
    LOG_RES,// 日志响应

    HEART_CHECK_REQ,//心跳请求
    HEART_CHECK_RES,//心跳响应

};
struct Head
{
    int type;
    int len;


};

struct LogReq
{
    Head head;
    int level;// 日志级别
    char timeBegin[32];
    char timeEnd[32];

    LogReq()
    {
        head.type = LOG_REQ;
        head.len = sizeof(LogReq);
    }
};

struct LogInfo
{
    int id;
    int level;
    char desc[64];
    char func[32];
    int lineNum;
    char logTime[32];
    char userName[32];
};

struct LogRes // 日志响应，会根据不同查询条件得到不同结果
{
    Head head;
    LogInfo loginfo[0];//柔型数组

};

struct HeartCheckReq
{
    Head head;
    HeartCheckReq(){
        head.type=HEART_CHECK_REQ;
        head.len=sizeof(HeartCheckReq);
    }
};

struct HeartCheckRes
{
    Head head;
    HeartCheckRes(){
        head.type=HEART_CHECK_RES;
        head.len=sizeof(HeartCheckRes);
    }
};





#endif // STRUCT_DATA_H
