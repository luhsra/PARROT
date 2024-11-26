#include "autosar/os.h"
#include "test/test.h"
#include "machine.h"

//#include "fail/trace.h"

void ara_timing_info(int, int);



DeclareSpinlock(LOCK0);




DeclareTask(CPU0Task5Subtask10);
DeclareTask(CPU0Task5Subtask13);
DeclareTask(CPU1Task3Subtask2);
DeclareTask(CPU1Task3Subtask3);
DeclareTask(CPU1Task3Subtask8);
DeclareTask(CPU2Task1Subtask1);
DeclareTask(CPU2Task1Subtask6);
DeclareTask(CPU2Task1Subtask9);
DeclareTask(CPU2Task1Subtask12);
DeclareTask(CPU3Task2Subtask7);
DeclareTask(CPU3Task2Subtask14);
DeclareTask(CPU4Task0Subtask0);
DeclareTask(CPU4Task0Subtask4);
DeclareTask(CPU4Task0Subtask11);
DeclareTask(CPU5Task4Subtask5);


TEST_MAKE_OS_MAIN( StartOS(0) )

// Prototypes

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task5Subtask10 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task5Subtask13 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task3Subtask2 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task3Subtask3 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task3Subtask8 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task1Subtask1 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task1Subtask12 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task1Subtask6 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task1Subtask9 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU3Task2Subtask14 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU3Task2Subtask7 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU4Task0Subtask0 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU4Task0Subtask11 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU4Task0Subtask4 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU5Task4Subtask5 (void);



void AUTOSAR_TASK_FUNC_CPU0Task5Subtask10 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task5Subtask10" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask10.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 54); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask10.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 166); // 0
  ActivateTask(CPU0Task5Subtask13);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask10.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 53); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask10.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 81); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task5Subtask13 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task5Subtask13" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask13.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 144); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask13.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 177); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask13.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 56); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task3Subtask2 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task3Subtask2" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask2.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 117); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask2.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 123); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask2.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 42); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task3Subtask3 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task3Subtask3" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask3.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 152); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask3.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 154); // 0
  ActivateTask(CPU1Task3Subtask2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask3.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 166); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask3.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 190); // 0
  ActivateTask(CPU1Task3Subtask8);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask3.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 41); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task3Subtask8 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task3Subtask8" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask8.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 176); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask8.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 167); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask8.4 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(7, 24); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask8.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 43); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask8.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 152); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask8.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 90); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task1Subtask1 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task1Subtask1" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask1.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 36); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask1.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 153); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask1.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 35); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task1Subtask12 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task1Subtask12" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask12.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 120); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask12.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 57); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask12.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 159); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task1Subtask6 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task1Subtask6" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask6.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 150); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask6.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 126); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask6.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 145); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task1Subtask9 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task1Subtask9" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask9.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 165); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask9.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 39); // 0
  ActivateTask(CPU2Task1Subtask12);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask9.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 13); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask9.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 89); // 0
  ActivateTask(CPU2Task1Subtask6);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask9.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 90); // 0
  ActivateTask(CPU2Task1Subtask1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask9.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 153); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU3Task2Subtask14 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU3Task2Subtask14" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task2Subtask14.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 49); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task2Subtask14.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 95); // 0
  ActivateTask(CPU3Task2Subtask7);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task2Subtask14.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 95); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task2Subtask14.4 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(2, 17); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task2Subtask14.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 61); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task2Subtask14.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 189); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU3Task2Subtask7 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU3Task2Subtask7" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task2Subtask7.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 40); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task2Subtask7.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 158); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task2Subtask7.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 54); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU4Task0Subtask0 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU4Task0Subtask0" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task0Subtask0.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 74); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task0Subtask0.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 163); // 0
  ActivateTask(CPU4Task0Subtask4);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task0Subtask0.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 67); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task0Subtask0.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 30); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU4Task0Subtask11 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU4Task0Subtask11" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task0Subtask11.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 189); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task0Subtask11.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 160); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task0Subtask11.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 27); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU4Task0Subtask4 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU4Task0Subtask4" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task0Subtask4.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 13); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task0Subtask4.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 31); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task0Subtask4.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 91); // 0
  ActivateTask(CPU4Task0Subtask11);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task0Subtask4.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 193); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU5Task4Subtask5 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU5Task4Subtask5" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task4Subtask5.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 195); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task4Subtask5.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 34); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task4Subtask5.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 81); // 0
  TerminateTask();

}
