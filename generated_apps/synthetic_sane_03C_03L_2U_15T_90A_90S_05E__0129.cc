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


DeclareTask(CPU0Task1Subtask0);
DeclareTask(CPU0Task1Subtask1);
DeclareTask(CPU0Task1Subtask2);
DeclareTask(CPU0Task1Subtask3);
DeclareTask(CPU0Task1Subtask12);
DeclareTask(CPU0Task4Subtask4);
DeclareTask(CPU0Task4Subtask6);
DeclareTask(CPU0Task4Subtask10);
DeclareTask(CPU0Task4Subtask13);
DeclareTask(CPU1Task2Subtask9);
DeclareTask(CPU1Task2Subtask11);
DeclareTask(CPU2Task0Subtask7);
DeclareTask(CPU2Task3Subtask8);
DeclareTask(CPU2Task3Subtask14);
DeclareTask(CPU2Task5Subtask5);


TEST_MAKE_OS_MAIN( StartOS(0) )

// Prototypes

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task1Subtask0 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task1Subtask1 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task1Subtask12 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task1Subtask2 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task1Subtask3 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task4Subtask10 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task4Subtask13 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task4Subtask4 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task4Subtask6 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task2Subtask11 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task2Subtask9 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task0Subtask7 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task3Subtask14 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task3Subtask8 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task5Subtask5 (void);



void AUTOSAR_TASK_FUNC_CPU0Task1Subtask0 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task1Subtask0" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask0.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 115); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask0.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 112); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask0.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 42); // 0
  ActivateTask(CPU0Task1Subtask12);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask0.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 173); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task1Subtask1 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task1Subtask1" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask1.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 170); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask1.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 97); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask1.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 24); // 0
  GetSpinlock(LOCK2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask1.4 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(8, 30); // 1
  ReleaseSpinlock(LOCK2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask1.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 72); // 0
  WaitEvent(EVENT3);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask1.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 137); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task1Subtask12 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task1Subtask12" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask12.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 72); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask12.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 25); // 0
  ActivateTask(CPU1Task2Subtask11);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask12.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 156); // 0
  ActivateTask(CPU0Task1Subtask3);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask12.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 10); // 0
  ActivateTask(CPU0Task1Subtask2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask12.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 171); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask12.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 186); // 0
  WaitEvent(EVENT2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask12.6 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 199); // 0
  SetEvent(CPU1Task2Subtask11,EVENT1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask12.7 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 90); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task1Subtask2 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task1Subtask2" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask2.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 76); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask2.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 81); // 0
  GetSpinlock(LOCK1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask2.4 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(10, 17); // 1
  ReleaseSpinlock(LOCK1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask2.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 54); // 0
  SetEvent(CPU0Task4Subtask4,EVENT4);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask2.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 87); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask2.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 39); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task1Subtask3 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task1Subtask3" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask3.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 103); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask3.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 158); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask3.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 101); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task4Subtask10 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task4Subtask10" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask10.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 31); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask10.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 116); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask10.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 66); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task4Subtask13 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task4Subtask13" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask13.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 141); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask13.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 154); // 0
  ActivateTask(CPU0Task4Subtask6);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask13.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 40); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask13.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 46); // 0
  SetEvent(CPU2Task3Subtask8,EVENT0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask13.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 133); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task4Subtask4 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task4Subtask4" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask4.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 31); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask4.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 22); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask4.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 98); // 0
  WaitEvent(EVENT4);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask4.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 33); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask4.4 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(4, 30); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask4.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 107); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task4Subtask6 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task4Subtask6" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask6.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 171); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask6.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 151); // 0
  ActivateTask(CPU0Task1Subtask1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask6.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 134); // 0
  SetEvent(CPU0Task1Subtask1,EVENT3);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask6.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 32); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask6.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 89); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task2Subtask11 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task2Subtask11" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask11.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 152); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask11.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 56); // 0
  GetSpinlock(LOCK1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask11.4 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(7, 19); // 1
  ReleaseSpinlock(LOCK1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask11.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 29); // 0
  WaitEvent(EVENT1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask11.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 95); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask11.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 108); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task2Subtask9 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task2Subtask9" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask9.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 194); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask9.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 174); // 0
  SetEvent(CPU0Task1Subtask12,EVENT2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask9.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 121); // 0
  ActivateTask(CPU0Task4Subtask10);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask9.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 42); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask9.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 169); // 0
  ActivateTask(CPU0Task1Subtask0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask9.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 77); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task0Subtask7 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task0Subtask7" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task0Subtask7.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 48); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task0Subtask7.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 56); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task0Subtask7.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 45); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task3Subtask14 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task3Subtask14" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task3Subtask14.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 91); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task3Subtask14.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 127); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task3Subtask14.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 152); // 0
  GetSpinlock(LOCK2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task3Subtask14.4 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(6, 26); // 1
  ReleaseSpinlock(LOCK2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task3Subtask14.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 100); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task3Subtask14.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 57); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task3Subtask8 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task3Subtask8" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task3Subtask8.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 31); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task3Subtask8.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 25); // 0
  WaitEvent(EVENT0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task3Subtask8.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 85); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task3Subtask8.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 129); // 0
  ActivateTask(CPU0Task4Subtask4);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task3Subtask8.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 40); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task5Subtask5 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task5Subtask5" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask5.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 140); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask5.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 25); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask5.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 81); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask5.3 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(8, 26); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask5.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 164); // 0
  TerminateTask();

}