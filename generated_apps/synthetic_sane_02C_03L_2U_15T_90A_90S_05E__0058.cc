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


DeclareTask(CPU0Task0Subtask7);
DeclareTask(CPU0Task2Subtask0);
DeclareTask(CPU0Task2Subtask1);
DeclareTask(CPU0Task2Subtask4);
DeclareTask(CPU1Task1Subtask5);
DeclareTask(CPU1Task1Subtask11);
DeclareTask(CPU1Task3Subtask3);
DeclareTask(CPU1Task3Subtask8);
DeclareTask(CPU1Task3Subtask9);
DeclareTask(CPU1Task3Subtask10);
DeclareTask(CPU1Task4Subtask2);
DeclareTask(CPU1Task4Subtask6);
DeclareTask(CPU1Task4Subtask14);
DeclareTask(CPU1Task5Subtask12);
DeclareTask(CPU1Task5Subtask13);


TEST_MAKE_OS_MAIN( StartOS(0) )

// Prototypes

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task0Subtask7 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task2Subtask0 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task2Subtask1 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task2Subtask4 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task1Subtask11 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task1Subtask5 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task3Subtask10 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task3Subtask3 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task3Subtask8 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task3Subtask9 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task4Subtask14 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task4Subtask2 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task4Subtask6 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task5Subtask12 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task5Subtask13 (void);



void AUTOSAR_TASK_FUNC_CPU0Task0Subtask7 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task0Subtask7" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask7.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 130); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask7.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 133); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask7.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 105); // 0
  SetEvent(CPU1Task4Subtask6,EVENT2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask7.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 145); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task2Subtask0 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task2Subtask0" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask0.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 102); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask0.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 90); // 0
  GetSpinlock(LOCK2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask0.5 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(4, 14); // 1
  ReleaseSpinlock(LOCK2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask0.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 28); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask0.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 64); // 0
  ActivateTask(CPU1Task3Subtask9);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask0.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 21); // 0
  ActivateTask(CPU0Task2Subtask1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask0.6 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 19); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task2Subtask1 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task2Subtask1" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask1.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 53); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask1.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 122); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask1.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 116); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask1.4 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(9, 18); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask1.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 164); // 0
  ActivateTask(CPU0Task2Subtask4);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask1.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 179); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task2Subtask4 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task2Subtask4" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask4.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 129); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask4.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 140); // 0
  GetSpinlock(LOCK1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask4.4 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(4, 12); // 1
  ReleaseSpinlock(LOCK1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask4.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 140); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask4.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 93); // 0
  WaitEvent(EVENT0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask4.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 22); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task1Subtask11 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task1Subtask11" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask11.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 120); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask11.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 178); // 0
  ActivateTask(CPU1Task1Subtask5);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask11.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 85); // 0
  SetEvent(CPU0Task2Subtask4,EVENT0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask11.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 114); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask11.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 2); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task1Subtask5 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task1Subtask5" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask5.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 71); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask5.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 17); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask5.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 99); // 0
  WaitEvent(EVENT4);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask5.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 140); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task3Subtask10 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task3Subtask10" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask10.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 126); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask10.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 128); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask10.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 136); // 0
  ActivateTask(CPU1Task3Subtask8);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask10.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 58); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task3Subtask3 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task3Subtask3" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask3.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 33); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask3.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 144); // 0
  SetEvent(CPU1Task1Subtask5,EVENT4);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask3.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 90); // 0
  WaitEvent(EVENT1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask3.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 64); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask3.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 169); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task3Subtask8 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task3Subtask8" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask8.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 144); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask8.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 129); // 0
  SetEvent(CPU1Task3Subtask9,EVENT3);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask8.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 84); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask8.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 13); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task3Subtask9 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task3Subtask9" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask9.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 61); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask9.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 165); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask9.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 178); // 0
  WaitEvent(EVENT3);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask9.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 187); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task4Subtask14 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task4Subtask14" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask14.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 172); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask14.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 88); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask14.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 199); // 0
  ActivateTask(CPU1Task4Subtask2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask14.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 42); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task4Subtask2 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task4Subtask2" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask2.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 77); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask2.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 15); // 0
  SetEvent(CPU1Task3Subtask3,EVENT1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask2.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 154); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask2.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 10); // 0
  GetSpinlock(LOCK2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask2.6 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(6, 9); // 1
  ReleaseSpinlock(LOCK2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask2.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 149); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask2.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 49); // 0
  ActivateTask(CPU1Task4Subtask6);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask2.7 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 127); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task4Subtask6 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task4Subtask6" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask6.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 140); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask6.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 103); // 0
  WaitEvent(EVENT2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask6.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 63); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask6.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 187); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task5Subtask12 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task5Subtask12" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask12.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 86); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask12.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 84); // 0
  GetSpinlock(LOCK1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask12.4 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(8, 30); // 1
  ReleaseSpinlock(LOCK1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask12.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 63); // 0
  ActivateTask(CPU0Task0Subtask7);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask12.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 117); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask12.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 47); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task5Subtask13 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task5Subtask13" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask13.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 182); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask13.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 121); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask13.4 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(3, 3); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask13.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 116); // 0
  ActivateTask(CPU1Task5Subtask12);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask13.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 124); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask13.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 55); // 0
  TerminateTask();

}
