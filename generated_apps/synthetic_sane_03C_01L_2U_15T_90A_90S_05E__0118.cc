#include "autosar/os.h"
#include "test/test.h"
#include "machine.h"

//#include "fail/trace.h"

void ara_timing_info(int, int);



DeclareSpinlock(LOCK0);


DeclareEvent(EVENT0, 1);
DeclareEvent(EVENT1, 2);
DeclareEvent(EVENT2, 3);
DeclareEvent(EVENT3, 4);
DeclareEvent(EVENT4, 5);


DeclareTask(CPU0Task0Subtask2);
DeclareTask(CPU0Task0Subtask13);
DeclareTask(CPU1Task1Subtask6);
DeclareTask(CPU1Task1Subtask8);
DeclareTask(CPU1Task1Subtask11);
DeclareTask(CPU1Task4Subtask1);
DeclareTask(CPU1Task4Subtask5);
DeclareTask(CPU2Task2Subtask0);
DeclareTask(CPU2Task2Subtask7);
DeclareTask(CPU2Task2Subtask12);
DeclareTask(CPU2Task3Subtask4);
DeclareTask(CPU2Task3Subtask14);
DeclareTask(CPU2Task5Subtask3);
DeclareTask(CPU2Task5Subtask9);
DeclareTask(CPU2Task5Subtask10);


TEST_MAKE_OS_MAIN( StartOS(0) )

// Prototypes

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task0Subtask13 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task0Subtask2 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task1Subtask11 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task1Subtask6 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task1Subtask8 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task4Subtask1 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task4Subtask5 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task2Subtask0 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task2Subtask12 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task2Subtask7 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task3Subtask14 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task3Subtask4 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task5Subtask10 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task5Subtask3 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task5Subtask9 (void);



void AUTOSAR_TASK_FUNC_CPU0Task0Subtask13 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task0Subtask13" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask13.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 173); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask13.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 117); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask13.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 72); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task0Subtask2 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task0Subtask2" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask2.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 139); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask2.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 51); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask2.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 100); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask2.4 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(1, 25); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask2.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 40); // 0
  WaitEvent(EVENT0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask2.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 101); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task1Subtask11 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task1Subtask11" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask11.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 176); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask11.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 107); // 0
  ActivateTask(CPU1Task1Subtask6);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask11.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 144); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask11.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 86); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task1Subtask6 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task1Subtask6" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask6.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 7); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask6.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 133); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask6.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 36); // 0
  SetEvent(CPU0Task0Subtask2,EVENT0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask6.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 103); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task1Subtask8 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task1Subtask8" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask8.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 125); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask8.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 21); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask8.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 65); // 0
  SetEvent(CPU2Task5Subtask9,EVENT2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask8.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 40); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask8.6 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(8, 29); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask8.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 174); // 0
  WaitEvent(EVENT3);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask8.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 145); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask8.7 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 83); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task4Subtask1 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task4Subtask1" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask1.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 48); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask1.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 91); // 0
  SetEvent(CPU1Task1Subtask8,EVENT3);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask1.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 126); // 0
  WaitEvent(EVENT4);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask1.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 181); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask1.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 9); // 0
  ActivateTask(CPU1Task1Subtask8);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask1.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 95); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task4Subtask5 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task4Subtask5" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask5.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 135); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask5.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 17); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask5.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 110); // 0
  ActivateTask(CPU1Task4Subtask1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask5.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 130); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task2Subtask0 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task2Subtask0" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask0.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 94); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask0.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 46); // 0
  WaitEvent(EVENT1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask0.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 34); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask0.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 122); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task2Subtask12 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task2Subtask12" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask12.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 46); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask12.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 87); // 0
  ActivateTask(CPU2Task2Subtask7);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask12.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 197); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask12.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 136); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task2Subtask7 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task2Subtask7" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask7.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 164); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask7.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 91); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask7.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 135); // 0
  ActivateTask(CPU2Task2Subtask0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask7.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 159); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task3Subtask14 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task3Subtask14" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task3Subtask14.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 49); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task3Subtask14.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 27); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task3Subtask14.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 50); // 0
  ActivateTask(CPU2Task3Subtask4);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task3Subtask14.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 99); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task3Subtask4 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task3Subtask4" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task3Subtask4.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 101); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task3Subtask4.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 14); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task3Subtask4.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 33); // 0
  SetEvent(CPU2Task2Subtask0,EVENT1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task3Subtask4.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 29); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task5Subtask10 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task5Subtask10" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask10.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 100); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask10.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 36); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask10.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 65); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task5Subtask3 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task5Subtask3" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask3.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 127); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask3.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 69); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask3.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 110); // 0
  SetEvent(CPU1Task4Subtask1,EVENT4);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask3.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 191); // 0
  ActivateTask(CPU2Task5Subtask9);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask3.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 20); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task5Subtask9 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task5Subtask9" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask9.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 57); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask9.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 71); // 0
  ActivateTask(CPU2Task5Subtask10);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask9.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 109); // 0
  WaitEvent(EVENT2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask9.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 93); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask9.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 59); // 0
  TerminateTask();

}
