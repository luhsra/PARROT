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


DeclareTask(CPU0Task0Subtask0);
DeclareTask(CPU0Task0Subtask7);
DeclareTask(CPU0Task0Subtask8);
DeclareTask(CPU1Task2Subtask3);
DeclareTask(CPU1Task2Subtask4);
DeclareTask(CPU1Task2Subtask11);
DeclareTask(CPU1Task2Subtask14);
DeclareTask(CPU2Task3Subtask9);
DeclareTask(CPU2Task3Subtask13);
DeclareTask(CPU3Task5Subtask6);
DeclareTask(CPU3Task5Subtask12);
DeclareTask(CPU4Task1Subtask2);
DeclareTask(CPU5Task4Subtask1);
DeclareTask(CPU5Task4Subtask5);
DeclareTask(CPU5Task4Subtask10);


TEST_MAKE_OS_MAIN( StartOS(0) )

// Prototypes

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task0Subtask0 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task0Subtask7 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task0Subtask8 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task2Subtask11 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task2Subtask14 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task2Subtask3 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task2Subtask4 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task3Subtask13 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task3Subtask9 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU3Task5Subtask12 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU3Task5Subtask6 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU4Task1Subtask2 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU5Task4Subtask1 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU5Task4Subtask10 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU5Task4Subtask5 (void);



void AUTOSAR_TASK_FUNC_CPU0Task0Subtask0 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task0Subtask0" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask0.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 121); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask0.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 182); // 0
  ActivateTask(CPU0Task0Subtask7);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask0.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 145); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask0.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 33); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task0Subtask7 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task0Subtask7" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask7.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 114); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask7.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 136); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask7.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 41); // 0
  WaitEvent(EVENT1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask7.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 52); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task0Subtask8 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task0Subtask8" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask8.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 16); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask8.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 66); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask8.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 193); // 0
  ActivateTask(CPU0Task0Subtask0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask8.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 150); // 0
  SetEvent(CPU0Task0Subtask7,EVENT1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask8.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 53); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task2Subtask11 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task2Subtask11" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask11.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 17); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask11.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 70); // 0
  WaitEvent(EVENT2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask11.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 150); // 0
  SetEvent(CPU3Task5Subtask12,EVENT0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask11.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 154); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask11.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 73); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task2Subtask14 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task2Subtask14" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask14.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 43); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask14.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 94); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask14.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 176); // 0
  SetEvent(CPU5Task4Subtask10,EVENT3);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask14.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 166); // 0
  WaitEvent(EVENT4);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask14.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 58); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task2Subtask3 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task2Subtask3" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask3.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 107); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask3.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 132); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask3.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 33); // 0
  ActivateTask(CPU1Task2Subtask11);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask3.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 18); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task2Subtask4 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task2Subtask4" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask4.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 71); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask4.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 49); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask4.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 103); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask4.5 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(1, 19); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask4.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 28); // 0
  SetEvent(CPU1Task2Subtask14,EVENT4);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask4.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 183); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask4.6 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 175); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task3Subtask13 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task3Subtask13" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task3Subtask13.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 100); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task3Subtask13.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 105); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task3Subtask13.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 172); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task3Subtask9 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task3Subtask9" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task3Subtask9.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 31); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task3Subtask9.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 149); // 0
  ActivateTask(CPU2Task3Subtask13);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task3Subtask9.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 128); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task3Subtask9.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 94); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU3Task5Subtask12 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU3Task5Subtask12" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task5Subtask12.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 76); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task5Subtask12.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 17); // 0
  WaitEvent(EVENT0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task5Subtask12.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 178); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task5Subtask12.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 87); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU3Task5Subtask6 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU3Task5Subtask6" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task5Subtask6.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 29); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task5Subtask6.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 181); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task5Subtask6.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 152); // 0
  ActivateTask(CPU3Task5Subtask12);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task5Subtask6.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 91); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU4Task1Subtask2 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU4Task1Subtask2" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task1Subtask2.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 128); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task1Subtask2.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 116); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task1Subtask2.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 121); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU5Task4Subtask1 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU5Task4Subtask1" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task4Subtask1.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 141); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task4Subtask1.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 53); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task4Subtask1.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 130); // 0
  ActivateTask(CPU1Task2Subtask4);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task4Subtask1.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 99); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU5Task4Subtask10 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU5Task4Subtask10" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task4Subtask10.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 47); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task4Subtask10.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 141); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task4Subtask10.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 176); // 0
  WaitEvent(EVENT3);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task4Subtask10.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 179); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU5Task4Subtask5 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU5Task4Subtask5" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task4Subtask5.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 83); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task4Subtask5.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 100); // 0
  ActivateTask(CPU5Task4Subtask1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task4Subtask5.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 89); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task4Subtask5.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 145); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task4Subtask5.6 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(3, 17); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task4Subtask5.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 103); // 0
  ActivateTask(CPU5Task4Subtask10);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task4Subtask5.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 77); // 0
  SetEvent(CPU1Task2Subtask11,EVENT2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task4Subtask5.7 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 148); // 0
  TerminateTask();

}
