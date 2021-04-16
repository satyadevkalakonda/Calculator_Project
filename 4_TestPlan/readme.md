# TEST PLAN

## Table no - High level test plan

| **Test ID** | **Description**                                              | **Exp I/P** | **Exp O/P** | **Actual Out** | 
|-------------|--------------------------------------------------------------|-------------|-------------|----------------|
|  H_01       |Calling Arthmetic Menu|arthmetic_menu()|TRUE|TRUE|
|  H_02       |Calling Scientific Menu|scientific_menu()|TRUE|TRUE|
|  H_03       |Calling Trigonometric Menu|trigonometric_menu() |TRUE|TRUE|

## Table no - Low level test plan

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
|  L_10       |Performing Arthmetic operation **'/'** |H_01|(3888,24)|162|162|Requirement based |
|  L_11       |Performing Arthmetic operation **'/'**|H_01|(1,0)|ERROR_DIV_ZERO|ERROR_DIV_ZERO|Scenario based|
|  L_12       |Performing Arthmetic operation **'/'**|H_01|(9999,3)|3333|3333|Boundary based|
|  L_13       |Performing Scientific operation **'Log'**|H_02|(8869)|3.95|3.95|Requirment based|
|  L_14       |Performing Scientific operation **'Log'**|H_02|(124)|3.95|2.09|Scenario based|
|  L_15       |Performing Scientific operation **'Log'**|H_02|(124)|3.95|2.09|Scenario based|
|  L_16       |Performing Scientific operation **'sqrt'**|H_02|(24)|4.09|4.09|Requirment based|
|  L_17       |Performing Scientific operation **'sqrt'**|H_02|(45*32)|37.95|37.95|Scenario based|
|  L_18       |Performing Scientific operation **'sqrt'**|H_02|(9999)|99|99|Boundary based|
|  L_19       |Performing Scientific operation **'power'**|H_02|(5,20)|95367433551872|95367433551872|Requirment based|
|  L_20       |Performing Scientific operation **'power'**|H_02|(2*2,4)|256|256|Boundary based|
|  L_21       |Performing Trignometric operation **'Sin'**|H_03|(10)|0.17|0.17|Requirment based|
|  L_22       |Performing Trignometric operation **'Sin'**|H_03|(1000)|-0.98|-0.98|Boundary based|
|  L_23       |Performing Trignometric operation **'Cos'**|H_03|(9)|0.99|0.99|Requirment based|
|  L_24       |Performing Trignometric operation **'Cos'**|H_03|(8888)|-0.37|-0.37|Boundary based|
|  L_25       |Performing Trignometric operation **'Tan'**|H_03|(6)|0.11|0.11|Requirment based|
|  L_26       |Performing Trignometric operation **'Tan'**|H_03|(5555)|-0.47|-0.47|Boundary based|
