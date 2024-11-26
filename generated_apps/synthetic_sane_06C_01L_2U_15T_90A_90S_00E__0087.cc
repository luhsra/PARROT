#include "autosar/os.h"
#include "test/test.h"
#include "machine.h"

//#include "fail/trace.h"

void ara_timing_info(int, int);



DeclareSpinlock(LOCK0);




DeclareTask(CPU0Task4Subtask4);
DeclareTask(CPU0Task4Subtask7);
DeclareTask(CPU0Task4Subtask11);
DeclareTask(CPU1Task2Subtask5);
DeclareTask(CPU1Task2Subtask6);
DeclareTask(CPU1Task2Subtask8);
DeclareTask(CPU1Task2Subtask13);
DeclareTask(CPU2Task5Subtask2);
DeclareTask(CPU2Task5Subtask10);
DeclareTask(CPU2Task5Subtask14);
DeclareTask(CPU3Task1Subtask0);
DeclareTask(CPU3Task1Subtask3);
DeclareTask(CPU4Task3Subtask9);
DeclareTask(CPU5Task0Subtask1);
DeclareTask(CPU5Task0Subtask12);


TEST_MAKE_OS_MAIN( StartOS(0) )

// Prototypes

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task4Subtask11 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task4Subtask4 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task4Subtask7 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task2Subtask13 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task2Subtask5 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task2Subtask6 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task2Subtask8 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task5Subtask10 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task5Subtask14 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task5Subtask2 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU3Task1Subtask0 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU3Task1Subtask3 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU4Task3Subtask9 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU5Task0Subtask1 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU5Task0Subtask12 (void);



void AUTOSAR_TASK_FUNC_CPU0Task4Subtask11 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task4Subtask11" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask11.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 89); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask11.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 79); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask11.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 196); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task4Subtask4 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task4Subtask4" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask4.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 99); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask4.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 20); // 0
  ActivateTask(CPU0Task4Subtask7);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask4.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 56); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask4.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 130); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task4Subtask7 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task4Subtask7" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask7.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 29); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask7.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 185); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask7.3 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(8, 30); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask7.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 36); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask7.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 108); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task2Subtask13 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task2Subtask13" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask13.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 10); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask13.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 105); // 0
  ActivateTask(CPU1Task2Subtask6);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask13.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 55); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask13.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 192); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task2Subtask5 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task2Subtask5" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask5.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 58); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask5.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 139); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask5.4 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(10, 27); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask5.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 98); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask5.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 144); // 0
  ActivateTask(CPU1Task2Subtask8);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask5.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 15); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task2Subtask6 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task2Subtask6" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask6.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 31); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask6.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 92); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask6.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 125); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task2Subtask8 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task2Subtask8" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask8.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 88); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask8.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 27); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask8.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 76); // 0
  ActivateTask(CPU1Task2Subtask13);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask8.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 35); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task5Subtask10 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task5Subtask10" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask10.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 164); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask10.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 89); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask10.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 192); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task5Subtask14 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task5Subtask14" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask14.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 91); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask14.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 72); // 0
  ActivateTask(CPU2Task5Subtask2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask14.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 150); // 0
  ActivateTask(CPU2Task5Subtask10);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask14.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 129); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask14.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 107); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task5Subtask2 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task5Subtask2" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask2.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 37); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask2.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 112); // 0
  ActivateTask(CPU0Task4Subtask11);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask2.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 7); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask2.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 169); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU3Task1Subtask0 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU3Task1Subtask0" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task1Subtask0.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 198); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task1Subtask0.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 191); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task1Subtask0.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 43); // 0
  ActivateTask(CPU3Task1Subtask3);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task1Subtask0.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 52); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU3Task1Subtask3 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU3Task1Subtask3" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task1Subtask3.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 28); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task1Subtask3.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 164); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task1Subtask3.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 142); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU4Task3Subtask9 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU4Task3Subtask9" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task3Subtask9.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 71); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task3Subtask9.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 57); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task3Subtask9.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 180); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU5Task0Subtask1 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU5Task0Subtask1" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task0Subtask1.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 139); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task0Subtask1.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 46); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task0Subtask1.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 57); // 0
  ActivateTask(CPU5Task0Subtask12);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task0Subtask1.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 97); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU5Task0Subtask12 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU5Task0Subtask12" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task0Subtask12.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 148); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task0Subtask12.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 103); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task0Subtask12.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 12); // 0
  TerminateTask();

}
