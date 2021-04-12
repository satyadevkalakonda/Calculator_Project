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
src/func_sin.c\
src/func_cos.c\
src/func_tan.c\
src/func_trigo_menu.c\

inc_h=inc
inc_uh= unity
files_u= unity/unity.c
test_u= test/test_project.c

ifdef OS
   EXEC = exe
else
   ifeq ($(shell uname), Linux)
	  EXEC = out -lm
   endif
endif 

ifdef OS
   EXEC_T = exe
else
   ifeq ($(shell uname), Linux)
	  EXEC_T = out
   endif
endif 

create: $(files) project_main.c
	gcc -I $(inc_h)  $(files)  project_main.c -o final.$(EXEC)

run:final.$(EXEC)
	final.$(EXEC)

valgrind:
	valgrind ./final.$(EXEC)

create_test: $(files) $(test_u) 
	gcc -I $(inc_h) -I $(inc_uh) $(files) $(files_u) $(test_u)  -o final_test.$(EXEC)

run_test:final_test.$(EXEC_T)
		 final_test.$(EXEC_T)
clean:
	del *.$(EXEC)
