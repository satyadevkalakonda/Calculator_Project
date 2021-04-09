files= src/func_add.c\
src/func_sub.c\
src/func_mul.c\
src/func_div.c\
src/func_log.c\
src/func_power.c\
src/func_sqrt.c\
src/func_arthmetic_menu.c\
src/func_main_menu.c\
src/func_scientific_menu.c\

inc_h=inc

create: $(files) project_main.c
	gcc -I $(inc_h) $(files) project_main.c -o final.exe
run:final.exe
	final.exe
