# TEST PLAN:

## Table no: High level test plan

| **Test ID** | **Description**                                              | **Exp I/P** | **Exp O/P** | **Actual Out** | 
|-------------|--------------------------------------------------------------|-------------|-------------|----------------|
|  H_01       |Calling Arthmetic Menu|arthmetic_menu()|TRUE|TRUE|
|  H_02       |Calling Scientific Menu|scientific_menu()|TRUE|TRUE|
|  H_03       |Calling Trigonometric Menu|trigonometric_menu|TRUE|TRUE|

## Table no: Low level test plan

| **Test ID** | **Description**                                              |HL ID| **Exp IN** | **Exp OUT** | **Actual Out** |**Type Of Test**  |    
|-------------|--------------------------------------------------------------|-----|------------|-------------|------------------|------------------|
|  L_01       |Arthmetic operation **'+'** |H_01|(200,100)|300|300|Requirement based |
|  L_02       |Arthmetic operation **'+'**|H_01|(20*2,-9+5)|36|36|Scenario based|
|  L_03       |Arthmetic operation **'+'**|H_01|(-99999,99999)|0|0|Boundary based|
