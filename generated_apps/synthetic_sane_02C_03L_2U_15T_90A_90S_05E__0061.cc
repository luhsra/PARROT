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


DeclareTask(CPU0Task0Subtask4);
DeclareTask(CPU0Task2Subtask5);
DeclareTask(CPU0Task2Subtask8);
DeclareTask(CPU0Task2Subtask10);
DeclareTask(CPU0Task2Subtask11);
DeclareTask(CPU0Task2Subtask12);
DeclareTask(CPU0Task3Subtask0);
DeclareTask(CPU0Task3Subtask7);
DeclareTask(CPU0Task3Subtask14);
DeclareTask(CPU1Task1Subtask3);
DeclareTask(CPU1Task4Subtask6);
DeclareTask(CPU1Task4Subtask9);
DeclareTask(CPU1Task5Subtask1);
DeclareTask(CPU1Task5Subtask2);
DeclareTask(CPU1Task5Subtask13);


TEST_MAKE_OS_MAIN( StartOS(0) )

// Prototypes

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task0Subtask4 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task2Subtask10 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task2Subtask11 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task2Subtask12 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task2Subtask5 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task2Subtask8 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task3Subtask0 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task3Subtask14 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task3Subtask7 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task1Subtask3 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task4Subtask6 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task4Subtask9 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task5Subtask1 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task5Subtask13 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task5Subtask2 (void);



void AUTOSAR_TASK_FUNC_CPU0Task0Subtask4 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task0Subtask4" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask4.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 146); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask4.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 195); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask4.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 16); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task2Subtask10 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task2Subtask10" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask10.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 15); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask10.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 33); // 0
  SetEvent(CPU0Task3Subtask14,EVENT0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask10.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 16); // 0
  SetEvent(CPU0Task2Subtask8,EVENT2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask10.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 44); // 0
  WaitEvent(EVENT1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask10.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 61); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask10.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 60); // 0
  ActivateTask(CPU0Task2Subtask8);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask10.6 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 127); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task2Subtask11 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task2Subtask11" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask11.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 46); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask11.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 69); // 0
  ActivateTask(CPU0Task2Subtask5);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask11.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 119); // 0
  GetSpinlock(LOCK1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask11.4 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(2, 10); // 1
  ReleaseSpinlock(LOCK1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask11.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 167); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask11.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 185); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task2Subtask12 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task2Subtask12" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask12.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 102); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask12.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 129); // 0
  GetSpinlock(LOCK2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask12.4 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(3, 12); // 1
  ReleaseSpinlock(LOCK2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask12.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 123); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask12.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 181); // 0
  SetEvent(CPU1Task5Subtask13,EVENT3);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask12.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 35); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task2Subtask5 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task2Subtask5" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask5.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 62); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask5.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 61); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask5.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 84); // 0
  ActivateTask(CPU0Task2Subtask10);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask5.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 20); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task2Subtask8 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task2Subtask8" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask8.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 67); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask8.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 68); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask8.5 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(3, 30); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask8.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 45); // 0
  WaitEvent(EVENT2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask8.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 23); // 0
  ActivateTask(CPU0Task2Subtask12);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask8.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 131); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask8.6 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 117); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task3Subtask0 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task3Subtask0" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask0.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 14); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask0.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 184); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask0.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 79); // 0
  ActivateTask(CPU0Task3Subtask14);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask0.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 183); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task3Subtask14 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task3Subtask14" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask14.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 110); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask14.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 171); // 0
  ActivateTask(CPU0Task3Subtask7);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask14.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 89); // 0
  WaitEvent(EVENT0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask14.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 80); // 0
  SetEvent(CPU0Task3Subtask7,EVENT4);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask14.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 86); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask14.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 154); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task3Subtask7 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task3Subtask7" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask7.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 87); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask7.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 11); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask7.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 144); // 0
  WaitEvent(EVENT4);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask7.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 71); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task1Subtask3 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task1Subtask3" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask3.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 14); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask3.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 184); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask3.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 34); // 0
  GetSpinlock(LOCK1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask3.3 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(3, 24); // 1
  ReleaseSpinlock(LOCK1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask3.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 156); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task4Subtask6 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task4Subtask6" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask6.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 174); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask6.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 139); // 0
  GetSpinlock(LOCK2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask6.4 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(3, 21); // 1
  ReleaseSpinlock(LOCK2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask6.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 119); // 0
  ActivateTask(CPU1Task4Subtask9);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask6.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 177); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask6.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 143); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task4Subtask9 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task4Subtask9" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask9.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 122); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask9.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 143); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask9.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 85); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task5Subtask1 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task5Subtask1" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask1.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 50); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask1.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 137); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask1.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 180); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task5Subtask13 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task5Subtask13" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask13.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 159); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask13.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 96); // 0
  WaitEvent(EVENT3);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask13.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 17); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask13.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 120); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask13.4 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(3, 6); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask13.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 39); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task5Subtask2 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task5Subtask2" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask2.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 94); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask2.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 73); // 0
  SetEvent(CPU0Task2Subtask10,EVENT1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask2.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 34); // 0
  ActivateTask(CPU0Task2Subtask11);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask2.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 170); // 0
  ActivateTask(CPU1Task5Subtask1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask2.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 103); // 0
  ActivateTask(CPU1Task5Subtask13);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask2.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 195); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask2.6 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 122); // 0
  TerminateTask();

}