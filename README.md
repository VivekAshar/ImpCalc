# SDLC Activity Based Learning: Impedance Calculator
![Banner](https://github.com/ar4240/ImpCalc/blob/main/1_Requirements/logo1.jpeg)
Visit [Pages for Report -optional](using github.io option)

Build | Code Quality | Unity | [Git Inspector](using github.io option)
------|----------|-------|--------------
[![C/C++ CI](https://github.com/ar4240/ImpCalc/actions/workflows/c-cpp.yml/badge.svg)](https://github.com/ar4240/ImpCalc/actions/workflows/c-cpp.yml) | [![Static Cppcheck](https://github.com/ar4240/ImpCalc/actions/workflows/cppcheck.yml/badge.svg)](https://github.com/ar4240/ImpCalc/actions/workflows/cppcheck.yml) [![Dynamic Valgrind](https://github.com/ar4240/ImpCalc/actions/workflows/CodeQuality_Dynamic.yml/badge.svg)](https://github.com/ar4240/ImpCalc/actions/workflows/CodeQuality_Dynamic.yml) [![CI-Coverage](https://github.com/ar4240/ImpCalc/actions/workflows/gcov.yml/badge.svg)](https://github.com/ar4240/ImpCalc/actions/workflows/gcov.yml)| [![Unity - Unit Testing](https://github.com/ar4240/ImpCalc/actions/workflows/unity.yml/badge.svg)](https://github.com/ar4240/ImpCalc/actions/workflows/unity.yml)| [![Git Inspector](https://github.com/ar4240/ImpCalc/actions/workflows/gitinspector.yml/badge.svg)](https://github.com/ar4240/ImpCalc/actions/workflows/gitinspector.yml)

## Folder Structure
Folder             | Description
-------------------| ----------------------------------------------- 
`1_Requirements`   | Documents detailing requirements and research
`2_Architecture`   | Documents specifying design details
`3_Implementation` | All code and documentation
`4_Test_plan`      | Documents with test plans and procedures

## Contributors List and Summary
SF Id. |  Name   |    Features    | Issuess Raised |Issues Resolved|No Test Cases|Test Case Pass
-------|---------|----------------|----------------|---------------|-------------|--------------
`256174` |   Adithya Vamsi  | F_1a, F_1b, F_2a, F_2b, F_3a, F_3b, F_4a, F_4b, F_5    | 1     | 1   |9   |9     
 
| Feature Id | Feature |
| -----------|---------|
|F_1a| Calculate Equivalent Resistance of Series Combination |
|F_1b| Calculate Equivalent Resistance of Parallel Combination |
|F_2a| Calculate Equivalent Capacitance of Series Combination |
|F_2b| Calculate Equivalent Capacitance of Parallel Combination |
|F_3a| Calculate Equivalent Inducatance of Series Combination |
|F_3b| Calculate Equivalent Inducatance of Parallel Combination |
|F_4a| Calculate Equivalent Impedance of RLC Series Combination |
|F_4b| Calculate Equivalent Impedance of RLC Parallel Combination |
|F_5| Calculate Resonant Frequency of LC Circuit |


## Challenges Faced and How Was It Overcome
| No. | Challenge | Solution
|-----|-----------|--------
|1. | Had a few run-time errors during initial run | Added checkpoints with if-else clause 
|2. | Perplexed on how to implement unit-testing as input was drawn in src files | Changed the structure by drawing the input from the main driver program 
|3. | Badges and Github actions | Learning drill from the basics 
|4. | Valgrind in Makefile was failing | Checked the yml file and altered
|5. | Requirement gathering proved to be challenging | Read multiple sources to gather knowledge

## Learning Resources
1. [SDLC Basics](https://www.javatpoint.com/software-development-life-cycle)
2. [MarkdownBasics](https://guides.github.com/features/mastering-markdown/)
3. [MakefileBasics](https://www.tutorialspoint.com/makefile/index.htm)
4. [Github Workflow](https://docs.github.com/en/actions/learn-github-action)

