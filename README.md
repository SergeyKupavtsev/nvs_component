# NVS component

Components for NVS storage Espressif ESP32 ESP-IDF framework 

## Example  
[Example of usage component](https://github.com/SergeyKupavtsev/nvs-example)
## Usage
Clone this repository somewhere, e.g.:   
```
cd ~/myprojects/components  
git clone https://github.com/SergeyKupavtsev/nvs_component.git  
```

`
If save struct use char[] *NOT char**  
`  
```

typedef struct {
    char ssid[40];    
    char passwrod[40];       
}wifi_opt_s;    
```  
:white_check_mark: Correct  
---  
## Possible mistakes  
- If after adding component header file fail to find, clean the project build and try again
- If you add component as git submodule, you need make commit or you will get compilation errors   