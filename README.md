# NVS component

Components for NVS storage Espressif ESP32 ESP-IDF framework 

## Usage
Clone this repository somewhere, e.g.:   
`
cd ~/myprojects/components    
git clone https://github.com/SergeyKupavtsev/nvs_component.git
`

If save struct use char[] _NOT char*_   

white_check_mark Correct       
`
typedef struct {    
    char ssid[40];    
    char passwrod[40];       
}wifi_opt_s;    
`