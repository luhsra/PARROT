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


DeclareTask(CPU0Task1Subtask3);
DeclareTask(CPU0Task1Subtask9);
DeclareTask(CPU0Task3Subtask0);
DeclareTask(CPU0Task4Subtask1);
DeclareTask(CPU0Task4Subtask4);
DeclareTask(CPU0Task4Subtask5);
DeclareTask(CPU0Task4Subtask6);
DeclareTask(CPU1Task0Subtask2);
DeclareTask(CPU1Task0Subtask8);
DeclareTask(CPU1Task0Subtask11);
DeclareTask(CPU1Task0Subtask12);
DeclareTask(CPU1Task2Subtask7);
DeclareTask(CPU1Task2Subtask14);
DeclareTask(CPU1Task5Subtask10);
DeclareTask(CPU1Task5Subtask13);


TEST_MAKE_OS_MAIN( StartOS(0) )

// Prototypes

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task1Subtask3 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task1Subtask9 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task3Subtask0 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task4Subtask1 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task4Subtask4 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task4Subtask5 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task4Subtask6 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task0Subtask11 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task0Subtask12 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task0Subtask2 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task0Subtask8 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task2Subtask14 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task2Subtask7 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task5Subtask10 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task5Subtask13 (void);



void AUTOSAR_TASK_FUNC_CPU0Task1Subtask3 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task1Subtask3" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask3.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 79); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask3.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 168); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask3.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 121); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask3.4 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(9, 29); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask3.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 34); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask3.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 146); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task1Subtask9 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task1Subtask9" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask9.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 48); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask9.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 170); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask9.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 179); // 0
  WaitEvent(EVENT2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask9.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 157); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task3Subtask0 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task3Subtask0" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask0.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 103); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask0.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 48); // 0
  GetSpinlock(LOCK1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask0.3 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(8, 8); // 1
  ReleaseSpinlock(LOCK1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask0.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 54); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask0.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 32); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task4Subtask1 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task4Subtask1" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask1.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 133); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask1.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 15); // 0
  WaitEvent(EVENT1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask1.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 199); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask1.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 168); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task4Subtask4 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task4Subtask4" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask4.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 86); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask4.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 194); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask4.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 131); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task4Subtask5 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task4Subtask5" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask5.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 46); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask5.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 42); // 0
  ActivateTask(CPU0Task4Subtask1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask5.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 148); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask5.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 149); // 0
  SetEvent(CPU1Task0Subtask8,EVENT3);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask5.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 170); // 0
  ActivateTask(CPU0Task4Subtask6);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask5.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 43); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task4Subtask6 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task4Subtask6" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask6.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 174); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask6.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 133); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask6.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 138); // 0
  WaitEvent(EVENT4);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask6.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 27); // 0
  GetSpinlock(LOCK2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask6.5 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(2, 27); // 1
  ReleaseSpinlock(LOCK2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask6.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 172); // 0
  ActivateTask(CPU1Task5Subtask13);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask6.6 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 81); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task0Subtask11 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task0Subtask11" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask11.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 114); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask11.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 192); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask11.4 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(6, 16); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask11.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 81); // 0
  SetEvent(CPU0Task4Subtask1,EVENT1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask11.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 98); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask11.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 200); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task0Subtask12 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task0Subtask12" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask12.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 54); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask12.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 11); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask12.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 164); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task0Subtask2 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task0Subtask2" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask2.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 152); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask2.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 179); // 0
  GetSpinlock(LOCK1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask2.6 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(10, 28); // 1
  ReleaseSpinlock(LOCK1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask2.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 122); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask2.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 142); // 0
  GetSpinlock(LOCK2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask2.7 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(2, 6); // 1
  ReleaseSpinlock(LOCK2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask2.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 106); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask2.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 47); // 0
  ActivateTask(CPU1Task0Subtask8);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask2.8 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 59); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task0Subtask8 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task0Subtask8" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask8.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 136); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask8.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 41); // 0
  ActivateTask(CPU0Task4Subtask4);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask8.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 164); // 0
  WaitEvent(EVENT3);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask8.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 62); // 0
  ActivateTask(CPU1Task0Subtask11);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask8.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 17); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask8.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 23); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task2Subtask14 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task2Subtask14" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask14.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 42); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask14.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 11); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask14.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 18); // 0
  ActivateTask(CPU1Task2Subtask7);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask14.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 30); // 0
  SetEvent(CPU1Task5Subtask13,EVENT0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask14.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 159); // 0
  SetEvent(CPU0Task4Subtask6,EVENT4);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask14.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 157); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task2Subtask7 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task2Subtask7" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask7.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 147); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask7.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 58); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask7.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 134); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task5Subtask10 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task5Subtask10" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask10.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 40); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask10.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 173); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask10.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 55); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task5Subtask13 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task5Subtask13" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask13.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 29); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask13.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 85); // 0
  WaitEvent(EVENT0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask13.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 196); // 0
  SetEvent(CPU0Task1Subtask9,EVENT2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask13.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 109); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask13.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 120); // 0
  TerminateTask();

}
