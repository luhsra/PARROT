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


DeclareTask(CPU0Task4Subtask6);
DeclareTask(CPU0Task4Subtask12);
DeclareTask(CPU1Task3Subtask5);
DeclareTask(CPU1Task3Subtask7);
DeclareTask(CPU2Task0Subtask2);
DeclareTask(CPU2Task0Subtask3);
DeclareTask(CPU2Task0Subtask4);
DeclareTask(CPU2Task0Subtask9);
DeclareTask(CPU3Task5Subtask1);
DeclareTask(CPU3Task5Subtask10);
DeclareTask(CPU4Task1Subtask11);
DeclareTask(CPU4Task1Subtask14);
DeclareTask(CPU5Task2Subtask0);
DeclareTask(CPU5Task2Subtask8);
DeclareTask(CPU5Task2Subtask13);


TEST_MAKE_OS_MAIN( StartOS(0) )

// Prototypes

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task4Subtask12 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task4Subtask6 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task3Subtask5 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task3Subtask7 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task0Subtask2 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task0Subtask3 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task0Subtask4 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task0Subtask9 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU3Task5Subtask1 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU3Task5Subtask10 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU4Task1Subtask11 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU4Task1Subtask14 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU5Task2Subtask0 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU5Task2Subtask13 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU5Task2Subtask8 (void);



void AUTOSAR_TASK_FUNC_CPU0Task4Subtask12 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task4Subtask12" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask12.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 27); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask12.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 192); // 0
  ActivateTask(CPU0Task4Subtask6);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask12.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 80); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask12.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 81); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task4Subtask6 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task4Subtask6" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask6.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 186); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask6.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 68); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask6.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 82); // 0
  WaitEvent(EVENT1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask6.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 182); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task3Subtask5 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task3Subtask5" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask5.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 134); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask5.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 66); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask5.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 93); // 0
  ActivateTask(CPU1Task3Subtask7);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask5.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 57); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task3Subtask7 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task3Subtask7" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask7.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 117); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask7.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 79); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask7.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 110); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task0Subtask2 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task0Subtask2" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task0Subtask2.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 83); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task0Subtask2.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 182); // 0
  WaitEvent(EVENT3);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task0Subtask2.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 200); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task0Subtask2.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 131); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task0Subtask3 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task0Subtask3" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task0Subtask3.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 84); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task0Subtask3.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 20); // 0
  SetEvent(CPU2Task0Subtask9,EVENT4);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task0Subtask3.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 24); // 0
  ActivateTask(CPU2Task0Subtask9);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task0Subtask3.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 158); // 0
  ActivateTask(CPU4Task1Subtask14);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task0Subtask3.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 189); // 0
  SetEvent(CPU4Task1Subtask14,EVENT0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task0Subtask3.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 176); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task0Subtask3.6 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 91); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task0Subtask4 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task0Subtask4" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task0Subtask4.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 198); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task0Subtask4.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 59); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task0Subtask4.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 46); // 0
  ActivateTask(CPU2Task0Subtask3);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task0Subtask4.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 144); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task0Subtask9 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task0Subtask9" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task0Subtask9.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 34); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task0Subtask9.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 154); // 0
  WaitEvent(EVENT4);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task0Subtask9.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 199); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task0Subtask9.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 35); // 0
  SetEvent(CPU3Task5Subtask10,EVENT2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task0Subtask9.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 67); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU3Task5Subtask1 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU3Task5Subtask1" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task5Subtask1.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 118); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task5Subtask1.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 111); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task5Subtask1.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 105); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU3Task5Subtask10 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU3Task5Subtask10" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task5Subtask10.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 73); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task5Subtask10.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 187); // 0
  ActivateTask(CPU2Task0Subtask4);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task5Subtask10.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 29); // 0
  WaitEvent(EVENT2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task5Subtask10.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 102); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task5Subtask10.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 185); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU4Task1Subtask11 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU4Task1Subtask11" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task1Subtask11.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 72); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task1Subtask11.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 21); // 0
  SetEvent(CPU0Task4Subtask6,EVENT1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task1Subtask11.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 19); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task1Subtask11.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 60); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU4Task1Subtask14 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU4Task1Subtask14" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task1Subtask14.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 187); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task1Subtask14.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 8); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task1Subtask14.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 30); // 0
  WaitEvent(EVENT0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task1Subtask14.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 163); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task1Subtask14.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 156); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task1Subtask14.5 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(2, 14); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task1Subtask14.6 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 138); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU5Task2Subtask0 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU5Task2Subtask0" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task2Subtask0.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 36); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task2Subtask0.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 46); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task2Subtask0.3 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(3, 26); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task2Subtask0.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 143); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task2Subtask0.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 45); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU5Task2Subtask13 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU5Task2Subtask13" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task2Subtask13.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 152); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task2Subtask13.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 52); // 0
  SetEvent(CPU2Task0Subtask2,EVENT3);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task2Subtask13.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 154); // 0
  ActivateTask(CPU5Task2Subtask0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task2Subtask13.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 61); // 0
  ActivateTask(CPU2Task0Subtask2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task2Subtask13.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 154); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task2Subtask13.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 106); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU5Task2Subtask8 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU5Task2Subtask8" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task2Subtask8.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 81); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task2Subtask8.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 59); // 0
  ActivateTask(CPU5Task2Subtask13);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task2Subtask8.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 25); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task2Subtask8.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 91); // 0
  TerminateTask();

}
