#include "nvs_component.h"

#define DEBUGGING_NVS 1
#if DEBUGGING_NVS == 0
#define DEBUG_NVS(format, ...)
#else
#define DEBUG_NVS(message, ...) printf(message, ##__VA_ARGS__)
#endif

esp_err_t nvs_write_str(const char *key, const char *write_value)
{

    nvs_handle_t handle;
    esp_err_t err;
    err = nvs_open("storage", NVS_READWRITE, &handle);
    DEBUG_NVS("[NVS] Save %s = %s \n", key, write_value);
    err = nvs_set_str(handle, key, write_value);
    err = nvs_commit(handle);
    DEBUG_NVS((err != ESP_OK) ? "[NVS] Write %s = %s  Failed!\n" : "[NVS] Write %s = %s Done\n", key, write_value);
    nvs_close(handle);
    return err;
}

esp_err_t nvs_read_str(const char *key, char **read_value)
{
    esp_err_t err;
    nvs_handle_t handle;
    err = nvs_open("storage", NVS_READWRITE, &handle);
    size_t required_size;

    nvs_get_str(handle, key, NULL, &required_size);
    char *data = malloc(required_size);
    err = nvs_get_str(handle, key, data, &required_size);
    *read_value = data;
    switch (err)
    {
    case ESP_OK:
        DEBUG_NVS("[NVS] Read %s = %s\n", key, *read_value);
        break;
    case ESP_ERR_NVS_NOT_FOUND:
        DEBUG_NVS("[NVS] The value %s is not initialized yet!\n", key);
        break;
    default:
        DEBUG_NVS("[NVS] Error (%s) reading!\n", esp_err_to_name(err));
    }
    nvs_close(handle);
    return err;
}

esp_err_t nvs_write_u8(const char *key, uint8_t write_value)
{
    nvs_handle_t handle;
    esp_err_t err;
    err = nvs_open("storage", NVS_READWRITE, &handle);
    err = nvs_set_u8(handle, key, write_value);

    err = nvs_commit(handle);
    DEBUG_NVS((err != ESP_OK) ? "[NVS] Write %s = %i Failed!\n" : "[NVS] Write %s = %i Done\n", key, write_value);
    nvs_close(handle);
    return err;
}

esp_err_t nvs_read_u8(const char *key, uint8_t *read_value)
{
    esp_err_t err;
    nvs_handle_t handle;
    err = nvs_open("storage", NVS_READWRITE, &handle);
    err = nvs_get_u8(handle, key, read_value);
    switch (err)
    {
    case ESP_OK:
        DEBUG_NVS("[NVS] Read %s = %d\n", key, *read_value);
        break;
    case ESP_ERR_NVS_NOT_FOUND:
        DEBUG_NVS("[NVS] The value %s is not initialized yet!\n", key);
        break;
    default:
        DEBUG_NVS("[NVS] Error (%s) reading!\n", esp_err_to_name(err));
    }
    nvs_close(handle);
    return err;
}

esp_err_t nvs_write_u16(const char *key, uint16_t write_value)
{
    nvs_handle_t handle;
    esp_err_t err;
    err = nvs_open("storage", NVS_READWRITE, &handle);
    err = nvs_set_u16(handle, key, write_value);

    err = nvs_commit(handle);
    DEBUG_NVS((err != ESP_OK) ? "[NVS] Write %s = %i Failed!\n" : "[NVS] Write %s = %i Done\n", key, write_value);
    nvs_close(handle);
    return err;
}

esp_err_t nvs_read_u16(const char *key, uint16_t *read_value)
{
    esp_err_t err;
    nvs_handle_t handle;
    err = nvs_open("storage", NVS_READWRITE, &handle);
    err = nvs_get_u16(handle, key, read_value);
    switch (err)
    {
    case ESP_OK:
        DEBUG_NVS("[NVS] Read %s = %d\n", key, *read_value);
        break;
    case ESP_ERR_NVS_NOT_FOUND:
        DEBUG_NVS("[NVS] The value %s is not initialized yet!\n", key);
        break;
    default:
        DEBUG_NVS("[NVS] Error (%s) reading!\n", esp_err_to_name(err));
    }
    nvs_close(handle);
    return err;
}

