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


DeclareTask(CPU0Task2Subtask5);
DeclareTask(CPU1Task0Subtask4);
DeclareTask(CPU1Task0Subtask9);
DeclareTask(CPU1Task0Subtask10);
DeclareTask(CPU1Task0Subtask12);
DeclareTask(CPU1Task3Subtask2);
DeclareTask(CPU1Task3Subtask11);
DeclareTask(CPU1Task4Subtask0);
DeclareTask(CPU1Task4Subtask6);
DeclareTask(CPU1Task4Subtask13);
DeclareTask(CPU2Task1Subtask1);
DeclareTask(CPU2Task1Subtask3);
DeclareTask(CPU2Task1Subtask8);
DeclareTask(CPU2Task5Subtask7);
DeclareTask(CPU2Task5Subtask14);


TEST_MAKE_OS_MAIN( StartOS(0) )

// Prototypes

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task2Subtask5 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task0Subtask10 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task0Subtask12 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task0Subtask4 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task0Subtask9 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task3Subtask11 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task3Subtask2 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task4Subtask0 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task4Subtask13 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task4Subtask6 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task1Subtask1 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task1Subtask3 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task1Subtask8 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task5Subtask14 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task5Subtask7 (void);



void AUTOSAR_TASK_FUNC_CPU0Task2Subtask5 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task2Subtask5" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask5.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 102); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask5.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 86); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask5.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 151); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task0Subtask10 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task0Subtask10" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask10.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 86); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask10.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 186); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask10.4 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(7, 16); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask10.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 100); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask10.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 109); // 0
  WaitEvent(EVENT2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask10.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 151); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task0Subtask12 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task0Subtask12" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask12.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 184); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask12.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 134); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask12.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 190); // 0
  WaitEvent(EVENT0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask12.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 30); // 0
  ActivateTask(CPU1Task0Subtask9);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask12.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 168); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task0Subtask4 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task0Subtask4" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask4.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 187); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask4.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 142); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask4.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 195); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task0Subtask9 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task0Subtask9" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask9.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 189); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask9.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 110); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask9.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 98); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task3Subtask11 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task3Subtask11" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask11.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 21); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask11.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 102); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask11.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 13); // 0
  ActivateTask(CPU2Task1Subtask3);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask11.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 81); // 0
  SetEvent(CPU1Task0Subtask12,EVENT0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask11.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 164); // 0
  SetEvent(CPU2Task1Subtask3,EVENT3);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask11.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 44); // 0
  ActivateTask(CPU1Task0Subtask12);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask11.6 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 189); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task3Subtask2 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task3Subtask2" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask2.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 164); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask2.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 31); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask2.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 55); // 0
  WaitEvent(EVENT4);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask2.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 37); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task4Subtask0 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task4Subtask0" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask0.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 51); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask0.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 143); // 0
  SetEvent(CPU2Task5Subtask7,EVENT1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask0.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 29); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask0.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 140); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task4Subtask13 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task4Subtask13" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask13.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 125); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask13.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 103); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask13.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 140); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask13.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 86); // 0
  ActivateTask(CPU1Task4Subtask0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask13.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 150); // 0
  GetSpinlock(LOCK1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask13.5 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(8, 10); // 1
  ReleaseSpinlock(LOCK1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask13.6 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 193); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task4Subtask6 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task4Subtask6" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask6.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 159); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask6.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 117); // 0
  GetSpinlock(LOCK2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask6.3 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(2, 24); // 1
  ReleaseSpinlock(LOCK2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask6.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 11); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask6.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 24); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task1Subtask1 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task1Subtask1" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask1.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 185); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask1.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 73); // 0
  ActivateTask(CPU2Task1Subtask8);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask1.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 31); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask1.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 27); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task1Subtask3 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task1Subtask3" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask3.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 19); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask3.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 50); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask3.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 194); // 0
  WaitEvent(EVENT3);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask3.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 162); // 0
  GetSpinlock(LOCK1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask3.4 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(3, 14); // 1
  ReleaseSpinlock(LOCK1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask3.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 85); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task1Subtask8 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task1Subtask8" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask8.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 190); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask8.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 125); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask8.3 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(1, 23); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask8.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 55); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask8.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 123); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task5Subtask14 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task5Subtask14" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask14.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 143); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask14.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 144); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask14.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 169); // 0
  ActivateTask(CPU1Task3Subtask2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask14.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 180); // 0
  SetEvent(CPU1Task3Subtask2,EVENT4);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask14.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 51); // 0
  ActivateTask(CPU2Task5Subtask7);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask14.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 100); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task5Subtask7 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task5Subtask7" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask7.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 166); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask7.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 187); // 0
  GetSpinlock(LOCK2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask7.6 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(6, 6); // 1
  ReleaseSpinlock(LOCK2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask7.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 38); // 0
  SetEvent(CPU1Task0Subtask10,EVENT2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask7.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 146); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask7.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 129); // 0
  WaitEvent(EVENT1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask7.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 4); // 0
  ActivateTask(CPU1Task0Subtask10);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask7.7 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 48); // 0
  TerminateTask();

}
