

#ifndef LIBLOGGER_H
#define LIBLOGGER_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>
#include <unistd.h>
#include <pthread.h>
#include <mqueue.h>

#include <sstream>
#include <string>
#include <string.h>
#include <list>
#include <map>
#include <memory>
#include <exception>
#include <functional>
#include <regex>

#include <liblogger/LogException.h>
#include <liblogger/LogMutex.h>
#include <liblogger/LogType.h>
#include <liblogger/ILogger.h>
#include <liblogger/ILogFilter.h>
#include <liblogger/Logger.h>
#include <liblogger/LogManager.h>
#include <liblogger/LogManagerScopedLock.h>
#include <liblogger/LogStdout.h>
#include <liblogger/LogStdoutColor.h>
#include <liblogger/LogStderr.h>
#include <liblogger/LogSyslog.h>
#include <liblogger/LogFile.h>
#include <liblogger/LogFileHourly.h>
#include <liblogger/LogFileDaily.h>
#include <liblogger/LogPipe.h>
#include <liblogger/LogCallBack.h>
#include <liblogger/LogFunction.h>
#include <liblogger/LogTail.h>
#include <liblogger/LogTailIdx.h>
#include <liblogger/LogUdp.h>
#include <liblogger/LogTcpServer.h>
#include <liblogger/LogUnixServer.h>
#include <liblogger/LogMQ.h>

#include <liblogger/LogFilterType.h>
#include <liblogger/LogFilterDup.h>
#include <liblogger/LogFilterCallBack.h>
#include <liblogger/LogFilterFunction.h>
#include <liblogger/LogFilterContains.h>
#include <liblogger/LogFilterRegex.h>

#include <liblogger/Trace.h>
#include <liblogger/TraceLock.h>
#include <liblogger/ProxyLogger.h>

#include <liblogger/StreamLogger.h>

//For CPP StreamLogger
#define LOGGER liblogger::GetStreamLogger()

#endif