esp_err_t nvs_write_i8(const char *key, int8_t write_value)
{
    nvs_handle_t handle;
    esp_err_t err;
    err = nvs_open("storage", NVS_READWRITE, &handle);
    err = nvs_set_i8(handle, key, write_value);

    err = nvs_commit(handle);
    DEBUG_NVS((err != ESP_OK) ? "[NVS] Write %s = %i Failed!\n" : "[NVS] Write %s = %i Done\n", key, write_value);
    nvs_close(handle);
    return err;
}

esp_err_t nvs_read_i8(const char *key, int8_t *read_value)
{
    esp_err_t err;
    nvs_handle_t handle;
    err = nvs_open("storage", NVS_READWRITE, &handle);
    err = nvs_get_i8(handle, key, read_value);
    switch (err)
    {
    case ESP_OK:
        DEBUG_NVS("[NVS] Read %s = %d\n", key, *read_value);
        break;
    case ESP_ERR_NVS_NOT_FOUND:
        DEBUG_NVS("[NVS] The value %s is not initialized yet!\n", key);
        break;
    default:
        DEBUG_NVS("[NVS] Error (%s) reading!\n", esp_err_to_name(err));
    }
    nvs_close(handle);
    return err;
}

esp_err_t nvs_write_i16(const char *key, int16_t write_value)
{
    nvs_handle_t handle;
    esp_err_t err;
    err = nvs_open("storage", NVS_READWRITE, &handle);
    err = nvs_set_i16(handle, key, write_value);
    err = nvs_commit(handle);
    DEBUG_NVS((err != ESP_OK) ? "[NVS] Write %s = %i Failed!\n" : "[NVS] Write %s = %i Done\n", key, write_value);
    nvs_close(handle);
    return err;
}

esp_err_t nvs_read_i16(const char *key, int16_t *read_value)
{
    esp_err_t err;
    nvs_handle_t handle;
    err = nvs_open("storage", NVS_READWRITE, &handle);
    err = nvs_get_i16(handle, key, read_value);
    switch (err)
    {
    case ESP_OK:
        DEBUG_NVS("[NVS] Read %s = %d\n", key, *read_value);
        break;
    case ESP_ERR_NVS_NOT_FOUND:
        DEBUG_NVS("[NVS] The value %s is not initialized yet!\n", key);
        break;
    default:
        DEBUG_NVS("[NVS] Error (%s) reading!\n", esp_err_to_name(err));
    }
    nvs_close(handle);
    return err;
}

esp_err_t write_struct(const char *key, void *write_struct, size_t size)
{
    nvs_handle_t handle;
    esp_err_t err;
    err = nvs_open("storage", NVS_READWRITE, &handle);
    err = nvs_set_blob(handle, key, write_struct, size);
    err = nvs_commit(handle);
    DEBUG_NVS((err != ESP_OK) ? "[NVS] Write %s struct = Failed!\n" : "[NVS] Write %s struct  = Done\n", key);
    nvs_close(handle);
    return err;
}

esp_err_t read_struct(const char *key, void **read_struct, size_t size)
{
    nvs_handle_t handle;
    esp_err_t err;

    err = nvs_open("storage", NVS_READWRITE, &handle);
    err = nvs_get_blob(handle, key, *read_struct, &size);

    DEBUG_NVS((err != ESP_OK) ? "[NVS] Read %s struct = Failed!\n" : "[NVS] Read %s struct  = Done\n", key);
    nvs_close(handle);
    return err;
}

esp_err_t nvs_init(void)
{
    esp_err_t ret = nvs_flash_init();
    if (ret == ESP_ERR_NVS_NO_FREE_PAGES || ret == ESP_ERR_NVS_NEW_VERSION_FOUND)
    {
        ESP_ERROR_CHECK(nvs_flash_erase());
        ret = nvs_flash_init();
    }
    ESP_ERROR_CHECK(ret);
    return ret;
}
