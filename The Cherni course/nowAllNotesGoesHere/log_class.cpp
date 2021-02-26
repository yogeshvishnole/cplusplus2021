#include <iostream>
using namespace std;

class Log
{

private:
    int m_logLevel = LevelInfo;

public:
    // const int logLevelError = 0;
    // const int logLevelWarn = 1;
    // const int logLevelInfo = 2;
    enum Level
    {
        LevelError = 0,
        LevelWarn,
        LevelInfo
    };

    void setLevel(int level)
    {
        m_logLevel = level;
    }

    void error(const char *message)
    {
        if (m_logLevel >= LevelError)
            std::cout << "[ERROR]: " << message << endl;
    }

    void warn(const char *message)
    {
        if (m_logLevel >= LevelWarn)
            std::cout << "[WARNING]: " << message << endl;
    }

    void info(const char *message)
    {
        if (m_logLevel >= LevelInfo)
            std::cout << "[INFO]: " << message << endl;
    }
};

int main()
{

    Log log;
    log.setLevel(Log::LevelWarn);
    log.warn("Hello");
    log.error("Hello");
    log.info("Hello");
}