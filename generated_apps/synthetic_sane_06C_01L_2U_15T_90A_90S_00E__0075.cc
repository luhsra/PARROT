#include "autosar/os.h"
#include "test/test.h"
#include "machine.h"

//#include "fail/trace.h"

void ara_timing_info(int, int);



DeclareSpinlock(LOCK0);




DeclareTask(CPU0Task4Subtask6);
DeclareTask(CPU0Task4Subtask12);
DeclareTask(CPU1Task3Subtask5);
DeclareTask(CPU1Task3Subtask7);
DeclareTask(CPU2Task0Subtask2);
DeclareTask(CPU2Task0Subtask3);
DeclareTask(CPU2Task0Subtask4);
DeclareTask(CPU2Task0Subtask9);
DeclareTask(CPU3Task5Subtask1);
DeclareTask(CPU3Task5Subtask10);
DeclareTask(CPU4Task1Subtask11);
DeclareTask(CPU4Task1Subtask14);
DeclareTask(CPU5Task2Subtask0);
DeclareTask(CPU5Task2Subtask8);
DeclareTask(CPU5Task2Subtask13);


TEST_MAKE_OS_MAIN( StartOS(0) )

// Prototypes

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task4Subtask12 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task4Subtask6 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task3Subtask5 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task3Subtask7 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task0Subtask2 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task0Subtask3 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task0Subtask4 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task0Subtask9 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU3Task5Subtask1 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU3Task5Subtask10 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU4Task1Subtask11 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU4Task1Subtask14 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU5Task2Subtask0 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU5Task2Subtask13 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU5Task2Subtask8 (void);



void AUTOSAR_TASK_FUNC_CPU0Task4Subtask12 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task4Subtask12" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask12.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 116); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask12.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 102); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask12.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 29); // 0
  ActivateTask(CPU0Task4Subtask6);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask12.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 156); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task4Subtask6 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task4Subtask6" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask6.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 189); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask6.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 54); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask6.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 66); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task3Subtask5 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task3Subtask5" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask5.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 197); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask5.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 42); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask5.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 76); // 0
  ActivateTask(CPU1Task3Subtask7);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask5.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 131); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task3Subtask7 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task3Subtask7" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask7.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 20); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask7.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 85); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask7.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 107); // 0
  ActivateTask(CPU5Task2Subtask13);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask7.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 26); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task0Subtask2 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task0Subtask2" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task0Subtask2.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 52); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task0Subtask2.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 164); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task0Subtask2.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 113); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task0Subtask3 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task0Subtask3" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task0Subtask3.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 164); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task0Subtask3.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 180); // 0
  ActivateTask(CPU2Task0Subtask2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task0Subtask3.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 27); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task0Subtask3.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 192); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task0Subtask4 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task0Subtask4" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task0Subtask4.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 80); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task0Subtask4.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 81); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task0Subtask4.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 186); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task0Subtask4.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 68); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task0Subtask4.5 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(1, 11); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task0Subtask4.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 182); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task0Subtask4.6 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 134); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task0Subtask9 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task0Subtask9" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task0Subtask9.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 66); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task0Subtask9.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 93); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task0Subtask9.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 57); // 0
  ActivateTask(CPU5Task2Subtask0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task0Subtask9.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 117); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU3Task5Subtask1 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU3Task5Subtask1" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task5Subtask1.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 79); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task5Subtask1.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 110); // 0
  ActivateTask(CPU3Task5Subtask10);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task5Subtask1.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 83); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task5Subtask1.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 182); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU3Task5Subtask10 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU3Task5Subtask10" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task5Subtask10.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 200); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task5Subtask10.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 131); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task5Subtask10.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 84); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU4Task1Subtask11 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU4Task1Subtask11" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task1Subtask11.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 20); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task1Subtask11.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 24); // 0
  ActivateTask(CPU4Task1Subtask14);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task1Subtask11.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 158); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task1Subtask11.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 189); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU4Task1Subtask14 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU4Task1Subtask14" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task1Subtask14.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 176); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task1Subtask14.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 91); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task1Subtask14.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 198); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task1Subtask14.3 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(2, 8); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task1Subtask14.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 46); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU5Task2Subtask0 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU5Task2Subtask0" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task2Subtask0.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 144); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task2Subtask0.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 34); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task2Subtask0.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 154); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU5Task2Subtask13 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU5Task2Subtask13" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task2Subtask13.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 199); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task2Subtask13.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 35); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task2Subtask13.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 67); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU5Task2Subtask8 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU5Task2Subtask8" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task2Subtask8.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 118); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task2Subtask8.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 111); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task2Subtask8.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 105); // 0
  TerminateTask();

}
