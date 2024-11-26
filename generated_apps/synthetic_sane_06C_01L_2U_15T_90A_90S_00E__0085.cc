#include "autosar/os.h"
#include "test/test.h"
#include "machine.h"

//#include "fail/trace.h"

void ara_timing_info(int, int);



DeclareSpinlock(LOCK0);




DeclareTask(CPU0Task5Subtask0);
DeclareTask(CPU0Task5Subtask4);
DeclareTask(CPU0Task5Subtask12);
DeclareTask(CPU0Task5Subtask14);
DeclareTask(CPU1Task0Subtask5);
DeclareTask(CPU1Task0Subtask9);
DeclareTask(CPU1Task0Subtask13);
DeclareTask(CPU2Task4Subtask2);
DeclareTask(CPU2Task4Subtask10);
DeclareTask(CPU3Task2Subtask1);
DeclareTask(CPU3Task2Subtask3);
DeclareTask(CPU4Task1Subtask6);
DeclareTask(CPU4Task1Subtask8);
DeclareTask(CPU4Task1Subtask11);
DeclareTask(CPU5Task3Subtask7);


TEST_MAKE_OS_MAIN( StartOS(0) )

// Prototypes

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task5Subtask0 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task5Subtask12 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task5Subtask14 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task5Subtask4 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task0Subtask13 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task0Subtask5 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task0Subtask9 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task4Subtask10 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task4Subtask2 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU3Task2Subtask1 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU3Task2Subtask3 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU4Task1Subtask11 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU4Task1Subtask6 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU4Task1Subtask8 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU5Task3Subtask7 (void);



void AUTOSAR_TASK_FUNC_CPU0Task5Subtask0 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task5Subtask0" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask0.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 172); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask0.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 131); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask0.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 64); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task5Subtask12 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task5Subtask12" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask12.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 165); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask12.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 58); // 0
  ActivateTask(CPU0Task5Subtask14);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask12.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 187); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask12.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 32); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task5Subtask14 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task5Subtask14" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask14.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 11); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask14.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 27); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask14.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 148); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task5Subtask4 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task5Subtask4" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask4.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 192); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask4.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 99); // 0
  ActivateTask(CPU0Task5Subtask12);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask4.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 179); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask4.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 163); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task0Subtask13 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task0Subtask13" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask13.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 101); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask13.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 178); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask13.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 77); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask13.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 15); // 0
  ActivateTask(CPU1Task0Subtask5);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask13.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 122); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask13.5 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(9, 23); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask13.6 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 37); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task0Subtask5 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task0Subtask5" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask5.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 87); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask5.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 140); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask5.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 171); // 0
  ActivateTask(CPU0Task5Subtask0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask5.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 122); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task0Subtask9 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task0Subtask9" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask9.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 93); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask9.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 90); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask9.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 134); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task4Subtask10 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task4Subtask10" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask10.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 29); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask10.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 164); // 0
  ActivateTask(CPU2Task4Subtask2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask10.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 50); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask10.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 143); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task4Subtask2 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task4Subtask2" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask2.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 165); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask2.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 52); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask2.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 39); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU3Task2Subtask1 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU3Task2Subtask1" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task2Subtask1.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 131); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task2Subtask1.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 41); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task2Subtask1.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 147); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task2Subtask1.3 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(8, 29); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task2Subtask1.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 105); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU3Task2Subtask3 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU3Task2Subtask3" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task2Subtask3.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 20); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task2Subtask3.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 139); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task2Subtask3.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 61); // 0
  ActivateTask(CPU3Task2Subtask1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task2Subtask3.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 87); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU4Task1Subtask11 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU4Task1Subtask11" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task1Subtask11.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 121); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task1Subtask11.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 16); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task1Subtask11.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 192); // 0
  ActivateTask(CPU4Task1Subtask6);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task1Subtask11.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 176); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU4Task1Subtask6 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU4Task1Subtask6" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task1Subtask6.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 107); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task1Subtask6.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 102); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task1Subtask6.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 192); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU4Task1Subtask8 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU4Task1Subtask8" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task1Subtask8.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 96); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task1Subtask8.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 140); // 0
  ActivateTask(CPU4Task1Subtask11);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task1Subtask8.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 161); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task1Subtask8.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 173); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU5Task3Subtask7 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU5Task3Subtask7" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task3Subtask7.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 159); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task3Subtask7.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 32); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task3Subtask7.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 195); // 0
  TerminateTask();

}
