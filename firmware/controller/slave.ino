#include <esp_now.h>
#include <esp_wifi.h>
#include <WiFi.h>

// USE XIAO ESP32-S3 AS THE SLAVE


typedef struct struct_message {
  char a[32];
  int b;
  float c;
  bool d;
} struct_message;

struct_message myData;

void readMacAddress(){
  uint8_t baseMac[6];
  esp_err_t ret = esp_wifi_get_mac(WIFI_IF_STA, baseMac);
  if (ret == ESP_OK) {
    Serial.printf("%02x:%02x:%02x:%02x:%02x:%02x\n",
    baseMac[0], baseMac[1], baseMac[2],
    baseMac[3], baseMac[4], baseMac[5]);
  } else {
    Serial.println("Failed to read MAC address");
  }
}

void OnDataRecv(const esp_now_recv_info_t *recv_info, const uint8_t *incomingData, int len) {
  memcpy(&myData, incomingData, sizeof(myData));
  Serial.print("Bytes received: ");
  Serial.println(len);
  Serial.print("Char: ");
  Serial.println(myData.a);
  Serial.print("Int: ");
  Serial.println(myData.b);
  Serial.print("Float: ");
  Serial.println(myData.c);
  Serial.print("Bool: ");
  Serial.println(myData.d);
  Serial.println();
}

void setup() {
  Serial.begin(115200);
  delay(100);
  
  WiFi.mode(WIFI_STA);
  WiFi.STA.begin();
  
  esp_wifi_set_channel(2, WIFI_SECOND_CHAN_NONE);
  delay(100);
  
  if (esp_now_init() != ESP_OK) {
    Serial.println("Error initializing ESP-NOW");
    return;
  }
  
  readMacAddress();
  
  esp_now_register_recv_cb(OnDataRecv);
  
  Serial.println("Slave setup complete");
}

void loop() {
  Serial.println("Slave waiting...");
  delay(1000);
}
