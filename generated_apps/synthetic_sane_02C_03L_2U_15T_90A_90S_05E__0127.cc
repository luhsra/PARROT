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


DeclareTask(CPU0Task0Subtask1);
DeclareTask(CPU0Task5Subtask2);
DeclareTask(CPU0Task5Subtask6);
DeclareTask(CPU0Task5Subtask10);
DeclareTask(CPU1Task1Subtask7);
DeclareTask(CPU1Task1Subtask9);
DeclareTask(CPU1Task2Subtask0);
DeclareTask(CPU1Task2Subtask11);
DeclareTask(CPU1Task3Subtask3);
DeclareTask(CPU1Task3Subtask4);
DeclareTask(CPU1Task4Subtask5);
DeclareTask(CPU1Task4Subtask8);
DeclareTask(CPU1Task4Subtask12);
DeclareTask(CPU1Task4Subtask13);
DeclareTask(CPU1Task4Subtask14);


TEST_MAKE_OS_MAIN( StartOS(0) )

// Prototypes

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task0Subtask1 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task5Subtask10 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task5Subtask2 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task5Subtask6 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task1Subtask7 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task1Subtask9 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task2Subtask0 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task2Subtask11 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task3Subtask3 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task3Subtask4 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task4Subtask12 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task4Subtask13 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task4Subtask14 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task4Subtask5 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task4Subtask8 (void);



void AUTOSAR_TASK_FUNC_CPU0Task0Subtask1 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task0Subtask1" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask1.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 172); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask1.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 133); // 0
  GetSpinlock(LOCK1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask1.3 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(6, 11); // 1
  ReleaseSpinlock(LOCK1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask1.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 120); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask1.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 114); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task5Subtask10 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task5Subtask10" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask10.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 120); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask10.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 174); // 0
  ActivateTask(CPU1Task4Subtask13);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask10.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 90); // 0
  SetEvent(CPU1Task4Subtask13,EVENT4);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask10.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 39); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask10.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 101); // 0
  WaitEvent(EVENT2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask10.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 182); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task5Subtask2 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task5Subtask2" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask2.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 66); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask2.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 163); // 0
  ActivateTask(CPU0Task5Subtask10);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask2.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 82); // 0
  GetSpinlock(LOCK2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask2.6 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(3, 8); // 1
  ReleaseSpinlock(LOCK2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask2.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 102); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask2.5 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(2, 5); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask2.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 87); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask2.7 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 14); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task5Subtask6 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task5Subtask6" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask6.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 189); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask6.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 192); // 0
  ActivateTask(CPU1Task4Subtask12);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask6.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 119); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask6.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 158); // 0
  ActivateTask(CPU0Task5Subtask2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask6.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 36); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task1Subtask7 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task1Subtask7" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask7.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 107); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask7.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 179); // 0
  WaitEvent(EVENT0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask7.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 86); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask7.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 47); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task1Subtask9 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task1Subtask9" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask9.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 131); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask9.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 172); // 0
  SetEvent(CPU1Task2Subtask0,EVENT3);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask9.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 123); // 0
  ActivateTask(CPU1Task1Subtask7);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask9.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 27); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask9.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 116); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task2Subtask0 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task2Subtask0" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask0.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 84); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask0.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 31); // 0
  WaitEvent(EVENT3);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask0.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 154); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask0.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 124); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task2Subtask11 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task2Subtask11" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask11.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 171); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask11.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 80); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask11.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 172); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask11.4 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(7, 29); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask11.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 132); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask11.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 136); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task3Subtask3 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task3Subtask3" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask3.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 94); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask3.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 112); // 0
  GetSpinlock(LOCK1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask3.4 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(6, 18); // 1
  ReleaseSpinlock(LOCK1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask3.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 104); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask3.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 43); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask3.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 138); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task3Subtask4 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task3Subtask4" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask4.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 119); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask4.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 111); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask4.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 186); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task4Subtask12 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task4Subtask12" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask12.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 97); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask12.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 95); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask12.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 90); // 0
  SetEvent(CPU1Task4Subtask8,EVENT1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask12.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 161); // 0
  ActivateTask(CPU1Task4Subtask8);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask12.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 24); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task4Subtask13 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task4Subtask13" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask13.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 147); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask13.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 155); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask13.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 100); // 0
  WaitEvent(EVENT4);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask13.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 47); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task4Subtask14 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task4Subtask14" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask14.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 61); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask14.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 152); // 0
  SetEvent(CPU1Task1Subtask7,EVENT0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask14.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 67); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask14.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 151); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task4Subtask5 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task4Subtask5" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask5.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 178); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask5.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 70); // 0
  ActivateTask(CPU1Task4Subtask14);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask5.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 17); // 0
  SetEvent(CPU0Task5Subtask10,EVENT2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask5.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 199); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask5.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 199); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task4Subtask8 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task4Subtask8" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask8.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 16); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask8.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 85); // 0
  GetSpinlock(LOCK2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask8.4 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(8, 18); // 1
  ReleaseSpinlock(LOCK2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask8.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 100); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask8.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 30); // 0
  WaitEvent(EVENT1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask8.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 139); // 0
  TerminateTask();

}