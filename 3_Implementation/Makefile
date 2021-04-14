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

#variables declaration

inc_h=inc
inc_uh= unity
files_u= unity/unity.c
test_u= test/test_project.c

#Taking extension according to the OS
ifdef OS
   EXEC = exe
else
   ifeq ($(shell uname), Linux)
	  EXEC = out -lm
   endif
endif 

#Taking extension according to the OS
ifdef OS
   EXEC_T = final_test.exe
else
   ifeq ($(shell uname), Linux)
	  EXEC_T = ./final_test.out
   endif
endif 

#command to bulild the application

create: $(files) project_main.c
	gcc -I $(inc_h)  $(files)  project_main.c -o final.$(EXEC)

#command to run the application
run:final.$(EXEC)
	final.$(EXEC)

#command to analyaze the code dynamically
valgrind:
	valgrind ./final.$(EXEC)

#command to build the test application with unity
create_test: $(files) $(test_u) 
	gcc -I $(inc_h) -I $(inc_uh) $(files) $(files_u) $(test_u)  -o final_test.$(EXEC)

#command to run the test application
run_test:final_test.$(EXEC)
		 $(EXEC_T)

#command to check the code coverage
coverageCheck:
	g++ -fprofile-arcs -ftest-coverage -fPIC -O0 -I $(inc_h) -I $(inc_uh) $(files) $(files_u) $(test_u) -o TEST_OUTPUT.out
	./TEST_OUTPUT.out

#command to clean the files
clean:
	del *.$(EXEC)
