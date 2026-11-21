#ifndef _VARIANT_ESP32C3_SUPER_MINI_
#define _VARIANT_ESP32C3_SUPER_MINI_

#ifdef __cplusplus
extern "C" {
#endif // __cplusplus

// I2C (Wire) & OLED
#define WIRE_INTERFACES_COUNT (1)
#define I2C_SDA (1)
#define I2C_SCL (0)

#define USE_SSD1306

// GPS
#undef GPS_RX_PIN
#undef GPS_TX_PIN
#define GPS_RX_PIN (20)
#define GPS_TX_PIN (21)

// Button
#define BUTTON_PIN (9) // BOOT button

// LoRa: SX1278 (SX127x family) using the RF95 driver
#define USE_RF95

#define LORA_DIO0 (3)
#define LORA_DIO1 RADIOLIB_NC
#define LORA_RESET (5)
#define LORA_SCK (10)
#define LORA_MISO (6)
#define LORA_MOSI (7)
#define LORA_CS (8)

#ifdef __cplusplus
}
#endif // __cplusplus

#endif /* _VARIANT_ESP32C3_SUPER_MINI_ */
