#include "autosar/os.h"
#include "test/test.h"
#include "machine.h"

//#include "fail/trace.h"

void ara_timing_info(int, int);



DeclareSpinlock(LOCK0);




DeclareTask(CPU0Task0Subtask2);
DeclareTask(CPU0Task0Subtask4);
DeclareTask(CPU0Task0Subtask6);
DeclareTask(CPU1Task2Subtask7);
DeclareTask(CPU1Task2Subtask12);
DeclareTask(CPU2Task4Subtask3);
DeclareTask(CPU2Task4Subtask10);
DeclareTask(CPU2Task4Subtask13);
DeclareTask(CPU3Task1Subtask1);
DeclareTask(CPU3Task1Subtask8);
DeclareTask(CPU3Task1Subtask11);
DeclareTask(CPU3Task1Subtask14);
DeclareTask(CPU4Task5Subtask5);
DeclareTask(CPU4Task5Subtask9);
DeclareTask(CPU5Task3Subtask0);


TEST_MAKE_OS_MAIN( StartOS(0) )

// Prototypes

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task0Subtask2 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task0Subtask4 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task0Subtask6 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task2Subtask12 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task2Subtask7 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task4Subtask10 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task4Subtask13 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task4Subtask3 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU3Task1Subtask1 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU3Task1Subtask11 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU3Task1Subtask14 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU3Task1Subtask8 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU4Task5Subtask5 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU4Task5Subtask9 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU5Task3Subtask0 (void);



void AUTOSAR_TASK_FUNC_CPU0Task0Subtask2 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task0Subtask2" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask2.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 109); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask2.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 121); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask2.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 116); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task0Subtask4 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task0Subtask4" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask4.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 99); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask4.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 177); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask4.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 128); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task0Subtask6 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task0Subtask6" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask6.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 157); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask6.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 125); // 0
  ActivateTask(CPU0Task0Subtask2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask6.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 44); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask6.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 98); // 0
  ActivateTask(CPU0Task0Subtask4);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask6.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 142); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task2Subtask12 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task2Subtask12" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask12.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 29); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask12.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 160); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask12.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 42); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task2Subtask7 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task2Subtask7" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask7.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 69); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask7.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 11); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask7.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 18); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task4Subtask10 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task4Subtask10" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask10.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 35); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask10.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 186); // 0
  ActivateTask(CPU2Task4Subtask13);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask10.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 77); // 0
  ActivateTask(CPU2Task4Subtask3);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask10.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 129); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask10.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 174); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task4Subtask13 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task4Subtask13" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask13.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 104); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask13.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 170); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask13.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 71); // 0
  ActivateTask(CPU1Task2Subtask7);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask13.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 104); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask13.4 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(10, 27); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask13.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 27); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task4Subtask3 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task4Subtask3" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask3.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 68); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask3.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 105); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask3.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 146); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU3Task1Subtask1 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU3Task1Subtask1" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task1Subtask1.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 154); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task1Subtask1.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 188); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task1Subtask1.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 15); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU3Task1Subtask11 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU3Task1Subtask11" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task1Subtask11.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 164); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task1Subtask11.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 154); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task1Subtask11.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 182); // 0
  ActivateTask(CPU3Task1Subtask1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task1Subtask11.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 156); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU3Task1Subtask14 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU3Task1Subtask14" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task1Subtask14.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 120); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task1Subtask14.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 116); // 0
  ActivateTask(CPU3Task1Subtask8);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task1Subtask14.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 95); // 0
  ActivateTask(CPU3Task1Subtask11);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task1Subtask14.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 161); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task1Subtask14.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 167); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU3Task1Subtask8 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU3Task1Subtask8" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task1Subtask8.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 177); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task1Subtask8.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 98); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task1Subtask8.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 14); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU4Task5Subtask5 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU4Task5Subtask5" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task5Subtask5.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 33); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task5Subtask5.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 25); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task5Subtask5.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 154); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task5Subtask5.3 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(8, 23); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task5Subtask5.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 67); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU4Task5Subtask9 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU4Task5Subtask9" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task5Subtask9.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 82); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task5Subtask9.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 73); // 0
  ActivateTask(CPU4Task5Subtask5);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task5Subtask9.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 39); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task5Subtask9.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 32); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU5Task3Subtask0 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU5Task3Subtask0" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task3Subtask0.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 87); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task3Subtask0.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 173); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task3Subtask0.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 32); // 0
  TerminateTask();

}
