#include "autosar/os.h"
#include "test/test.h"
#include "machine.h"

//#include "fail/trace.h"

void ara_timing_info(int, int);



DeclareSpinlock(LOCK0);
DeclareSpinlock(LOCK1);
DeclareSpinlock(LOCK2);




DeclareTask(CPU0Task0Subtask2);
DeclareTask(CPU0Task0Subtask4);
DeclareTask(CPU0Task0Subtask6);
DeclareTask(CPU1Task2Subtask7);
DeclareTask(CPU1Task2Subtask12);
DeclareTask(CPU2Task4Subtask3);
DeclareTask(CPU2Task4Subtask10);
DeclareTask(CPU2Task4Subtask13);
DeclareTask(CPU3Task1Subtask1);
DeclareTask(CPU3Task1Subtask8);
DeclareTask(CPU3Task1Subtask11);
DeclareTask(CPU3Task1Subtask14);
DeclareTask(CPU4Task5Subtask5);
DeclareTask(CPU4Task5Subtask9);
DeclareTask(CPU5Task3Subtask0);


TEST_MAKE_OS_MAIN( StartOS(0) )

// Prototypes

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task0Subtask2 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task0Subtask4 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task0Subtask6 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task2Subtask12 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task2Subtask7 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task4Subtask10 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task4Subtask13 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task4Subtask3 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU3Task1Subtask1 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU3Task1Subtask11 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU3Task1Subtask14 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU3Task1Subtask8 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU4Task5Subtask5 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU4Task5Subtask9 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU5Task3Subtask0 (void);



void AUTOSAR_TASK_FUNC_CPU0Task0Subtask2 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task0Subtask2" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask2.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 171); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask2.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 129); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask2.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 174); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task0Subtask4 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task0Subtask4" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask4.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 104); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask4.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 170); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask4.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 71); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task0Subtask6 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task0Subtask6" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask6.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 104); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask6.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 157); // 0
  ActivateTask(CPU0Task0Subtask4);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask6.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 27); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask6.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 68); // 0
  ActivateTask(CPU0Task0Subtask2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask6.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 105); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task2Subtask12 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task2Subtask12" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask12.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 146); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask12.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 154); // 0
  ActivateTask(CPU1Task2Subtask7);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask12.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 188); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask12.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 15); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task2Subtask7 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task2Subtask7" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask7.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 164); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask7.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 154); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask7.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 182); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task4Subtask10 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task4Subtask10" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask10.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 156); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask10.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 120); // 0
  ActivateTask(CPU2Task4Subtask13);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask10.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 116); // 0
  ActivateTask(CPU2Task4Subtask3);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask10.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 95); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask10.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 161); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task4Subtask13 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task4Subtask13" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask13.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 167); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask13.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 177); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask13.4 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(7, 30); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask13.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 95); // 0
  ActivateTask(CPU3Task1Subtask14);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask13.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 196); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask13.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 33); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task4Subtask3 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task4Subtask3" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask3.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 25); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask3.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 154); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask3.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 142); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU3Task1Subtask1 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU3Task1Subtask1" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task1Subtask1.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 67); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task1Subtask1.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 82); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task1Subtask1.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 73); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU3Task1Subtask11 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU3Task1Subtask11" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task1Subtask11.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 39); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task1Subtask11.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 32); // 0
  ActivateTask(CPU3Task1Subtask1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task1Subtask11.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 87); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task1Subtask11.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 173); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU3Task1Subtask14 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU3Task1Subtask14" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task1Subtask14.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 32); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task1Subtask14.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 101); // 0
  GetSpinlock(LOCK1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task1Subtask14.5 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(8, 29); // 1
  ReleaseSpinlock(LOCK1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task1Subtask14.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 167); // 0
  ActivateTask(CPU3Task1Subtask11);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task1Subtask14.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 152); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task1Subtask14.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 173); // 0
  ActivateTask(CPU3Task1Subtask8);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task1Subtask14.6 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 21); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU3Task1Subtask8 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU3Task1Subtask8" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task1Subtask8.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 52); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task1Subtask8.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 145); // 0
  GetSpinlock(LOCK2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task1Subtask8.3 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(1, 13); // 1
  ReleaseSpinlock(LOCK2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task1Subtask8.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 31); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task1Subtask8.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 5); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU4Task5Subtask5 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU4Task5Subtask5" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task5Subtask5.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 39); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task5Subtask5.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 164); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task5Subtask5.5 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(4, 10); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task5Subtask5.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 51); // 0
  GetSpinlock(LOCK1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task5Subtask5.6 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(4, 30); // 1
  ReleaseSpinlock(LOCK1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task5Subtask5.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 194); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task5Subtask5.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 131); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task5Subtask5.7 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 148); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU4Task5Subtask9 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU4Task5Subtask9" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task5Subtask9.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 99); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task5Subtask9.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 96); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task5Subtask9.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 66); // 0
  ActivateTask(CPU4Task5Subtask5);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task5Subtask9.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 118); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU5Task3Subtask0 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU5Task3Subtask0" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task3Subtask0.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 93); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task3Subtask0.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 99); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task3Subtask0.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 144); // 0
  TerminateTask();

}
