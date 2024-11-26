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
DeclareTask(CPU0Task1Subtask1);
DeclareTask(CPU0Task1Subtask5);
DeclareTask(CPU0Task1Subtask9);
DeclareTask(CPU0Task1Subtask14);
DeclareTask(CPU0Task2Subtask8);
DeclareTask(CPU0Task2Subtask13);
DeclareTask(CPU0Task4Subtask0);
DeclareTask(CPU0Task4Subtask2);
DeclareTask(CPU0Task5Subtask7);
DeclareTask(CPU0Task5Subtask12);
DeclareTask(CPU1Task3Subtask3);
DeclareTask(CPU1Task3Subtask6);
DeclareTask(CPU1Task3Subtask10);
DeclareTask(CPU1Task3Subtask11);


TEST_MAKE_OS_MAIN( StartOS(0) )

// Prototypes

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task0Subtask4 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task1Subtask1 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task1Subtask14 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task1Subtask5 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task1Subtask9 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task2Subtask13 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task2Subtask8 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task4Subtask0 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task4Subtask2 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task5Subtask12 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task5Subtask7 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task3Subtask10 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task3Subtask11 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task3Subtask3 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task3Subtask6 (void);



void AUTOSAR_TASK_FUNC_CPU0Task0Subtask4 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task0Subtask4" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask4.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 50); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask4.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 14); // 0
  SetEvent(CPU0Task5Subtask7,EVENT0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask4.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 166); // 0
  GetSpinlock(LOCK1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask4.4 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(8, 25); // 1
  ReleaseSpinlock(LOCK1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask4.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 78); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask4.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 188); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task1Subtask1 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task1Subtask1" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask1.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 89); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask1.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 172); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask1.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 109); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task1Subtask14 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task1Subtask14" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask14.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 66); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask14.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 79); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask14.4 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(1, 24); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask14.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 99); // 0
  WaitEvent(EVENT4);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask14.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 61); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask14.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 83); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task1Subtask5 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task1Subtask5" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask5.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 187); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask5.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 178); // 0
  GetSpinlock(LOCK2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask5.5 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(2, 9); // 1
  ReleaseSpinlock(LOCK2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask5.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 134); // 0
  ActivateTask(CPU0Task1Subtask14);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask5.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 82); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask5.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 20); // 0
  WaitEvent(EVENT1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask5.6 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 186); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task1Subtask9 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task1Subtask9" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask9.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 159); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask9.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 126); // 0
  WaitEvent(EVENT3);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask9.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 196); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask9.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 198); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task2Subtask13 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task2Subtask13" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask13.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 30); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask13.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 154); // 0
  ActivateTask(CPU0Task2Subtask8);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask13.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 85); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask13.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 107); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task2Subtask8 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task2Subtask8" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask8.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 32); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask8.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 143); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask8.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 22); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task4Subtask0 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task4Subtask0" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask0.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 135); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask0.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 136); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask0.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 32); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task4Subtask2 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task4Subtask2" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask2.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 177); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask2.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 98); // 0
  ActivateTask(CPU0Task1Subtask9);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask2.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 94); // 0
  SetEvent(CPU0Task1Subtask9,EVENT3);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask2.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 32); // 0
  WaitEvent(EVENT2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask2.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 53); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask2.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 164); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task5Subtask12 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task5Subtask12" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask12.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 170); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask12.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 200); // 0
  ActivateTask(CPU0Task5Subtask7);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask12.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 53); // 0
  SetEvent(CPU0Task1Subtask14,EVENT4);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask12.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 86); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask12.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 101); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task5Subtask7 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task5Subtask7" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask7.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 115); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask7.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 120); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask7.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 150); // 0
  WaitEvent(EVENT0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask7.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 156); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task3Subtask10 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task3Subtask10" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask10.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 159); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask10.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 149); // 0
  ActivateTask(CPU0Task4Subtask2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask10.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 68); // 0
  ActivateTask(CPU0Task1Subtask5);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask10.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 66); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask10.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 90); // 0
  SetEvent(CPU0Task4Subtask2,EVENT2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask10.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 30); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task3Subtask11 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task3Subtask11" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask11.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 87); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask11.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 94); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask11.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 186); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task3Subtask3 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task3Subtask3" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask3.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 190); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask3.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 141); // 0
  ActivateTask(CPU1Task3Subtask10);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask3.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 136); // 0
  GetSpinlock(LOCK1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask3.4 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(1, 17); // 1
  ReleaseSpinlock(LOCK1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask3.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 139); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask3.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 171); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task3Subtask6 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task3Subtask6" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask6.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 57); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask6.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 31); // 0
  ActivateTask(CPU1Task3Subtask3);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask6.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 99); // 0
  SetEvent(CPU0Task1Subtask5,EVENT1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask6.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 32); // 0
  ActivateTask(CPU1Task3Subtask11);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask6.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 104); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask6.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 65); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask6.7 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(7, 30); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask6.6 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 174); // 0
  GetSpinlock(LOCK2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask6.8 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(5, 18); // 1
  ReleaseSpinlock(LOCK2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask6.9 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 178); // 0
  TerminateTask();

}
