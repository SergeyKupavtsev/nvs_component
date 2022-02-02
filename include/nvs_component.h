

#ifndef __CUSTOM_NVS_H__
#define __CUSTOM_NVS_H__
#include "freertos/FreeRTOS.h"
#include "nvs_flash.h"
#include "nvs.h"

/**
 * @brief   Инициализация NVS хранилища
 */
void nvs_init(void);

/**
 * @brief   Запись значения uint8_t в nvs 
 * 
 * @param key   ключ для хранения
 * @param value значение
 * @return esp_err_t результат
 */
esp_err_t nvs_write_u8(const char *key, uint8_t write_value);
/**
 * @brief   Чтение значения uint8_t в nvs 
 * 
 * @param key   ключ для хранения
 * @param value указатель на значение
 * @return esp_err_t результат
 */
esp_err_t nvs_read_u8(const char *key, uint8_t *read_value);
/**
 * @brief   Запись значения uint16_t в nvs 
 * 
 * @param key   ключ для хранения
 * @param value значение
 * @return esp_err_t результат
 */
esp_err_t nvs_write_u16(const char *key, uint16_t write_value);
/**
 * @brief   Чтение значения uint16_t в nvs 
 * 
 * @param key   ключ для хранения
 * @param value указатель на значение
 * @return esp_err_t результат
 */
esp_err_t nvs_read_u16(const char *key, uint16_t *read_value);
/**
 * @brief   Запись значения int8_t в nvs 
 * 
 * @param key   ключ для хранения
 * @param value значение
 * @return esp_err_t результат
 */
esp_err_t nvs_write_i8(const char *key, int8_t write_value);
/**
 * @brief   Чтение значения int8_t в nvs 
 * 
 * @param key   ключ для хранения
 * @param value указатель на значение
 * @return esp_err_t результат
 */
esp_err_t nvs_read_i8(const char *key, int8_t *read_value);
/**
 * @brief   Запись значения int16_t в nvs 
 * 
 * @param key   ключ для хранения
 * @param value значение
 * @return esp_err_t результат
 */
esp_err_t nvs_write_i16(const char *key, int16_t write_value);
/**
 * @brief   Чтение значения int16_t в nvs 
 * 
 * @param key   ключ для хранения
 * @param value указатель на значение
 * @return esp_err_t результат
 */
esp_err_t nvs_read_i16(const char *key, int16_t *read_str);
/**
 * @brief   Запись значения char* в nvs 
 * 
 * @param key   ключ для хранения
 * @param value значение
 * @return esp_err_t результат
 */
esp_err_t nvs_write_str(const char *key, const char *write_str);
/**
 * @brief   Чтение значения char* в nvs 
 * 
 * @param key   ключ для хранения
 * @param value значение
 * @return esp_err_t результат
 */
esp_err_t nvs_read_str(const char *key, char **read_value);
/**
 * @brief   Запись структуры в nvs 
 * 
 * @param key   ключ для хранения
 * @param value значение
 * @return esp_err_t результат
 */
esp_err_t write_struct(const char *key, void *write_struct, size_t size);
/**
 * @brief   Чтение структуры в nvs 
 * 
 * @param key   ключ для хранения
 * @param value значение
 * @return esp_err_t результат
 */
esp_err_t read_struct(const char *key, void **read_struct, size_t size);

#endif /* __CUSTOM_NVS_H__ */
