#include "autosar/os.h"
#include "test/test.h"
#include "machine.h"

//#include "fail/trace.h"

void ara_timing_info(int, int);



DeclareSpinlock(LOCK0);




DeclareTask(CPU0Task0Subtask7);
DeclareTask(CPU0Task0Subtask13);
DeclareTask(CPU1Task1Subtask1);
DeclareTask(CPU1Task1Subtask4);
DeclareTask(CPU1Task1Subtask8);
DeclareTask(CPU1Task4Subtask9);
DeclareTask(CPU1Task4Subtask10);
DeclareTask(CPU1Task4Subtask14);
DeclareTask(CPU2Task2Subtask2);
DeclareTask(CPU2Task2Subtask11);
DeclareTask(CPU2Task3Subtask0);
DeclareTask(CPU2Task3Subtask3);
DeclareTask(CPU2Task3Subtask5);
DeclareTask(CPU2Task3Subtask6);
DeclareTask(CPU2Task5Subtask12);


TEST_MAKE_OS_MAIN( StartOS(0) )

// Prototypes

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task0Subtask13 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task0Subtask7 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task1Subtask1 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task1Subtask4 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task1Subtask8 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task4Subtask10 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task4Subtask14 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task4Subtask9 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task2Subtask11 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task2Subtask2 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task3Subtask0 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task3Subtask3 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task3Subtask5 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task3Subtask6 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task5Subtask12 (void);



void AUTOSAR_TASK_FUNC_CPU0Task0Subtask13 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task0Subtask13" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask13.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 134); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask13.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 102); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask13.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 81); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task0Subtask7 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task0Subtask7" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask7.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 199); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask7.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 199); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask7.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 69); // 0
  ActivateTask(CPU0Task0Subtask13);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask7.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 78); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task1Subtask1 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task1Subtask1" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask1.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 183); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask1.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 55); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask1.3 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(7, 10); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask1.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 79); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask1.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 192); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task1Subtask4 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task1Subtask4" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask4.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 43); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask4.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 76); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask4.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 19); // 0
  ActivateTask(CPU1Task1Subtask8);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask4.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 88); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task1Subtask8 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task1Subtask8" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask8.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 182); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask8.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 17); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask8.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 145); // 0
  ActivateTask(CPU1Task1Subtask1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask8.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 24); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task4Subtask10 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task4Subtask10" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask10.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 44); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask10.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 124); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask10.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 150); // 0
  ActivateTask(CPU2Task3Subtask0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask10.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 163); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task4Subtask14 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task4Subtask14" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask14.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 31); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask14.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 36); // 0
  ActivateTask(CPU1Task4Subtask9);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask14.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 163); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask14.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 180); // 0
  ActivateTask(CPU1Task4Subtask10);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask14.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 122); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task4Subtask9 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task4Subtask9" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask9.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 178); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask9.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 90); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask9.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 138); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task2Subtask11 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task2Subtask11" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask11.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 41); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask11.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 79); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask11.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 17); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task2Subtask2 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task2Subtask2" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask2.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 39); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask2.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 160); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask2.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 177); // 0
  ActivateTask(CPU2Task2Subtask11);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask2.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 85); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task3Subtask0 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task3Subtask0" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task3Subtask0.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 68); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task3Subtask0.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 6); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task3Subtask0.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 12); // 0
  ActivateTask(CPU2Task3Subtask3);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task3Subtask0.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 126); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task3Subtask3 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task3Subtask3" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task3Subtask3.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 163); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task3Subtask3.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 66); // 0
  ActivateTask(CPU2Task3Subtask6);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task3Subtask3.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 175); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task3Subtask3.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 145); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task3Subtask5 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task3Subtask5" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task3Subtask5.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 171); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task3Subtask5.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 176); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task3Subtask5.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 180); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task3Subtask6 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task3Subtask6" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task3Subtask6.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 110); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task3Subtask6.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 107); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task3Subtask6.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 171); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task5Subtask12 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task5Subtask12" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask12.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 58); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask12.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 80); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask12.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 140); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask12.3 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(1, 2); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask12.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 158); // 0
  TerminateTask();

}
