#include "autosar/os.h"
#include "test/test.h"
#include "machine.h"

//#include "fail/trace.h"

void ara_timing_info(int, int);



DeclareSpinlock(LOCK0);




DeclareTask(CPU0Task0Subtask0);
DeclareTask(CPU0Task0Subtask6);
DeclareTask(CPU0Task0Subtask7);
DeclareTask(CPU0Task0Subtask10);
DeclareTask(CPU1Task4Subtask4);
DeclareTask(CPU1Task4Subtask8);
DeclareTask(CPU1Task4Subtask11);
DeclareTask(CPU2Task1Subtask3);
DeclareTask(CPU3Task5Subtask1);
DeclareTask(CPU3Task5Subtask2);
DeclareTask(CPU4Task3Subtask5);
DeclareTask(CPU4Task3Subtask9);
DeclareTask(CPU4Task3Subtask13);
DeclareTask(CPU5Task2Subtask12);
DeclareTask(CPU5Task2Subtask14);


TEST_MAKE_OS_MAIN( StartOS(0) )

// Prototypes

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task0Subtask0 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task0Subtask10 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task0Subtask6 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task0Subtask7 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task4Subtask11 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task4Subtask4 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task4Subtask8 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task1Subtask3 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU3Task5Subtask1 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU3Task5Subtask2 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU4Task3Subtask13 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU4Task3Subtask5 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU4Task3Subtask9 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU5Task2Subtask12 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU5Task2Subtask14 (void);



void AUTOSAR_TASK_FUNC_CPU0Task0Subtask0 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task0Subtask0" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask0.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 52); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask0.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 188); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask0.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 79); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask0.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 187); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask0.6 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(10, 28); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask0.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 122); // 0
  ActivateTask(CPU0Task0Subtask6);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask0.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 100); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask0.7 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 182); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task0Subtask10 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task0Subtask10" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask10.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 59); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask10.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 158); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask10.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 92); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task0Subtask6 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task0Subtask6" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask6.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 126); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask6.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 127); // 0
  ActivateTask(CPU5Task2Subtask12);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask6.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 147); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask6.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 141); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task0Subtask7 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task0Subtask7" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask7.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 37); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask7.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 168); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask7.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 147); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task4Subtask11 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task4Subtask11" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask11.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 52); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask11.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 73); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask11.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 8); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task4Subtask4 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task4Subtask4" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask4.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 190); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask4.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 15); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask4.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 39); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task4Subtask8 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task4Subtask8" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask8.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 39); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask8.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 125); // 0
  ActivateTask(CPU1Task4Subtask11);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask8.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 166); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask8.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 89); // 0
  ActivateTask(CPU1Task4Subtask4);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask8.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 159); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask8.5 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(6, 6); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask8.6 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 102); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task1Subtask3 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task1Subtask3" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask3.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 71); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask3.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 88); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask3.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 102); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU3Task5Subtask1 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU3Task5Subtask1" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task5Subtask1.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 133); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task5Subtask1.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 45); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task5Subtask1.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 26); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU3Task5Subtask2 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU3Task5Subtask2" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task5Subtask2.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 60); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task5Subtask2.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 146); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task5Subtask2.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 46); // 0
  ActivateTask(CPU3Task5Subtask1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task5Subtask2.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 71); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU4Task3Subtask13 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU4Task3Subtask13" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task3Subtask13.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 168); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task3Subtask13.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 143); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task3Subtask13.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 165); // 0
  ActivateTask(CPU4Task3Subtask5);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task3Subtask13.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 38); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU4Task3Subtask5 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU4Task3Subtask5" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task3Subtask5.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 65); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task3Subtask5.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 197); // 0
  ActivateTask(CPU4Task3Subtask9);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task3Subtask5.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 61); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task3Subtask5.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 91); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU4Task3Subtask9 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU4Task3Subtask9" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task3Subtask9.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 91); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task3Subtask9.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 18); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task3Subtask9.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 139); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU5Task2Subtask12 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU5Task2Subtask12" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task2Subtask12.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 92); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task2Subtask12.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 110); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task2Subtask12.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 62); // 0
  ActivateTask(CPU5Task2Subtask14);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task2Subtask12.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 94); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU5Task2Subtask14 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU5Task2Subtask14" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task2Subtask14.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 67); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task2Subtask14.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 19); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task2Subtask14.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 44); // 0
  TerminateTask();

}
