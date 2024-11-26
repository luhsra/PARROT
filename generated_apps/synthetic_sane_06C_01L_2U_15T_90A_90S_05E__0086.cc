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


DeclareTask(CPU0Task1Subtask5);
DeclareTask(CPU0Task1Subtask8);
DeclareTask(CPU1Task3Subtask0);
DeclareTask(CPU1Task3Subtask3);
DeclareTask(CPU1Task3Subtask4);
DeclareTask(CPU2Task5Subtask1);
DeclareTask(CPU2Task5Subtask10);
DeclareTask(CPU3Task2Subtask7);
DeclareTask(CPU3Task2Subtask9);
DeclareTask(CPU3Task2Subtask12);
DeclareTask(CPU4Task0Subtask2);
DeclareTask(CPU4Task0Subtask13);
DeclareTask(CPU5Task4Subtask6);
DeclareTask(CPU5Task4Subtask11);
DeclareTask(CPU5Task4Subtask14);


TEST_MAKE_OS_MAIN( StartOS(0) )

// Prototypes

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task1Subtask5 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task1Subtask8 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task3Subtask0 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task3Subtask3 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task3Subtask4 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task5Subtask1 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task5Subtask10 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU3Task2Subtask12 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU3Task2Subtask7 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU3Task2Subtask9 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU4Task0Subtask13 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU4Task0Subtask2 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU5Task4Subtask11 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU5Task4Subtask14 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU5Task4Subtask6 (void);



void AUTOSAR_TASK_FUNC_CPU0Task1Subtask5 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task1Subtask5" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask5.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 142); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask5.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 77); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask5.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 35); // 0
  SetEvent(CPU2Task5Subtask10,EVENT4);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask5.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 151); // 0
  WaitEvent(EVENT0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask5.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 3); // 0
  ActivateTask(CPU2Task5Subtask10);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask5.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 132); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task1Subtask8 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task1Subtask8" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask8.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 133); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask8.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 28); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask8.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 136); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task3Subtask0 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task3Subtask0" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask0.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 43); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask0.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 186); // 0
  ActivateTask(CPU1Task3Subtask3);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask0.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 95); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask0.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 137); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task3Subtask3 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task3Subtask3" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask3.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 183); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask3.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 58); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask3.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 89); // 0
  ActivateTask(CPU0Task1Subtask5);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask3.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 21); // 0
  SetEvent(CPU0Task1Subtask5,EVENT0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask3.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 197); // 0
  ActivateTask(CPU1Task3Subtask4);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask3.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 81); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task3Subtask4 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task3Subtask4" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask4.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 103); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask4.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 129); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask4.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 108); // 0
  WaitEvent(EVENT2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask4.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 107); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task5Subtask1 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task5Subtask1" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask1.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 125); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask1.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 153); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask1.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 57); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task5Subtask10 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task5Subtask10" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask10.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 161); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask10.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 168); // 0
  SetEvent(CPU3Task2Subtask7,EVENT3);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask10.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 106); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask10.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 63); // 0
  WaitEvent(EVENT4);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask10.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 167); // 0
  ActivateTask(CPU3Task2Subtask7);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask10.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 60); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU3Task2Subtask12 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU3Task2Subtask12" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task2Subtask12.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 168); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task2Subtask12.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 171); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task2Subtask12.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 194); // 0
  SetEvent(CPU1Task3Subtask4,EVENT2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task2Subtask12.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 180); // 0
  SetEvent(CPU5Task4Subtask14,EVENT1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task2Subtask12.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 142); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU3Task2Subtask7 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU3Task2Subtask7" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task2Subtask7.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 18); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task2Subtask7.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 100); // 0
  WaitEvent(EVENT3);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task2Subtask7.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 77); // 0
  ActivateTask(CPU3Task2Subtask9);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task2Subtask7.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 31); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task2Subtask7.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 129); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU3Task2Subtask9 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU3Task2Subtask9" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task2Subtask9.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 98); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task2Subtask9.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 66); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task2Subtask9.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 129); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU4Task0Subtask13 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU4Task0Subtask13" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task0Subtask13.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 64); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task0Subtask13.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 95); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task0Subtask13.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 65); // 0
  ActivateTask(CPU4Task0Subtask2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task0Subtask13.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 181); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU4Task0Subtask2 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU4Task0Subtask2" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task0Subtask2.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 99); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task0Subtask2.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 151); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task0Subtask2.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 33); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task0Subtask2.3 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(8, 29); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task0Subtask2.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 27); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU5Task4Subtask11 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU5Task4Subtask11" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task4Subtask11.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 95); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task4Subtask11.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 176); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task4Subtask11.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 52); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU5Task4Subtask14 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU5Task4Subtask14" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task4Subtask14.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 29); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task4Subtask14.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 187); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task4Subtask14.4 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(5, 20); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task4Subtask14.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 183); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task4Subtask14.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 168); // 0
  WaitEvent(EVENT1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task4Subtask14.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 127); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU5Task4Subtask6 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU5Task4Subtask6" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task4Subtask6.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 27); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task4Subtask6.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 149); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task4Subtask6.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 22); // 0
  ActivateTask(CPU5Task4Subtask14);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task4Subtask6.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 80); // 0
  ActivateTask(CPU5Task4Subtask11);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task4Subtask6.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 84); // 0
  TerminateTask();

}
