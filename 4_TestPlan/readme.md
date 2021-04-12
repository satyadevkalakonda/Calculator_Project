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
|  L_01       |Performing Arthmetic operation **'+'** |H_01|(200,100)|300|300|Requirement based |
|  L_02       |Performing Arthmetic operation **'+'**|H_01|(20*2,-9+5)|36|36|Scenario based|
|  L_03       |Performing Arthmetic operation **'+'**|H_01|(-99999,99999)|0|0|Boundary based|
|  L_04       |Performing Arthmetic operation **'-'** |H_01|(15,5)|20|20|Requirement based |
|  L_05       |Performing Arthmetic operation **'-'**|H_01|(15*82,-5+28)|1207|1207|Scenario based|
|  L_06       |Performing Arthmetic operation **'-'**|H_01|(-888889,77778)|11111|11111|Boundary based|
|  L_07       |Performing Arthmetic operation **'*'** |H_01|(159,286)|45474|45474|Requirement based |
|  L_08       |Performing Arthmetic operation **'*'**|H_01|(-15,-26)|390|390|Scenario based|
|  L_09       |Performing Arthmetic operation **'*'**|H_01|(159999,286666)|-126667|-126667|Boundary based|
