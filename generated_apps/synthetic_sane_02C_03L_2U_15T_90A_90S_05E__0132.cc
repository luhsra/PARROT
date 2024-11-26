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


DeclareTask(CPU0Task1Subtask1);
DeclareTask(CPU0Task1Subtask4);
DeclareTask(CPU0Task1Subtask7);
DeclareTask(CPU0Task1Subtask10);
DeclareTask(CPU0Task2Subtask2);
DeclareTask(CPU0Task5Subtask8);
DeclareTask(CPU0Task5Subtask13);
DeclareTask(CPU1Task0Subtask0);
DeclareTask(CPU1Task0Subtask5);
DeclareTask(CPU1Task0Subtask9);
DeclareTask(CPU1Task3Subtask3);
DeclareTask(CPU1Task3Subtask6);
DeclareTask(CPU1Task3Subtask14);
DeclareTask(CPU1Task4Subtask11);
DeclareTask(CPU1Task4Subtask12);


TEST_MAKE_OS_MAIN( StartOS(0) )

// Prototypes

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task1Subtask1 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task1Subtask10 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task1Subtask4 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task1Subtask7 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task2Subtask2 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task5Subtask13 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task5Subtask8 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task0Subtask0 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task0Subtask5 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task0Subtask9 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task3Subtask14 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task3Subtask3 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task3Subtask6 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task4Subtask11 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task4Subtask12 (void);



void AUTOSAR_TASK_FUNC_CPU0Task1Subtask1 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task1Subtask1" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask1.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 180); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask1.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 76); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask1.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 149); // 0
  WaitEvent(EVENT4);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask1.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 148); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task1Subtask10 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task1Subtask10" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask10.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 150); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask10.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 165); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask10.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 76); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task1Subtask4 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task1Subtask4" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask4.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 103); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask4.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 181); // 0
  SetEvent(CPU1Task0Subtask0,EVENT0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask4.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 105); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask4.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 107); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask4.6 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(10, 24); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask4.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 57); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask4.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 57); // 0
  ActivateTask(CPU1Task0Subtask0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask4.7 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 114); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task1Subtask7 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task1Subtask7" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask7.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 49); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask7.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 4); // 0
  WaitEvent(EVENT3);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask7.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 105); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask7.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 112); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task2Subtask2 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task2Subtask2" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask2.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 160); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask2.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 173); // 0
  GetSpinlock(LOCK1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask2.3 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(3, 23); // 1
  ReleaseSpinlock(LOCK1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask2.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 190); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask2.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 103); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task5Subtask13 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task5Subtask13" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask13.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 138); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask13.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 161); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask13.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 62); // 0
  ActivateTask(CPU0Task5Subtask8);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask13.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 99); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task5Subtask8 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task5Subtask8" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask8.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 65); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask8.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 193); // 0
  GetSpinlock(LOCK2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask8.3 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(2, 6); // 1
  ReleaseSpinlock(LOCK2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask8.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 46); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask8.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 62); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task0Subtask0 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task0Subtask0" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask0.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 175); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask0.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 195); // 0
  GetSpinlock(LOCK2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask0.6 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(5, 14); // 1
  ReleaseSpinlock(LOCK2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask0.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 75); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask0.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 66); // 0
  SetEvent(CPU1Task3Subtask6,EVENT1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask0.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 30); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask0.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 30); // 0
  WaitEvent(EVENT0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask0.7 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 41); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task0Subtask5 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task0Subtask5" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask5.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 167); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask5.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 182); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask5.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 107); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask5.4 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(4, 24); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask5.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 114); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask5.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 70); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task0Subtask9 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task0Subtask9" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask9.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 83); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask9.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 179); // 0
  ActivateTask(CPU1Task0Subtask5);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask9.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 15); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask9.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 98); // 0
  SetEvent(CPU1Task3Subtask14,EVENT2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask9.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 106); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task3Subtask14 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task3Subtask14" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask14.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 67); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask14.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 165); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask14.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 117); // 0
  WaitEvent(EVENT2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask14.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 85); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task3Subtask3 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task3Subtask3" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask3.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 150); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask3.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 86); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask3.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 46); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task3Subtask6 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task3Subtask6" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask6.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 57); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask6.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 183); // 0
  GetSpinlock(LOCK1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask6.5 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(2, 26); // 1
  ReleaseSpinlock(LOCK1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask6.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 12); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask6.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 95); // 0
  WaitEvent(EVENT1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask6.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 158); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask6.6 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 17); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task4Subtask11 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task4Subtask11" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask11.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 72); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask11.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 133); // 0
  SetEvent(CPU0Task1Subtask1,EVENT4);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask11.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 74); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask11.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 149); // 0
  SetEvent(CPU0Task1Subtask7,EVENT3);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask11.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 190); // 0
  ActivateTask(CPU1Task4Subtask12);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask11.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 35); // 0
  ActivateTask(CPU0Task1Subtask1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask11.6 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 104); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task4Subtask12 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task4Subtask12" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask12.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 136); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask12.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 46); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask12.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 190); // 0
  TerminateTask();

}
