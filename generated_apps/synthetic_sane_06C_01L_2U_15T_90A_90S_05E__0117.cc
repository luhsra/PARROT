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


DeclareTask(CPU0Task5Subtask4);
DeclareTask(CPU0Task5Subtask9);
DeclareTask(CPU0Task5Subtask13);
DeclareTask(CPU1Task3Subtask7);
DeclareTask(CPU1Task3Subtask14);
DeclareTask(CPU2Task0Subtask0);
DeclareTask(CPU2Task0Subtask6);
DeclareTask(CPU2Task0Subtask10);
DeclareTask(CPU2Task0Subtask12);
DeclareTask(CPU3Task1Subtask1);
DeclareTask(CPU4Task2Subtask5);
DeclareTask(CPU5Task4Subtask2);
DeclareTask(CPU5Task4Subtask3);
DeclareTask(CPU5Task4Subtask8);
DeclareTask(CPU5Task4Subtask11);


TEST_MAKE_OS_MAIN( StartOS(0) )

// Prototypes

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task5Subtask13 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task5Subtask4 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task5Subtask9 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task3Subtask14 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task3Subtask7 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task0Subtask0 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task0Subtask10 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task0Subtask12 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task0Subtask6 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU3Task1Subtask1 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU4Task2Subtask5 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU5Task4Subtask11 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU5Task4Subtask2 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU5Task4Subtask3 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU5Task4Subtask8 (void);



void AUTOSAR_TASK_FUNC_CPU0Task5Subtask13 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task5Subtask13" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask13.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 60); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask13.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 27); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask13.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 30); // 0
  ActivateTask(CPU0Task5Subtask4);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask13.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 46); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task5Subtask4 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task5Subtask4" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask4.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 28); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask4.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 33); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask4.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 148); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task5Subtask9 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task5Subtask9" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask9.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 49); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask9.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 40); // 0
  SetEvent(CPU2Task0Subtask10,EVENT4);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask9.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 190); // 0
  WaitEvent(EVENT2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask9.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 82); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask9.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 179); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task3Subtask14 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task3Subtask14" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask14.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 46); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask14.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 49); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask14.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 69); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task3Subtask7 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task3Subtask7" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask7.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 183); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask7.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 174); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask7.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 89); // 0
  WaitEvent(EVENT3);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask7.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 119); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task0Subtask0 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task0Subtask0" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task0Subtask0.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 127); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task0Subtask0.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 28); // 0
  SetEvent(CPU0Task5Subtask9,EVENT2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task0Subtask0.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 182); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task0Subtask0.9 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(9, 24); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task0Subtask0.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 113); // 0
  ActivateTask(CPU5Task4Subtask2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task0Subtask0.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 21); // 0
  SetEvent(CPU5Task4Subtask2,EVENT0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task0Subtask0.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 81); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task0Subtask0.6 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 176); // 0
  ActivateTask(CPU2Task0Subtask12);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task0Subtask0.7 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 82); // 0
  ActivateTask(CPU2Task0Subtask10);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task0Subtask0.8 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 175); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task0Subtask0.10 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 178); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task0Subtask10 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task0Subtask10" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task0Subtask10.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 182); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task0Subtask10.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 48); // 0
  WaitEvent(EVENT4);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task0Subtask10.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 61); // 0
  ActivateTask(CPU0Task5Subtask9);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task0Subtask10.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 199); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task0Subtask10.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 19); // 0
  ActivateTask(CPU1Task3Subtask7);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task0Subtask10.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 159); // 0
  SetEvent(CPU1Task3Subtask7,EVENT3);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task0Subtask10.6 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 82); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task0Subtask12 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task0Subtask12" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task0Subtask12.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 95); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task0Subtask12.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 78); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task0Subtask12.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 81); // 0
  ActivateTask(CPU3Task1Subtask1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task0Subtask12.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 42); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task0Subtask6 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task0Subtask6" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task0Subtask6.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 124); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task0Subtask6.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 27); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task0Subtask6.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 149); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU3Task1Subtask1 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU3Task1Subtask1" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task1Subtask1.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 172); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task1Subtask1.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 61); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task1Subtask1.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 112); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU4Task2Subtask5 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU4Task2Subtask5" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task2Subtask5.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 190); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task2Subtask5.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 124); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task2Subtask5.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 39); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU5Task4Subtask11 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU5Task4Subtask11" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task4Subtask11.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 55); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task4Subtask11.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 139); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task4Subtask11.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 29); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task4Subtask11.4 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(4, 12); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task4Subtask11.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 155); // 0
  WaitEvent(EVENT1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task4Subtask11.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 123); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU5Task4Subtask2 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU5Task4Subtask2" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task4Subtask2.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 185); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task4Subtask2.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 45); // 0
  WaitEvent(EVENT0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task4Subtask2.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 147); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task4Subtask2.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 170); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU5Task4Subtask3 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU5Task4Subtask3" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task4Subtask3.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 45); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task4Subtask3.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 97); // 0
  ActivateTask(CPU5Task4Subtask8);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task4Subtask3.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 41); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task4Subtask3.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 171); // 0
  SetEvent(CPU5Task4Subtask11,EVENT1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task4Subtask3.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 22); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU5Task4Subtask8 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU5Task4Subtask8" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task4Subtask8.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 145); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task4Subtask8.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 27); // 0
  ActivateTask(CPU5Task4Subtask11);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task4Subtask8.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 200); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task4Subtask8.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 167); // 0
  TerminateTask();

}
