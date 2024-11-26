#include "autosar/os.h"
#include "test/test.h"
#include "machine.h"

//#include "fail/trace.h"

void ara_timing_info(int, int);



DeclareSpinlock(LOCK0);
DeclareSpinlock(LOCK1);
DeclareSpinlock(LOCK2);


DeclareEvent(EVENT0, 1);
DeclareEvent(EVENT1, 2);
DeclareEvent(EVENT2, 3);
DeclareEvent(EVENT3, 4);
DeclareEvent(EVENT4, 5);


DeclareTask(CPU0Task3Subtask2);
DeclareTask(CPU0Task3Subtask3);
DeclareTask(CPU1Task0Subtask4);
DeclareTask(CPU1Task2Subtask1);
DeclareTask(CPU1Task2Subtask8);
DeclareTask(CPU1Task4Subtask11);
DeclareTask(CPU1Task4Subtask13);
DeclareTask(CPU2Task1Subtask6);
DeclareTask(CPU2Task1Subtask7);
DeclareTask(CPU2Task1Subtask9);
DeclareTask(CPU2Task1Subtask10);
DeclareTask(CPU2Task5Subtask0);
DeclareTask(CPU2Task5Subtask5);
DeclareTask(CPU2Task5Subtask12);
DeclareTask(CPU2Task5Subtask14);


TEST_MAKE_OS_MAIN( StartOS(0) )

// Prototypes

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task3Subtask2 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task3Subtask3 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task0Subtask4 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task2Subtask1 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task2Subtask8 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task4Subtask11 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task4Subtask13 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task1Subtask10 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task1Subtask6 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task1Subtask7 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task1Subtask9 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task5Subtask0 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task5Subtask12 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task5Subtask14 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task5Subtask5 (void);



void AUTOSAR_TASK_FUNC_CPU0Task3Subtask2 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task3Subtask2" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask2.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 146); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask2.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 98); // 0
  ActivateTask(CPU2Task5Subtask14);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask2.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 14); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask2.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 33); // 0
  WaitEvent(EVENT1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask2.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 25); // 0
  GetSpinlock(LOCK1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask2.7 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(9, 26); // 1
  ReleaseSpinlock(LOCK1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask2.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 142); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask2.6 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(9, 15); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask2.8 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 82); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task3Subtask3 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task3Subtask3" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask3.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 73); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask3.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 39); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask3.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 32); // 0
  ActivateTask(CPU0Task3Subtask2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask3.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 87); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task0Subtask4 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task0Subtask4" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask4.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 173); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask4.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 32); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask4.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 101); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task2Subtask1 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task2Subtask1" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask1.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 190); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask1.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 167); // 0
  WaitEvent(EVENT0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask1.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 152); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask1.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 173); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task2Subtask8 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task2Subtask8" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask8.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 21); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask8.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 52); // 0
  ActivateTask(CPU1Task2Subtask1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask8.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 145); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask8.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 101); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task4Subtask11 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task4Subtask11" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask11.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 31); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask11.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 5); // 0
  SetEvent(CPU2Task5Subtask14,EVENT2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask11.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 39); // 0
  SetEvent(CPU0Task3Subtask2,EVENT1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask11.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 164); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask11.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 60); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task4Subtask13 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task4Subtask13" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask13.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 51); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask13.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 13); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask13.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 131); // 0
  ActivateTask(CPU2Task1Subtask10);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask13.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 148); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask13.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 99); // 0
  GetSpinlock(LOCK2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask13.5 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(8, 18); // 1
  ReleaseSpinlock(LOCK2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask13.6 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 66); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task1Subtask10 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task1Subtask10" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask10.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 118); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask10.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 93); // 0
  ActivateTask(CPU2Task1Subtask6);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask10.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 99); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask10.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 144); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task1Subtask6 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task1Subtask6" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask6.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 132); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask6.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 138); // 0
  WaitEvent(EVENT4);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask6.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 187); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask6.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 135); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task1Subtask7 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task1Subtask7" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask7.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 121); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask7.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 57); // 0
  GetSpinlock(LOCK2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask7.3 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(10, 25); // 1
  ReleaseSpinlock(LOCK2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask7.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 27); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask7.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 169); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task1Subtask9 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task1Subtask9" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask9.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 30); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask9.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 75); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask9.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 47); // 0
  ActivateTask(CPU2Task1Subtask7);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask9.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 184); // 0
  GetSpinlock(LOCK1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask9.4 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(7, 19); // 1
  ReleaseSpinlock(LOCK1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask9.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 28); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task5Subtask0 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task5Subtask0" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask0.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 187); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask0.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 187); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask0.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 192); // 0
  ActivateTask(CPU2Task5Subtask5);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask0.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 76); // 0
  SetEvent(CPU2Task5Subtask5,EVENT3);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask0.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 38); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task5Subtask12 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task5Subtask12" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask12.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 174); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask12.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 148); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask12.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 23); // 0
  SetEvent(CPU1Task2Subtask1,EVENT0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask12.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 198); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask12.4 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(5, 23); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask12.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 16); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task5Subtask14 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task5Subtask14" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask14.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 26); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask14.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 78); // 0
  WaitEvent(EVENT2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask14.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 174); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask14.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 45); // 0
  ActivateTask(CPU2Task5Subtask0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask14.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 76); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task5Subtask5 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task5Subtask5" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask5.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 13); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask5.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 198); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask5.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 43); // 0
  WaitEvent(EVENT3);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask5.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 171); // 0
  SetEvent(CPU2Task1Subtask6,EVENT4);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask5.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 108); // 0
  TerminateTask();

}
