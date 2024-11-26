#include "autosar/os.h"
#include "test/test.h"
#include "machine.h"

//#include "fail/trace.h"

void ara_timing_info(int, int);



DeclareSpinlock(LOCK0);




DeclareTask(CPU0Task2Subtask4);
DeclareTask(CPU0Task2Subtask9);
DeclareTask(CPU0Task2Subtask12);
DeclareTask(CPU0Task2Subtask13);
DeclareTask(CPU1Task1Subtask1);
DeclareTask(CPU1Task1Subtask2);
DeclareTask(CPU2Task3Subtask3);
DeclareTask(CPU2Task3Subtask6);
DeclareTask(CPU2Task3Subtask7);
DeclareTask(CPU3Task4Subtask8);
DeclareTask(CPU3Task4Subtask11);
DeclareTask(CPU4Task0Subtask0);
DeclareTask(CPU4Task0Subtask5);
DeclareTask(CPU5Task5Subtask10);
DeclareTask(CPU5Task5Subtask14);


TEST_MAKE_OS_MAIN( StartOS(0) )

// Prototypes

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task2Subtask12 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task2Subtask13 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task2Subtask4 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task2Subtask9 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task1Subtask1 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task1Subtask2 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task3Subtask3 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task3Subtask6 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task3Subtask7 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU3Task4Subtask11 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU3Task4Subtask8 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU4Task0Subtask0 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU4Task0Subtask5 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU5Task5Subtask10 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU5Task5Subtask14 (void);



void AUTOSAR_TASK_FUNC_CPU0Task2Subtask12 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task2Subtask12" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask12.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 179); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask12.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 102); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask12.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 81); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task2Subtask13 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task2Subtask13" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask13.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 199); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask13.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 199); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask13.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 69); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task2Subtask4 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task2Subtask4" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask4.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 78); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask4.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 183); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask4.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 55); // 0
  ActivateTask(CPU0Task2Subtask13);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask4.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 41); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task2Subtask9 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task2Subtask9" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask9.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 79); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask9.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 192); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask9.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 43); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask9.5 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(2, 11); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask9.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 19); // 0
  ActivateTask(CPU0Task2Subtask4);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask9.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 88); // 0
  ActivateTask(CPU0Task2Subtask12);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask9.6 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 182); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task1Subtask1 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task1Subtask1" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask1.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 17); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask1.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 145); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask1.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 24); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask1.4 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(10, 13); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask1.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 124); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask1.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 150); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task1Subtask2 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task1Subtask2" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask2.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 163); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask2.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 31); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask2.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 36); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task3Subtask3 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task3Subtask3" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task3Subtask3.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 163); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task3Subtask3.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 180); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task3Subtask3.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 122); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task3Subtask6 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task3Subtask6" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task3Subtask6.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 178); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task3Subtask6.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 90); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task3Subtask6.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 138); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task3Subtask7 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task3Subtask7" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task3Subtask7.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 41); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task3Subtask7.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 79); // 0
  ActivateTask(CPU2Task3Subtask3);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task3Subtask7.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 17); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task3Subtask7.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 39); // 0
  ActivateTask(CPU2Task3Subtask6);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task3Subtask7.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 160); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU3Task4Subtask11 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU3Task4Subtask11" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task4Subtask11.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 177); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task4Subtask11.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 85); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task4Subtask11.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 68); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU3Task4Subtask8 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU3Task4Subtask8" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task4Subtask8.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 6); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task4Subtask8.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 12); // 0
  ActivateTask(CPU3Task4Subtask11);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task4Subtask8.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 126); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task4Subtask8.4 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(2, 22); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task4Subtask8.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 66); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task4Subtask8.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 175); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU4Task0Subtask0 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU4Task0Subtask0" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task0Subtask0.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 145); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task0Subtask0.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 171); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task0Subtask0.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 176); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU4Task0Subtask5 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU4Task0Subtask5" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task0Subtask5.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 180); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task0Subtask5.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 110); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task0Subtask5.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 107); // 0
  ActivateTask(CPU4Task0Subtask0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task0Subtask5.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 171); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU5Task5Subtask10 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU5Task5Subtask10" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task5Subtask10.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 58); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task5Subtask10.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 80); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task5Subtask10.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 140); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU5Task5Subtask14 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU5Task5Subtask14" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task5Subtask14.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 9); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task5Subtask14.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 158); // 0
  ActivateTask(CPU5Task5Subtask10);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task5Subtask14.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 40); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task5Subtask14.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 94); // 0
  TerminateTask();

}
