# TEST PLAN:

## Table: High level test plan

| **Test ID** | **Description**                                              | **Exp I/P** | **Exp O/P** | **Actual Out** |**Type Of Test**  |    
|-------------|--------------------------------------------------------------|------------|-------------|----------------|------------------|
|  H_01a       |Menu and Submenu| Valid Input |correct switch case invoked| PASS | Boundary based|
|  H_01b       |Cheking for correct inputs| Inputs within specified range |runs next function| PASS | Boundary based|
|  H_02        |process function calculation| driver program passes inputs   | non-zero output | PASS |requirement based |
|  H-03        | Checking for Output | structure or integer | Display Equivalent impedance | PASS | Requirement based |


## Table: Low level test plan

| **Test ID** |  **HLT_ID** | **Description**                                              | **Exp IN** | **Exp OUT** | **Actual Out** |**Type Of Test**  |    
|-------------|--------------------------------------------------------------|------------|-------------|----------------|------------------|--------|
|  L_01       | H_01a | Input for Menu |1/2/3/4/5/6 | Proceed to submenu | PASS | Scenario based |
|  L_02       | H_01a | Input for Submenu | NA or 1/2 | Proceed to the respective function | PASS | Scenario based |
|  L_03       | H_01b | Validates the number of elemets |  Non-Zero | Dynamic Array Declaration | Success | Technical    |
|  L_04       | H_01b | Takes specific element input | Non-Zero | Invokes the reqd function | PASS | Requirement based    |
|  L_05| H_02 | Calculation of respective impedances |  Received from driver program | Non-Zero Value|PASS| Requirement & Technical    |
|  L_06       | H_02 | Calculation of resonant frequency | Non-Zero Struct | Non-Zero value| PASS | Requirement & Boundary based    |
|  L_07       | H_03 | Output from function to driver program |  NA | Non-Zero Value | PASS | Requirement based    |

 