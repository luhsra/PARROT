#include "autosar/os.h"
#include "test/test.h"
#include "machine.h"

//#include "fail/trace.h"

void ara_timing_info(int, int);



DeclareSpinlock(LOCK0);
DeclareSpinlock(LOCK1);
DeclareSpinlock(LOCK2);




DeclareTask(CPU0Task1Subtask0);
DeclareTask(CPU0Task1Subtask1);
DeclareTask(CPU0Task1Subtask6);
DeclareTask(CPU1Task2Subtask9);
DeclareTask(CPU1Task2Subtask11);
DeclareTask(CPU2Task3Subtask13);
DeclareTask(CPU3Task5Subtask5);
DeclareTask(CPU3Task5Subtask8);
DeclareTask(CPU3Task5Subtask10);
DeclareTask(CPU3Task5Subtask12);
DeclareTask(CPU4Task4Subtask2);
DeclareTask(CPU4Task4Subtask3);
DeclareTask(CPU5Task0Subtask4);
DeclareTask(CPU5Task0Subtask7);
DeclareTask(CPU5Task0Subtask14);


TEST_MAKE_OS_MAIN( StartOS(0) )

// Prototypes

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task1Subtask0 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task1Subtask1 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task1Subtask6 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task2Subtask11 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task2Subtask9 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task3Subtask13 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU3Task5Subtask10 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU3Task5Subtask12 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU3Task5Subtask5 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU3Task5Subtask8 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU4Task4Subtask2 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU4Task4Subtask3 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU5Task0Subtask14 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU5Task0Subtask4 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU5Task0Subtask7 (void);



void AUTOSAR_TASK_FUNC_CPU0Task1Subtask0 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task1Subtask0" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask0.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 39); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask0.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 93); // 0
  GetSpinlock(LOCK1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask0.4 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(2, 29); // 1
  ReleaseSpinlock(LOCK1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask0.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 137); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask0.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 101); // 0
  ActivateTask(CPU0Task1Subtask1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask0.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 101); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task1Subtask1 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task1Subtask1" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask1.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 40); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask1.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 19); // 0
  GetSpinlock(LOCK2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask1.4 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(8, 19); // 1
  ReleaseSpinlock(LOCK2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask1.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 94); // 0
  ActivateTask(CPU0Task1Subtask6);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask1.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 168); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask1.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 165); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task1Subtask6 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task1Subtask6" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask6.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 19); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask6.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 69); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask6.3 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(10, 17); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask6.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 144); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask6.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 10); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task2Subtask11 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task2Subtask11" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask11.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 179); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask11.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 113); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask11.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 66); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task2Subtask9 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task2Subtask9" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask9.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 127); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask9.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 132); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask9.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 72); // 0
  ActivateTask(CPU1Task2Subtask11);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask9.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 184); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task3Subtask13 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task3Subtask13" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task3Subtask13.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 79); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task3Subtask13.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 32); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task3Subtask13.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 10); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU3Task5Subtask10 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU3Task5Subtask10" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task5Subtask10.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 140); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task5Subtask10.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 67); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task5Subtask10.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 168); // 0
  ActivateTask(CPU3Task5Subtask5);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task5Subtask10.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 72); // 0
  ActivateTask(CPU3Task5Subtask12);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task5Subtask10.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 140); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU3Task5Subtask12 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU3Task5Subtask12" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task5Subtask12.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 155); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task5Subtask12.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 45); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task5Subtask12.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 187); // 0
  ActivateTask(CPU3Task5Subtask8);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task5Subtask12.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 113); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task5Subtask12.4 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(4, 18); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task5Subtask12.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 181); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU3Task5Subtask5 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU3Task5Subtask5" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task5Subtask5.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 191); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task5Subtask5.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 128); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task5Subtask5.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 167); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU3Task5Subtask8 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU3Task5Subtask8" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task5Subtask8.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 150); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task5Subtask8.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 160); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task5Subtask8.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 34); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU4Task4Subtask2 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU4Task4Subtask2" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task4Subtask2.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 40); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task4Subtask2.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 183); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task4Subtask2.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 147); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU4Task4Subtask3 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU4Task4Subtask3" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task4Subtask3.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 199); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task4Subtask3.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 54); // 0
  ActivateTask(CPU4Task4Subtask2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task4Subtask3.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 75); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task4Subtask3.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 152); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU5Task0Subtask14 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU5Task0Subtask14" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task0Subtask14.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 126); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task0Subtask14.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 158); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task0Subtask14.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 25); // 0
  GetSpinlock(LOCK1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task0Subtask14.5 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(2, 16); // 1
  ReleaseSpinlock(LOCK1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task0Subtask14.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 145); // 0
  ActivateTask(CPU5Task0Subtask4);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task0Subtask14.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 105); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task0Subtask14.6 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 23); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU5Task0Subtask4 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU5Task0Subtask4" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task0Subtask4.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 38); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task0Subtask4.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 122); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task0Subtask4.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 148); // 0
  ActivateTask(CPU5Task0Subtask7);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task0Subtask4.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 167); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU5Task0Subtask7 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU5Task0Subtask7" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task0Subtask7.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 133); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task0Subtask7.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 139); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task0Subtask7.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 67); // 0
  TerminateTask();

}
