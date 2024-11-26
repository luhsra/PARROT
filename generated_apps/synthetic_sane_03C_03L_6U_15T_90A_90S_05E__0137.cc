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


DeclareTask(CPU0Task1Subtask5);
DeclareTask(CPU0Task4Subtask4);
DeclareTask(CPU0Task4Subtask6);
DeclareTask(CPU0Task5Subtask10);
DeclareTask(CPU1Task0Subtask2);
DeclareTask(CPU1Task0Subtask7);
DeclareTask(CPU1Task0Subtask8);
DeclareTask(CPU1Task0Subtask12);
DeclareTask(CPU1Task0Subtask13);
DeclareTask(CPU1Task2Subtask0);
DeclareTask(CPU1Task2Subtask1);
DeclareTask(CPU1Task2Subtask9);
DeclareTask(CPU1Task2Subtask11);
DeclareTask(CPU2Task3Subtask3);
DeclareTask(CPU2Task3Subtask14);


TEST_MAKE_OS_MAIN( StartOS(0) )

// Prototypes

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task1Subtask5 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task4Subtask4 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task4Subtask6 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task5Subtask10 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task0Subtask12 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task0Subtask13 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task0Subtask2 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task0Subtask7 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task0Subtask8 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task2Subtask0 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task2Subtask1 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task2Subtask11 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task2Subtask9 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task3Subtask14 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task3Subtask3 (void);



void AUTOSAR_TASK_FUNC_CPU0Task1Subtask5 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task1Subtask5" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask5.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 189); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask5.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 198); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask5.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 83); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask5.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 105); // 0
  GetSpinlock(LOCK1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask5.4 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(6, 25); // 1
  ReleaseSpinlock(LOCK1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask5.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 193); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task4Subtask4 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task4Subtask4" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask4.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 11); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask4.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 67); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask4.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 73); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task4Subtask6 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task4Subtask6" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask6.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 23); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask6.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 129); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask6.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 117); // 0
  WaitEvent(EVENT3);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask6.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 100); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask6.5 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(10, 17); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask6.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 48); // 0
  SetEvent(CPU1Task0Subtask12,EVENT2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask6.6 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 179); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task5Subtask10 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task5Subtask10" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask10.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 39); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask10.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 82); // 0
  GetSpinlock(LOCK2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask10.3 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(3, 11); // 1
  ReleaseSpinlock(LOCK2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask10.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 57); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask10.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 198); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task0Subtask12 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task0Subtask12" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask12.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 190); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask12.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 92); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask12.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 91); // 0
  WaitEvent(EVENT2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask12.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 141); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task0Subtask13 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task0Subtask13" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask13.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 190); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask13.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 101); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask13.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 173); // 0
  ActivateTask(CPU1Task0Subtask2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask13.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 79); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task0Subtask2 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task0Subtask2" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask2.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 160); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask2.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 149); // 0
  ActivateTask(CPU1Task0Subtask12);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask2.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 78); // 0
  SetEvent(CPU1Task2Subtask0,EVENT0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask2.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 188); // 0
  WaitEvent(EVENT4);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask2.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 49); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask2.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 51); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task0Subtask7 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task0Subtask7" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask7.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 20); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask7.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 35); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask7.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 82); // 0
  WaitEvent(EVENT1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask7.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 22); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task0Subtask8 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task0Subtask8" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask8.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 174); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask8.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 42); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask8.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 3); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task2Subtask0 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task2Subtask0" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask0.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 34); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask0.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 170); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask0.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 74); // 0
  GetSpinlock(LOCK2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask0.5 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(6, 29); // 1
  ReleaseSpinlock(LOCK2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask0.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 172); // 0
  WaitEvent(EVENT0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask0.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 132); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask0.6 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 92); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task2Subtask1 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task2Subtask1" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask1.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 184); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask1.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 180); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask1.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 190); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task2Subtask11 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task2Subtask11" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask11.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 105); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask11.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 162); // 0
  SetEvent(CPU1Task0Subtask7,EVENT1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask11.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 155); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask11.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 127); // 0
  GetSpinlock(LOCK1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask11.7 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(5, 22); // 1
  ReleaseSpinlock(LOCK1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask11.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 103); // 0
  ActivateTask(CPU1Task0Subtask7);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask11.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 138); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask11.6 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 20); // 0
  ActivateTask(CPU1Task2Subtask0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask11.8 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 197); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task2Subtask9 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task2Subtask9" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask9.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 100); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask9.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 39); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask9.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 193); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task3Subtask14 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task3Subtask14" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task3Subtask14.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 26); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task3Subtask14.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 197); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task3Subtask14.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 135); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task3Subtask14.4 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(4, 15); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task3Subtask14.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 72); // 0
  SetEvent(CPU1Task0Subtask2,EVENT4);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task3Subtask14.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 48); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task3Subtask3 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task3Subtask3" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task3Subtask3.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 185); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task3Subtask3.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 151); // 0
  GetSpinlock(LOCK2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task3Subtask3.8 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(8, 18); // 1
  ReleaseSpinlock(LOCK2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task3Subtask3.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 108); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task3Subtask3.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 180); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task3Subtask3.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 130); // 0
  SetEvent(CPU0Task4Subtask6,EVENT3);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task3Subtask3.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 170); // 0
  GetSpinlock(LOCK1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task3Subtask3.7 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(3, 22); // 1
  ReleaseSpinlock(LOCK1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task3Subtask3.6 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 193); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task3Subtask3.9 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 123); // 0
  TerminateTask();

}
