#include "autosar/os.h"
#include "test/test.h"
#include "machine.h"

//#include "fail/trace.h"

void ara_timing_info(int, int);



DeclareSpinlock(LOCK0);
DeclareSpinlock(LOCK1);
DeclareSpinlock(LOCK2);




DeclareTask(CPU0Task0Subtask5);
DeclareTask(CPU0Task0Subtask7);
DeclareTask(CPU0Task0Subtask10);
DeclareTask(CPU0Task0Subtask12);
DeclareTask(CPU1Task1Subtask3);
DeclareTask(CPU2Task5Subtask11);
DeclareTask(CPU2Task5Subtask14);
DeclareTask(CPU3Task4Subtask4);
DeclareTask(CPU4Task3Subtask1);
DeclareTask(CPU4Task3Subtask6);
DeclareTask(CPU5Task2Subtask0);
DeclareTask(CPU5Task2Subtask2);
DeclareTask(CPU5Task2Subtask8);
DeclareTask(CPU5Task2Subtask9);
DeclareTask(CPU5Task2Subtask13);


TEST_MAKE_OS_MAIN( StartOS(0) )

// Prototypes

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task0Subtask10 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task0Subtask12 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task0Subtask5 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task0Subtask7 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task1Subtask3 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task5Subtask11 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task5Subtask14 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU3Task4Subtask4 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU4Task3Subtask1 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU4Task3Subtask6 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU5Task2Subtask0 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU5Task2Subtask13 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU5Task2Subtask2 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU5Task2Subtask8 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU5Task2Subtask9 (void);



void AUTOSAR_TASK_FUNC_CPU0Task0Subtask10 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task0Subtask10" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask10.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 43); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask10.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 100); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask10.4 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(8, 27); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask10.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 41); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask10.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 171); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask10.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 85); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task0Subtask12 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task0Subtask12" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask12.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 75); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask12.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 186); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask12.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 56); // 0
  ActivateTask(CPU0Task0Subtask10);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask12.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 28); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task0Subtask5 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task0Subtask5" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask5.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 47); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask5.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 31); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask5.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 101); // 0
  GetSpinlock(LOCK2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask5.4 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(3, 3); // 1
  ReleaseSpinlock(LOCK2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask5.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 122); // 0
  ActivateTask(CPU0Task0Subtask12);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask5.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 188); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task0Subtask7 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task0Subtask7" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask7.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 44); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask7.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 38); // 0
  GetSpinlock(LOCK1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask7.3 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(4, 10); // 1
  ReleaseSpinlock(LOCK1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask7.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 108); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask7.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 37); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task1Subtask3 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task1Subtask3" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask3.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 145); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask3.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 91); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask3.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 153); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task5Subtask11 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task5Subtask11" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask11.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 160); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask11.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 54); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask11.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 177); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task5Subtask14 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task5Subtask14" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask14.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 133); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask14.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 66); // 0
  ActivateTask(CPU2Task5Subtask11);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask14.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 171); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask14.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 146); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU3Task4Subtask4 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU3Task4Subtask4" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task4Subtask4.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 67); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task4Subtask4.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 76); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task4Subtask4.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 51); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU4Task3Subtask1 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU4Task3Subtask1" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task3Subtask1.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 105); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task3Subtask1.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 181); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task3Subtask1.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 135); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task3Subtask1.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 186); // 0
  GetSpinlock(LOCK2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task3Subtask1.4 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(8, 11); // 1
  ReleaseSpinlock(LOCK2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task3Subtask1.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 105); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU4Task3Subtask6 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU4Task3Subtask6" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task3Subtask6.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 86); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task3Subtask6.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 100); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task3Subtask6.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 102); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU5Task2Subtask0 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU5Task2Subtask0" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task2Subtask0.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 69); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task2Subtask0.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 73); // 0
  ActivateTask(CPU5Task2Subtask2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task2Subtask0.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 7); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task2Subtask0.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 50); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU5Task2Subtask13 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU5Task2Subtask13" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task2Subtask13.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 31); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task2Subtask13.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 171); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task2Subtask13.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 33); // 0
  ActivateTask(CPU5Task2Subtask0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task2Subtask13.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 77); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU5Task2Subtask2 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU5Task2Subtask2" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task2Subtask2.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 29); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task2Subtask2.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 80); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task2Subtask2.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 182); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task2Subtask2.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 10); // 0
  ActivateTask(CPU5Task2Subtask8);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task2Subtask2.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 45); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task2Subtask2.5 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(6, 30); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task2Subtask2.6 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 194); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU5Task2Subtask8 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU5Task2Subtask8" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task2Subtask8.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 99); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task2Subtask8.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 196); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task2Subtask8.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 12); // 0
  ActivateTask(CPU5Task2Subtask9);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task2Subtask8.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 148); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU5Task2Subtask9 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU5Task2Subtask9" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task2Subtask9.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 29); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task2Subtask9.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 27); // 0
  GetSpinlock(LOCK1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task2Subtask9.3 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(3, 4); // 1
  ReleaseSpinlock(LOCK1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task2Subtask9.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 181); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task2Subtask9.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 25); // 0
  TerminateTask();

}
