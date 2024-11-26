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


DeclareTask(CPU0Task0Subtask2);
DeclareTask(CPU0Task0Subtask10);
DeclareTask(CPU0Task0Subtask14);
DeclareTask(CPU1Task5Subtask6);
DeclareTask(CPU1Task5Subtask13);
DeclareTask(CPU2Task4Subtask1);
DeclareTask(CPU2Task4Subtask3);
DeclareTask(CPU2Task4Subtask7);
DeclareTask(CPU2Task4Subtask12);
DeclareTask(CPU3Task3Subtask8);
DeclareTask(CPU4Task1Subtask0);
DeclareTask(CPU4Task1Subtask5);
DeclareTask(CPU4Task1Subtask11);
DeclareTask(CPU5Task2Subtask4);
DeclareTask(CPU5Task2Subtask9);


TEST_MAKE_OS_MAIN( StartOS(0) )

// Prototypes

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task0Subtask10 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task0Subtask14 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task0Subtask2 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task5Subtask13 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task5Subtask6 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task4Subtask1 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task4Subtask12 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task4Subtask3 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task4Subtask7 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU3Task3Subtask8 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU4Task1Subtask0 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU4Task1Subtask11 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU4Task1Subtask5 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU5Task2Subtask4 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU5Task2Subtask9 (void);



void AUTOSAR_TASK_FUNC_CPU0Task0Subtask10 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task0Subtask10" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask10.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 113); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask10.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 187); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask10.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 11); // 0
  ActivateTask(CPU1Task5Subtask13);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask10.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 138); // 0
  WaitEvent(EVENT1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask10.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 158); // 0
  SetEvent(CPU1Task5Subtask13,EVENT4);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask10.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 196); // 0
  SetEvent(CPU5Task2Subtask9,EVENT3);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask10.6 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 102); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task0Subtask14 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task0Subtask14" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask14.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 18); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask14.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 124); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask14.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 125); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task0Subtask2 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task0Subtask2" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask2.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 116); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask2.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 78); // 0
  ActivateTask(CPU0Task0Subtask14);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask2.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 142); // 0
  SetEvent(CPU4Task1Subtask0,EVENT0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask2.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 115); // 0
  ActivateTask(CPU4Task1Subtask0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask2.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 112); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask2.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 130); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task5Subtask13 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task5Subtask13" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask13.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 84); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask13.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 155); // 0
  WaitEvent(EVENT4);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask13.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 126); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask13.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 168); // 0
  ActivateTask(CPU3Task3Subtask8);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask13.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 18); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask13.5 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(7, 12); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask13.6 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 37); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task5Subtask6 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task5Subtask6" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask6.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 151); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask6.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 149); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask6.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 174); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task4Subtask1 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task4Subtask1" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask1.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 81); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask1.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 149); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask1.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 16); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task4Subtask12 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task4Subtask12" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask12.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 67); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask12.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 151); // 0
  ActivateTask(CPU2Task4Subtask1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask12.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 163); // 0
  ActivateTask(CPU2Task4Subtask3);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask12.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 3); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask12.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 106); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task4Subtask3 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task4Subtask3" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask3.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 200); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask3.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 167); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask3.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 63); // 0
  ActivateTask(CPU2Task4Subtask7);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask3.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 73); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task4Subtask7 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task4Subtask7" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask7.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 84); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask7.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 12); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask7.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 152); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU3Task3Subtask8 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU3Task3Subtask8" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task3Subtask8.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 13); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task3Subtask8.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 107); // 0
  ActivateTask(CPU0Task0Subtask10);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task3Subtask8.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 152); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task3Subtask8.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 181); // 0
  SetEvent(CPU0Task0Subtask10,EVENT1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task3Subtask8.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 18); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU4Task1Subtask0 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU4Task1Subtask0" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task1Subtask0.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 175); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task1Subtask0.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 136); // 0
  WaitEvent(EVENT0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task1Subtask0.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 63); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task1Subtask0.5 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(3, 6); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task1Subtask0.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 176); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task1Subtask0.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 117); // 0
  ActivateTask(CPU4Task1Subtask5);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task1Subtask0.6 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 106); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU4Task1Subtask11 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU4Task1Subtask11" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task1Subtask11.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 43); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task1Subtask11.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 111); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task1Subtask11.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 163); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU4Task1Subtask5 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU4Task1Subtask5" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task1Subtask5.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 58); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task1Subtask5.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 42); // 0
  WaitEvent(EVENT2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task1Subtask5.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 141); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task1Subtask5.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 17); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU5Task2Subtask4 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU5Task2Subtask4" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task2Subtask4.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 96); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task2Subtask4.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 88); // 0
  ActivateTask(CPU5Task2Subtask9);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task2Subtask4.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 164); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task2Subtask4.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 171); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU5Task2Subtask9 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU5Task2Subtask9" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task2Subtask9.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 138); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task2Subtask9.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 99); // 0
  WaitEvent(EVENT3);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task2Subtask9.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 61); // 0
  SetEvent(CPU4Task1Subtask5,EVENT2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task2Subtask9.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 153); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task2Subtask9.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 166); // 0
  TerminateTask();

}
