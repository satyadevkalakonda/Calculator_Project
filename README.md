# SDLC Activity Based Learning - scientific calculator
![maths2](https://user-images.githubusercontent.com/36398260/114144855-67df4780-9933-11eb-9ffe-48cf0093065c.jpg)
Build | Code Quality | Unity | [Git Inspector](using github.io option)
------|----------|-------|--------------
[![C/C++ CI - Build Status](https://github.com/satyadevkalakonda/LTTS_Project/actions/workflows/c-cpp.yml/badge.svg)](https://github.com/satyadevkalakonda/LTTS_Project/actions/workflows/c-cpp.yml) | [![Code Quality - Static Code - Cppcheck](https://github.com/satyadevkalakonda/LTTS_Project/actions/workflows/cppcheck.yml/badge.svg)](https://github.com/satyadevkalakonda/LTTS_Project/actions/workflows/cppcheck.yml)[![CodeQuality Dynamic Code Analysis Valgrind](https://github.com/satyadevkalakonda/LTTS_Project/actions/workflows/code_quality_dyanamic.yml/badge.svg)](https://github.com/satyadevkalakonda/LTTS_Project/actions/workflows/code_quality_dyanamic.yml) [![Codacy Badge](https://app.codacy.com/project/badge/Grade/4069fc469af6413ebc2549a891fbf469)](https://www.codacy.com/gh/satyadevkalakonda/LTTS_Project/dashboard?utm_source=github.com&amp;utm_medium=referral&amp;utm_content=satyadevkalakonda/LTTS_Project&amp;utm_campaign=Badge_Grade) [![CI-Coverage](https://github.com/satyadevkalakonda/LTTS_Project/actions/workflows/gcov.yml/badge.svg)](https://github.com/satyadevkalakonda/LTTS_Project/actions/workflows/gcov.yml)| [![Unit Testing - Unity](https://github.com/satyadevkalakonda/LTTS_Project/actions/workflows/unity.yml/badge.svg)](https://github.com/satyadevkalakonda/LTTS_Project/actions/workflows/unity.yml)|[![Contribution Check - Git Inspector](https://github.com/satyadevkalakonda/LTTS_Project/actions/workflows/gitinspector.yml/badge.svg)](https://github.com/satyadevkalakonda/LTTS_Project/actions/workflows/gitinspector.yml)
## Folder Structure
Folder             | Description
-------------------| -----------------------------------------
`1_Requirements`   | Documents detailing requirements and research
`2_Design`         | Documents specifying design details
`3_Implementation` | All code and documentation
`4_Test_plan`      | Documents with test plans and procedures
## Contributors List and Summary
PS No. |  Name   |    Features    | Issuess Raised |Issues Resolved|No Test Cases|Test Case Pass
---------|-------------|----------------|----------------|---------------|-------------|--------------
`260902` | K Satyadev  | SC1, SC2, SC3, SC4, SC5, SC6, SC7| 2   | 2   | 9  | 9     

| No |Feature  |
|--|--|
| SC1 |Calculating the arithmetic operations  |
| SC2 |Calculating the Scientific operations |
| SC3 |Calculating the Trigonometric operations |
| SC4 |Unit Testing the code with various testcases |
| SC5 |Building the all workflows In Git |
| SC6 |Designing each module with readme files |
| SC7 |Gathering all requirments and designing each phase |
## Challenges Faced and How Was It Overcome
| No |Challenge  | Solution
|--|--|--|
| 01 |Resource unavailable while using system commands  | Uninstalled MacAfee anti-virus  |
| 02 | Make file not working even after following all steps  |renamed Mingw/bin/mingw32-make.exe to Mingw/bin/make.exe  |
# Usage Of the Project
```sh
# For Building the main application
make create
# For Running the main application
make run
# For Building the test file
make create_test
# For Running the test file
make run_test
```
