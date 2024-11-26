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


DeclareTask(CPU0Task0Subtask8);
DeclareTask(CPU0Task0Subtask14);
DeclareTask(CPU1Task5Subtask6);
DeclareTask(CPU1Task5Subtask10);
DeclareTask(CPU2Task2Subtask9);
DeclareTask(CPU2Task2Subtask11);
DeclareTask(CPU2Task2Subtask12);
DeclareTask(CPU3Task4Subtask3);
DeclareTask(CPU3Task4Subtask5);
DeclareTask(CPU4Task3Subtask0);
DeclareTask(CPU4Task3Subtask2);
DeclareTask(CPU5Task1Subtask1);
DeclareTask(CPU5Task1Subtask4);
DeclareTask(CPU5Task1Subtask7);
DeclareTask(CPU5Task1Subtask13);


TEST_MAKE_OS_MAIN( StartOS(0) )

// Prototypes

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task0Subtask14 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task0Subtask8 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task5Subtask10 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task5Subtask6 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task2Subtask11 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task2Subtask12 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task2Subtask9 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU3Task4Subtask3 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU3Task4Subtask5 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU4Task3Subtask0 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU4Task3Subtask2 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU5Task1Subtask1 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU5Task1Subtask13 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU5Task1Subtask4 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU5Task1Subtask7 (void);



void AUTOSAR_TASK_FUNC_CPU0Task0Subtask14 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task0Subtask14" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask14.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 29); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask14.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 153); // 0
  WaitEvent(EVENT0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask14.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 159); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask14.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 108); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task0Subtask8 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task0Subtask8" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask8.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 131); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask8.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 108); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask8.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 126); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task5Subtask10 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task5Subtask10" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask10.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 97); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask10.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 175); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask10.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 124); // 0
  WaitEvent(EVENT1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask10.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 170); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task5Subtask6 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task5Subtask6" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask6.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 16); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask6.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 107); // 0
  ActivateTask(CPU1Task5Subtask10);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask6.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 184); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask6.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 167); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task2Subtask11 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task2Subtask11" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask11.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 169); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask11.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 83); // 0
  GetSpinlock(LOCK2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask11.4 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(2, 7); // 1
  ReleaseSpinlock(LOCK2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask11.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 127); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask11.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 142); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask11.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 195); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task2Subtask12 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task2Subtask12" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask12.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 34); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask12.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 111); // 0
  SetEvent(CPU5Task1Subtask1,EVENT2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask12.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 134); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask12.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 62); // 0
  SetEvent(CPU4Task3Subtask2,EVENT3);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask12.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 59); // 0
  ActivateTask(CPU4Task3Subtask2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask12.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 190); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task2Subtask9 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task2Subtask9" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask9.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 81); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask9.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 104); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask9.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 17); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask9.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 172); // 0
  SetEvent(CPU1Task5Subtask10,EVENT1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask9.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 10); // 0
  GetSpinlock(LOCK1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask9.6 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(10, 17); // 1
  ReleaseSpinlock(LOCK1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask9.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 52); // 0
  SetEvent(CPU5Task1Subtask4,EVENT4);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask9.7 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 34); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU3Task4Subtask3 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU3Task4Subtask3" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task4Subtask3.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 32); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task4Subtask3.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 42); // 0
  ActivateTask(CPU3Task4Subtask5);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task4Subtask3.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 43); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task4Subtask3.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 147); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU3Task4Subtask5 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU3Task4Subtask5" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task4Subtask5.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 170); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task4Subtask5.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 92); // 0
  GetSpinlock(LOCK2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task4Subtask5.3 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(8, 17); // 1
  ReleaseSpinlock(LOCK2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task4Subtask5.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 117); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task4Subtask5.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 128); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU4Task3Subtask0 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU4Task3Subtask0" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task3Subtask0.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 143); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task3Subtask0.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 191); // 0
  ActivateTask(CPU2Task2Subtask9);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task3Subtask0.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 140); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task3Subtask0.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 43); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU4Task3Subtask2 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU4Task3Subtask2" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task3Subtask2.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 23); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task3Subtask2.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 122); // 0
  WaitEvent(EVENT3);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task3Subtask2.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 40); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task3Subtask2.4 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(3, 13); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task3Subtask2.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 28); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task3Subtask2.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 112); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU5Task1Subtask1 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU5Task1Subtask1" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task1Subtask1.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 43); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task1Subtask1.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 184); // 0
  GetSpinlock(LOCK1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task1Subtask1.7 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(5, 12); // 1
  ReleaseSpinlock(LOCK1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task1Subtask1.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 130); // 0
  SetEvent(CPU0Task0Subtask14,EVENT0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task1Subtask1.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 171); // 0
  WaitEvent(EVENT2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task1Subtask1.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 118); // 0
  ActivateTask(CPU0Task0Subtask14);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task1Subtask1.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 81); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task1Subtask1.6 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 95); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task1Subtask1.8 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 160); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU5Task1Subtask13 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU5Task1Subtask13" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task1Subtask13.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 44); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task1Subtask13.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 188); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task1Subtask13.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 185); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU5Task1Subtask4 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU5Task1Subtask4" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task1Subtask4.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 169); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task1Subtask4.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 82); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task1Subtask4.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 195); // 0
  WaitEvent(EVENT4);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task1Subtask4.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 102); // 0
  ActivateTask(CPU5Task1Subtask1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task1Subtask4.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 62); // 0
  ActivateTask(CPU2Task2Subtask11);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task1Subtask4.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 156); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task1Subtask4.6 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(5, 11); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task1Subtask4.7 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 131); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU5Task1Subtask7 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU5Task1Subtask7" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task1Subtask7.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 194); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task1Subtask7.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 191); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task1Subtask7.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 162); // 0
  TerminateTask();

}
