
#include <stdlib.h>
#include <syslog.h>

#include "liblogger.h"



void LogSyslog::GetName(std::string *str) {
	*str = "Syslog";
}

void LogSyslog::GetDesc(std::string *str) {
	*str = "Logs to Syslog";
}

void LogSyslog::Log(LogType Type, const std::string str) {
	switch(Type) {
		case LOGGER_DEBUG:
			syslog(LOG_DEBUG, "%s", str.c_str());
			break;
		case LOGGER_INFO:
			syslog(LOG_INFO, "%s", str.c_str());			
			break;
		case LOGGER_ERR:
			syslog(LOG_ERR, "%s", str.c_str());
		case LOGGER_ALERT:
			syslog(LOG_ALERT, "%s", str.c_str());
			break;
		default:
			abort();
			break;
	}
}

