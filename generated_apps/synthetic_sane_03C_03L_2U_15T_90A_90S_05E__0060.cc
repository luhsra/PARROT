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


DeclareTask(CPU0Task3Subtask4);
DeclareTask(CPU0Task4Subtask0);
DeclareTask(CPU0Task4Subtask1);
DeclareTask(CPU0Task4Subtask8);
DeclareTask(CPU1Task0Subtask2);
DeclareTask(CPU1Task0Subtask3);
DeclareTask(CPU1Task0Subtask10);
DeclareTask(CPU1Task5Subtask6);
DeclareTask(CPU1Task5Subtask7);
DeclareTask(CPU1Task5Subtask9);
DeclareTask(CPU1Task5Subtask12);
DeclareTask(CPU1Task5Subtask14);
DeclareTask(CPU2Task1Subtask11);
DeclareTask(CPU2Task1Subtask13);
DeclareTask(CPU2Task2Subtask5);


TEST_MAKE_OS_MAIN( StartOS(0) )

// Prototypes

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task3Subtask4 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task4Subtask0 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task4Subtask1 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task4Subtask8 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task0Subtask10 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task0Subtask2 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task0Subtask3 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task5Subtask12 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task5Subtask14 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task5Subtask6 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task5Subtask7 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task5Subtask9 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task1Subtask11 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task1Subtask13 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task2Subtask5 (void);



void AUTOSAR_TASK_FUNC_CPU0Task3Subtask4 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task3Subtask4" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask4.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 158); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask4.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 190); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask4.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 129); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task4Subtask0 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task4Subtask0" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask0.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 188); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask0.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 124); // 0
  WaitEvent(EVENT3);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask0.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 64); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask0.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 166); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask0.4 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(7, 18); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask0.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 145); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task4Subtask1 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task4Subtask1" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask1.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 115); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask1.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 22); // 0
  WaitEvent(EVENT2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask1.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 189); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask1.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 132); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task4Subtask8 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task4Subtask8" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask8.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 180); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask8.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 37); // 0
  GetSpinlock(LOCK2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask8.4 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(3, 22); // 1
  ReleaseSpinlock(LOCK2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask8.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 20); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask8.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 86); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask8.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 145); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task0Subtask10 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task0Subtask10" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask10.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 124); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask10.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 52); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask10.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 128); // 0
  ActivateTask(CPU1Task0Subtask2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask10.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 153); // 0
  SetEvent(CPU1Task5Subtask6,EVENT1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask10.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 169); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task0Subtask2 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task0Subtask2" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask2.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 163); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask2.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 137); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask2.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 89); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task0Subtask3 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task0Subtask3" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask3.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 84); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask3.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 43); // 0
  SetEvent(CPU2Task1Subtask13,EVENT0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask3.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 51); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask3.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 37); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask3.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 170); // 0
  GetSpinlock(LOCK2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask3.5 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(2, 23); // 1
  ReleaseSpinlock(LOCK2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask3.6 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 199); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task5Subtask12 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task5Subtask12" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask12.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 67); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask12.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 86); // 0
  ActivateTask(CPU1Task5Subtask9);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask12.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 157); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask12.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 176); // 0
  ActivateTask(CPU1Task5Subtask7);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask12.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 122); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task5Subtask14 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task5Subtask14" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask14.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 56); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask14.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 119); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask14.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 53); // 0
  SetEvent(CPU0Task4Subtask0,EVENT3);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask14.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 32); // 0
  SetEvent(CPU1Task5Subtask9,EVENT4);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask14.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 199); // 0
  ActivateTask(CPU0Task4Subtask0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask14.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 127); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask14.6 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 56); // 0
  GetSpinlock(LOCK1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask14.7 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(7, 30); // 1
  ReleaseSpinlock(LOCK1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask14.8 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 62); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task5Subtask6 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task5Subtask6" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask6.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 75); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask6.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 78); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask6.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 94); // 0
  WaitEvent(EVENT1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask6.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 106); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask6.4 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(8, 18); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask6.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 31); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task5Subtask7 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task5Subtask7" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask7.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 37); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask7.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 65); // 0
  ActivateTask(CPU1Task5Subtask14);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask7.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 190); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask7.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 132); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task5Subtask9 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task5Subtask9" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask9.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 73); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask9.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 180); // 0
  WaitEvent(EVENT4);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask9.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 66); // 0
  SetEvent(CPU0Task4Subtask1,EVENT2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask9.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 163); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask9.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 26); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task1Subtask11 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task1Subtask11" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask11.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 34); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask11.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 47); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask11.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 186); // 0
  ActivateTask(CPU2Task1Subtask13);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask11.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 160); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task1Subtask13 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task1Subtask13" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask13.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 173); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask13.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 54); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask13.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 161); // 0
  WaitEvent(EVENT0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask13.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 81); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task2Subtask5 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task2Subtask5" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask5.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 86); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask5.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 198); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask5.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 114); // 0
  GetSpinlock(LOCK1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask5.3 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(2, 14); // 1
  ReleaseSpinlock(LOCK1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask5.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 26); // 0
  TerminateTask();

}