typedef enum STATES {Idle, Listening, Speaking};
STATES states = Idle;

typedef enum ROLE {Server, Client};
ROLE deviceRole = Client;
    
//const char* ssid = "IOT_TJKT";
//const char* password = "stemsi@merdeka";
//const char* websockets_server_host = "192.168.10.254";
//
const char* ssid = "CUAN15";
const char* password = "23572357";
const char* websockets_server_host = "192.168.18.17";
//
//const char* ssid = "SPEAKER";
//const char* password = "23572357";
//const char* websockets_server_host = "192.168.0.101";

const uint16_t websockets_server_port = 8888;
