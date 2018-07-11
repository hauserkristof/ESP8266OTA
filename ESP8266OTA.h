#ifndef __ESP8266_OTA_H
#define __ESP8266_OTA_H

#include "UpdaterUI.h"

class ESP8266WebServer;

class ESP8266OTA
{
  private:
    bool _serial_output;
    ESP8266WebServer *_server;
    char * _username;
    char * _password;
    bool _authenticated;

    String _title;
    String _banner;
    String _build;
    String _branch;
    String _deviceInfo;
    String _footer;

  public:
    ESP8266OTA(bool serial_debug=false);

    void setup(ESP8266WebServer *server);

    void setup(ESP8266WebServer *server, const char * path);

    void setup(ESP8266WebServer *server, const char * username, const char * password);

    void setup(ESP8266WebServer *server, const char * path, const char * username, const char * password);

    void setTitle(String title);
    void setBanner(String banner);
    void setBuild(String build);
    void setBranch(String branch);
    void setDeviceInfo(String deviceInfo);
    void setFooter(String footer);
    void setUpdaterUi(String title,String banner,String build,String branch,String deviceInfo,String footer);
    void updatePasswd(const char *newPasswd);
};
#endif
