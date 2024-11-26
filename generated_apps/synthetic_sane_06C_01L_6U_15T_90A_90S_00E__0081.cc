#include "autosar/os.h"
#include "test/test.h"
#include "machine.h"

//#include "fail/trace.h"

void ara_timing_info(int, int);



DeclareSpinlock(LOCK0);




DeclareTask(CPU0Task0Subtask5);
DeclareTask(CPU0Task0Subtask11);
DeclareTask(CPU0Task0Subtask13);
DeclareTask(CPU1Task4Subtask1);
DeclareTask(CPU1Task4Subtask8);
DeclareTask(CPU1Task4Subtask9);
DeclareTask(CPU2Task2Subtask2);
DeclareTask(CPU2Task2Subtask7);
DeclareTask(CPU3Task3Subtask0);
DeclareTask(CPU3Task3Subtask10);
DeclareTask(CPU3Task3Subtask14);
DeclareTask(CPU4Task1Subtask3);
DeclareTask(CPU4Task1Subtask6);
DeclareTask(CPU4Task1Subtask12);
DeclareTask(CPU5Task5Subtask4);


TEST_MAKE_OS_MAIN( StartOS(0) )

// Prototypes

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task0Subtask11 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task0Subtask13 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task0Subtask5 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task4Subtask1 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task4Subtask8 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task4Subtask9 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task2Subtask2 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task2Subtask7 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU3Task3Subtask0 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU3Task3Subtask10 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU3Task3Subtask14 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU4Task1Subtask12 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU4Task1Subtask3 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU4Task1Subtask6 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU5Task5Subtask4 (void);



void AUTOSAR_TASK_FUNC_CPU0Task0Subtask11 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task0Subtask11" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask11.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 137); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask11.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 101); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask11.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 181); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask11.3 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(4, 18); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask11.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 96); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task0Subtask13 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task0Subtask13" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask13.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 160); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask13.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 162); // 0
  ActivateTask(CPU0Task0Subtask11);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask13.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 73); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask13.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 51); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task0Subtask5 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task0Subtask5" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask5.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 51); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask5.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 142); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask5.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 149); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task4Subtask1 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task4Subtask1" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask1.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 154); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask1.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 99); // 0
  ActivateTask(CPU1Task4Subtask9);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask1.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 160); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask1.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 163); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task4Subtask8 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task4Subtask8" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask8.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 173); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask8.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 164); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask8.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 103); // 0
  ActivateTask(CPU3Task3Subtask14);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask8.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 24); // 0
  ActivateTask(CPU1Task4Subtask1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask8.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 17); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task4Subtask9 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task4Subtask9" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask9.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 81); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask9.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 44); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask9.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 146); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task2Subtask2 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task2Subtask2" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask2.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 139); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask2.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 31); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask2.4 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(10, 28); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask2.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 56); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask2.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 48); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask2.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 66); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task2Subtask7 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task2Subtask7" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask7.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 182); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask7.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 169); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask7.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 160); // 0
  ActivateTask(CPU2Task2Subtask2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask7.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 107); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU3Task3Subtask0 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU3Task3Subtask0" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task3Subtask0.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 136); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task3Subtask0.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 159); // 0
  ActivateTask(CPU1Task4Subtask8);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task3Subtask0.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 70); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task3Subtask0.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 169); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU3Task3Subtask10 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU3Task3Subtask10" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task3Subtask10.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 176); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task3Subtask10.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 123); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task3Subtask10.4 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(9, 25); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task3Subtask10.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 173); // 0
  ActivateTask(CPU3Task3Subtask0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task3Subtask10.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 171); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task3Subtask10.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 155); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU3Task3Subtask14 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU3Task3Subtask14" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task3Subtask14.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 68); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task3Subtask14.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 188); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task3Subtask14.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 83); // 0
  ActivateTask(CPU3Task3Subtask10);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task3Subtask14.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 16); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU4Task1Subtask12 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU4Task1Subtask12" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task1Subtask12.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 102); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task1Subtask12.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 117); // 0
  ActivateTask(CPU4Task1Subtask6);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task1Subtask12.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 181); // 0
  ActivateTask(CPU4Task1Subtask3);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task1Subtask12.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 102); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task1Subtask12.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 102); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU4Task1Subtask3 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU4Task1Subtask3" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task1Subtask3.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 140); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task1Subtask3.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 18); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task1Subtask3.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 67); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU4Task1Subtask6 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU4Task1Subtask6" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task1Subtask6.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 53); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task1Subtask6.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 28); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task1Subtask6.3 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(10, 18); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task1Subtask6.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 34); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task1Subtask6.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 183); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU5Task5Subtask4 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU5Task5Subtask4" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task5Subtask4.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 181); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task5Subtask4.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 92); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task5Subtask4.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 25); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task5Subtask4.3 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(7, 13); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task5Subtask4.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 176); // 0
  TerminateTask();

}
