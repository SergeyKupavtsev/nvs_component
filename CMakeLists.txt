set(component_srcs "./nvs_component.c")

idf_component_register(SRCS "${component_srcs}"
                       INCLUDE_DIRS "include"
                       REQUIRES nvs_flash
                      )
