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


DeclareTask(CPU0Task3Subtask8);
DeclareTask(CPU1Task0Subtask1);
DeclareTask(CPU1Task0Subtask4);
DeclareTask(CPU1Task0Subtask7);
DeclareTask(CPU1Task0Subtask12);
DeclareTask(CPU2Task4Subtask0);
DeclareTask(CPU2Task4Subtask2);
DeclareTask(CPU2Task4Subtask11);
DeclareTask(CPU2Task4Subtask13);
DeclareTask(CPU3Task2Subtask3);
DeclareTask(CPU3Task2Subtask10);
DeclareTask(CPU4Task1Subtask5);
DeclareTask(CPU4Task1Subtask6);
DeclareTask(CPU5Task5Subtask9);
DeclareTask(CPU5Task5Subtask14);


TEST_MAKE_OS_MAIN( StartOS(0) )

// Prototypes

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task3Subtask8 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task0Subtask1 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task0Subtask12 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task0Subtask4 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task0Subtask7 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task4Subtask0 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task4Subtask11 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task4Subtask13 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task4Subtask2 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU3Task2Subtask10 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU3Task2Subtask3 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU4Task1Subtask5 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU4Task1Subtask6 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU5Task5Subtask14 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU5Task5Subtask9 (void);



void AUTOSAR_TASK_FUNC_CPU0Task3Subtask8 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task3Subtask8" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask8.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 199); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask8.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 167); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask8.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 53); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task0Subtask1 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task0Subtask1" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask1.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 180); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask1.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 180); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask1.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 110); // 0
  ActivateTask(CPU1Task0Subtask12);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask1.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 165); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task0Subtask12 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task0Subtask12" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask12.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 103); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask12.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 25); // 0
  WaitEvent(EVENT4);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask12.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 67); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask12.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 53); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task0Subtask4 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task0Subtask4" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask4.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 34); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask4.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 113); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask4.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 3); // 0
  WaitEvent(EVENT2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask4.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 165); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task0Subtask7 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task0Subtask7" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask7.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 39); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask7.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 115); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask7.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 84); // 0
  ActivateTask(CPU1Task0Subtask1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask7.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 9); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask7.8 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(2, 30); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask7.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 132); // 0
  SetEvent(CPU2Task4Subtask0,EVENT3);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask7.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 50); // 0
  SetEvent(CPU2Task4Subtask13,EVENT1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask7.6 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 99); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask7.7 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 91); // 0
  ActivateTask(CPU2Task4Subtask0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask7.9 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 40); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task4Subtask0 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task4Subtask0" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask0.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 141); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask0.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 134); // 0
  WaitEvent(EVENT3);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask0.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 199); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask0.4 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(10, 26); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask0.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 10); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask0.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 42); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task4Subtask11 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task4Subtask11" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask11.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 123); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask11.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 182); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask11.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 100); // 0
  WaitEvent(EVENT0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask11.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 160); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task4Subtask13 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task4Subtask13" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask13.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 170); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask13.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 52); // 0
  WaitEvent(EVENT1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask13.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 120); // 0
  ActivateTask(CPU2Task4Subtask11);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask13.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 146); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask13.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 79); // 0
  ActivateTask(CPU1Task0Subtask7);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask13.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 107); // 0
  SetEvent(CPU1Task0Subtask12,EVENT4);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask13.6 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 27); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task4Subtask2 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task4Subtask2" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask2.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 55); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask2.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 36); // 0
  SetEvent(CPU2Task4Subtask11,EVENT0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask2.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 181); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask2.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 197); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU3Task2Subtask10 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU3Task2Subtask10" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task2Subtask10.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 70); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task2Subtask10.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 191); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task2Subtask10.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 93); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU3Task2Subtask3 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU3Task2Subtask3" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task2Subtask3.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 186); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task2Subtask3.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 18); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task2Subtask3.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 190); // 0
  ActivateTask(CPU3Task2Subtask10);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task2Subtask3.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 119); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU4Task1Subtask5 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU4Task1Subtask5" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task1Subtask5.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 133); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task1Subtask5.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 195); // 0
  ActivateTask(CPU4Task1Subtask6);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task1Subtask5.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 12); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task1Subtask5.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 186); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU4Task1Subtask6 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU4Task1Subtask6" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task1Subtask6.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 93); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task1Subtask6.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 84); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task1Subtask6.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 165); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU5Task5Subtask14 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU5Task5Subtask14" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task5Subtask14.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 51); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task5Subtask14.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 163); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task5Subtask14.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 103); // 0
  ActivateTask(CPU5Task5Subtask9);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task5Subtask14.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 98); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU5Task5Subtask9 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU5Task5Subtask9" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task5Subtask9.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 185); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task5Subtask9.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 59); // 0
  SetEvent(CPU1Task0Subtask4,EVENT2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task5Subtask9.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 164); // 0
  ActivateTask(CPU1Task0Subtask4);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task5Subtask9.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 101); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task5Subtask9.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 158); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task5Subtask9.5 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(2, 12); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task5Subtask9.6 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 18); // 0
  TerminateTask();

}
