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


DeclareTask(CPU0Task0Subtask11);
DeclareTask(CPU0Task3Subtask4);
DeclareTask(CPU0Task3Subtask5);
DeclareTask(CPU0Task3Subtask8);
DeclareTask(CPU0Task4Subtask9);
DeclareTask(CPU0Task4Subtask10);
DeclareTask(CPU0Task4Subtask13);
DeclareTask(CPU0Task5Subtask0);
DeclareTask(CPU0Task5Subtask3);
DeclareTask(CPU0Task5Subtask14);
DeclareTask(CPU1Task1Subtask6);
DeclareTask(CPU1Task1Subtask7);
DeclareTask(CPU1Task1Subtask12);
DeclareTask(CPU1Task2Subtask1);
DeclareTask(CPU1Task2Subtask2);


TEST_MAKE_OS_MAIN( StartOS(0) )

// Prototypes

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task0Subtask11 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task3Subtask4 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task3Subtask5 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task3Subtask8 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task4Subtask10 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task4Subtask13 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task4Subtask9 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task5Subtask0 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task5Subtask14 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task5Subtask3 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task1Subtask12 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task1Subtask6 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task1Subtask7 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task2Subtask1 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task2Subtask2 (void);



void AUTOSAR_TASK_FUNC_CPU0Task0Subtask11 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task0Subtask11" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask11.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 198); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask11.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 27); // 0
  GetSpinlock(LOCK2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask11.3 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(6, 19); // 1
  ReleaseSpinlock(LOCK2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask11.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 38); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask11.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 43); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task3Subtask4 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task3Subtask4" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask4.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 133); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask4.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 147); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask4.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 74); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task3Subtask5 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task3Subtask5" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask5.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 97); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask5.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 170); // 0
  SetEvent(CPU0Task4Subtask10,EVENT4);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask5.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 153); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask5.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 50); // 0
  ActivateTask(CPU0Task4Subtask10);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask5.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 110); // 0
  ActivateTask(CPU0Task3Subtask4);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask5.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 101); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task3Subtask8 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task3Subtask8" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask8.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 104); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask8.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 129); // 0
  WaitEvent(EVENT2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask8.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 161); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask8.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 173); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task4Subtask10 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task4Subtask10" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask10.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 79); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask10.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 119); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask10.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 108); // 0
  WaitEvent(EVENT4);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask10.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 96); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task4Subtask13 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task4Subtask13" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask13.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 182); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask13.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 42); // 0
  GetSpinlock(LOCK1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask13.4 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(8, 23); // 1
  ReleaseSpinlock(LOCK1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask13.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 64); // 0
  WaitEvent(EVENT0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask13.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 106); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask13.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 5); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task4Subtask9 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task4Subtask9" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask9.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 62); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask9.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 159); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask9.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 126); // 0
  ActivateTask(CPU0Task4Subtask13);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask9.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 112); // 0
  SetEvent(CPU0Task5Subtask14,EVENT3);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask9.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 178); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task5Subtask0 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task5Subtask0" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask0.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 107); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask0.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 175); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask0.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 55); // 0
  ActivateTask(CPU0Task5Subtask14);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask0.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 160); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask0.4 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(4, 26); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask0.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 86); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task5Subtask14 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task5Subtask14" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask14.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 20); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask14.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 82); // 0
  WaitEvent(EVENT3);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask14.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 24); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask14.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 14); // 0
  ActivateTask(CPU0Task5Subtask3);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask14.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 199); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task5Subtask3 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task5Subtask3" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask3.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 102); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask3.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 168); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask3.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 89); // 0
  WaitEvent(EVENT1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask3.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 119); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task1Subtask12 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task1Subtask12" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask12.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 28); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask12.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 34); // 0
  ActivateTask(CPU1Task1Subtask7);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask12.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 34); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask12.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 115); // 0
  ActivateTask(CPU0Task3Subtask5);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask12.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 91); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task1Subtask6 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task1Subtask6" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask6.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 58); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask6.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 14); // 0
  ActivateTask(CPU1Task1Subtask12);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask6.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 58); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask6.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 165); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task1Subtask7 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task1Subtask7" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask7.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 181); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask7.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 158); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask7.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 164); // 0
  ActivateTask(CPU0Task3Subtask8);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask7.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 8); // 0
  SetEvent(CPU0Task3Subtask8,EVENT2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask7.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 136); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task2Subtask1 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task2Subtask1" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask1.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 162); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask1.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 20); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask1.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 76); // 0
  GetSpinlock(LOCK2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask1.3 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(7, 21); // 1
  ReleaseSpinlock(LOCK2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask1.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 134); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task2Subtask2 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task2Subtask2" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask2.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 84); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask2.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 192); // 0
  GetSpinlock(LOCK1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask2.8 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(5, 13); // 1
  ReleaseSpinlock(LOCK1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask2.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 135); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask2.7 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(3, 22); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask2.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 168); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask2.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 81); // 0
  SetEvent(CPU0Task4Subtask13,EVENT0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask2.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 162); // 0
  SetEvent(CPU0Task5Subtask3,EVENT1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask2.6 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 107); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask2.9 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 63); // 0
  TerminateTask();

}
