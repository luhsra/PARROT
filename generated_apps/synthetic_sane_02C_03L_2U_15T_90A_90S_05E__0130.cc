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


DeclareTask(CPU0Task0Subtask0);
DeclareTask(CPU0Task0Subtask3);
DeclareTask(CPU0Task0Subtask11);
DeclareTask(CPU0Task3Subtask1);
DeclareTask(CPU1Task1Subtask7);
DeclareTask(CPU1Task1Subtask13);
DeclareTask(CPU1Task2Subtask2);
DeclareTask(CPU1Task2Subtask5);
DeclareTask(CPU1Task2Subtask9);
DeclareTask(CPU1Task2Subtask14);
DeclareTask(CPU1Task4Subtask6);
DeclareTask(CPU1Task4Subtask10);
DeclareTask(CPU1Task5Subtask4);
DeclareTask(CPU1Task5Subtask8);
DeclareTask(CPU1Task5Subtask12);


TEST_MAKE_OS_MAIN( StartOS(0) )

// Prototypes

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task0Subtask0 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task0Subtask11 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task0Subtask3 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task3Subtask1 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task1Subtask13 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task1Subtask7 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task2Subtask14 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task2Subtask2 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task2Subtask5 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task2Subtask9 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task4Subtask10 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task4Subtask6 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task5Subtask12 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task5Subtask4 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task5Subtask8 (void);



void AUTOSAR_TASK_FUNC_CPU0Task0Subtask0 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task0Subtask0" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask0.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 192); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask0.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 131); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask0.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 88); // 0
  WaitEvent(EVENT3);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask0.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 187); // 0
  GetSpinlock(LOCK2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask0.7 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(1, 30); // 1
  ReleaseSpinlock(LOCK2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask0.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 156); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask0.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 160); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask0.6 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(6, 14); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask0.8 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 48); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task0Subtask11 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task0Subtask11" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask11.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 22); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask11.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 142); // 0
  SetEvent(CPU1Task2Subtask9,EVENT2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask11.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 10); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask11.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 30); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task0Subtask3 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task0Subtask3" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask3.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 54); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask3.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 93); // 0
  ActivateTask(CPU0Task0Subtask0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask3.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 162); // 0
  ActivateTask(CPU0Task0Subtask11);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask3.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 158); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask3.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 111); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task3Subtask1 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task3Subtask1" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask1.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 181); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask1.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 177); // 0
  GetSpinlock(LOCK1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask1.3 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(4, 18); // 1
  ReleaseSpinlock(LOCK1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask1.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 160); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask1.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 80); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task1Subtask13 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task1Subtask13" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask13.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 43); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask13.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 174); // 0
  GetSpinlock(LOCK1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask13.4 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(9, 15); // 1
  ReleaseSpinlock(LOCK1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask13.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 134); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask13.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 52); // 0
  ActivateTask(CPU1Task1Subtask7);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask13.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 66); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task1Subtask7 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task1Subtask7" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask7.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 85); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask7.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 160); // 0
  SetEvent(CPU1Task5Subtask4,EVENT1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask7.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 156); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask7.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 190); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task2Subtask14 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task2Subtask14" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask14.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 11); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask14.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 53); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask14.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 124); // 0
  WaitEvent(EVENT0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask14.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 65); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task2Subtask2 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task2Subtask2" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask2.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 65); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask2.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 99); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask2.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 43); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task2Subtask5 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task2Subtask5" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask5.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 98); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask5.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 167); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask5.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 146); // 0
  ActivateTask(CPU1Task2Subtask2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask5.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 15); // 0
  ActivateTask(CPU1Task2Subtask9);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask5.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 187); // 0
  ActivateTask(CPU1Task2Subtask14);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask5.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 65); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task2Subtask9 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task2Subtask9" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask9.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 180); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask9.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 73); // 0
  WaitEvent(EVENT2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask9.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 91); // 0
  SetEvent(CPU0Task0Subtask0,EVENT3);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask9.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 163); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask9.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 46); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task4Subtask10 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task4Subtask10" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask10.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 74); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask10.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 26); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask10.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 52); // 0
  ActivateTask(CPU1Task4Subtask6);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask10.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 126); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task4Subtask6 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task4Subtask6" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask6.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 74); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask6.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 107); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask6.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 141); // 0
  SetEvent(CPU1Task2Subtask14,EVENT0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask6.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 32); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task5Subtask12 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task5Subtask12" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask12.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 18); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask12.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 84); // 0
  GetSpinlock(LOCK2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask12.4 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(4, 21); // 1
  ReleaseSpinlock(LOCK2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask12.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 30); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask12.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 162); // 0
  ActivateTask(CPU1Task5Subtask8);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask12.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 20); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task5Subtask4 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task5Subtask4" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask4.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 148); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask4.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 5); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask4.5 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(4, 13); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask4.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 23); // 0
  SetEvent(CPU1Task5Subtask8,EVENT4);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask4.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 141); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask4.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 95); // 0
  WaitEvent(EVENT1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask4.6 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 99); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task5Subtask8 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task5Subtask8" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask8.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 139); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask8.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 154); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask8.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 21); // 0
  WaitEvent(EVENT4);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask8.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 98); // 0
  TerminateTask();

}
