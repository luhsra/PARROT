#include "autosar/os.h"
#include "test/test.h"
#include "machine.h"

//#include "fail/trace.h"

void ara_timing_info(int, int);



DeclareSpinlock(LOCK0);
DeclareSpinlock(LOCK1);
DeclareSpinlock(LOCK2);




DeclareTask(CPU0Task2Subtask9);
DeclareTask(CPU0Task2Subtask10);
DeclareTask(CPU0Task3Subtask3);
DeclareTask(CPU0Task3Subtask13);
DeclareTask(CPU0Task4Subtask11);
DeclareTask(CPU0Task4Subtask12);
DeclareTask(CPU1Task1Subtask1);
DeclareTask(CPU1Task1Subtask4);
DeclareTask(CPU1Task5Subtask2);
DeclareTask(CPU1Task5Subtask7);
DeclareTask(CPU1Task5Subtask8);
DeclareTask(CPU1Task5Subtask14);
DeclareTask(CPU2Task0Subtask0);
DeclareTask(CPU2Task0Subtask5);
DeclareTask(CPU2Task0Subtask6);


TEST_MAKE_OS_MAIN( StartOS(0) )

// Prototypes

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task2Subtask10 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task2Subtask9 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task3Subtask13 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task3Subtask3 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task4Subtask11 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task4Subtask12 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task1Subtask1 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task1Subtask4 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task5Subtask14 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task5Subtask2 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task5Subtask7 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task5Subtask8 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task0Subtask0 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task0Subtask5 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task0Subtask6 (void);



void AUTOSAR_TASK_FUNC_CPU0Task2Subtask10 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task2Subtask10" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask10.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 39); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask10.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 39); // 0
  ActivateTask(CPU0Task2Subtask9);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask10.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 125); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask10.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 166); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task2Subtask9 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task2Subtask9" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask9.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 89); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask9.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 159); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask9.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 18); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task3Subtask13 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task3Subtask13" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask13.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 102); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask13.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 71); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask13.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 88); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask13.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 102); // 0
  GetSpinlock(LOCK1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask13.4 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(6, 29); // 1
  ReleaseSpinlock(LOCK1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask13.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 51); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task3Subtask3 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task3Subtask3" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask3.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 90); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask3.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 101); // 0
  ActivateTask(CPU1Task5Subtask14);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask3.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 140); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask3.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 86); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task4Subtask11 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task4Subtask11" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask11.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 54); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask11.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 119); // 0
  ActivateTask(CPU0Task4Subtask12);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask11.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 177); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask11.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 149); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task4Subtask12 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task4Subtask12" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask12.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 91); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask12.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 175); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask12.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 65); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task1Subtask1 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task1Subtask1" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask1.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 197); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask1.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 61); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask1.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 91); // 0
  ActivateTask(CPU1Task1Subtask4);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask1.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 91); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task1Subtask4 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task1Subtask4" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask4.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 18); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask4.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 139); // 0
  GetSpinlock(LOCK1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask4.5 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(5, 15); // 1
  ReleaseSpinlock(LOCK1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask4.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 110); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask4.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 62); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask4.4 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(4, 14); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask4.6 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 67); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task5Subtask14 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task5Subtask14" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask14.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 19); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask14.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 44); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask14.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 43); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task5Subtask2 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task5Subtask2" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask2.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 119); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask2.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 168); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask2.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 66); // 0
  ActivateTask(CPU1Task5Subtask7);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask2.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 73); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task5Subtask7 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task5Subtask7" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask7.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 163); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask7.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 62); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask7.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 85); // 0
  GetSpinlock(LOCK2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask7.5 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(5, 9); // 1
  ReleaseSpinlock(LOCK2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask7.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 168); // 0
  ActivateTask(CPU2Task0Subtask6);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask7.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 42); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask7.6 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 123); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task5Subtask8 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task5Subtask8" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask8.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 26); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask8.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 94); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask8.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 178); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task0Subtask0 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task0Subtask0" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task0Subtask0.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 76); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task0Subtask0.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 60); // 0
  ActivateTask(CPU2Task0Subtask5);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task0Subtask0.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 158); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task0Subtask0.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 90); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task0Subtask5 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task0Subtask5" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task0Subtask5.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 94); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task0Subtask5.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 101); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task0Subtask5.3 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(5, 30); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task0Subtask5.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 146); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task0Subtask5.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 52); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task0Subtask6 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task0Subtask6" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task0Subtask6.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 122); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task0Subtask6.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 171); // 0
  GetSpinlock(LOCK2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task0Subtask6.5 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(6, 29); // 1
  ReleaseSpinlock(LOCK2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task0Subtask6.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 137); // 0
  ActivateTask(CPU2Task0Subtask0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task0Subtask6.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 140); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task0Subtask6.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 29); // 0
  ActivateTask(CPU1Task1Subtask1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task0Subtask6.6 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 186); // 0
  TerminateTask();

}
