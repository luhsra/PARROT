#include "autosar/os.h"
#include "test/test.h"
#include "machine.h"

//#include "fail/trace.h"

void ara_timing_info(int, int);



DeclareSpinlock(LOCK0);
DeclareSpinlock(LOCK1);
DeclareSpinlock(LOCK2);




DeclareTask(CPU0Task3Subtask1);
DeclareTask(CPU0Task3Subtask13);
DeclareTask(CPU0Task3Subtask14);
DeclareTask(CPU1Task4Subtask4);
DeclareTask(CPU1Task4Subtask9);
DeclareTask(CPU2Task1Subtask2);
DeclareTask(CPU2Task1Subtask5);
DeclareTask(CPU2Task1Subtask7);
DeclareTask(CPU2Task1Subtask10);
DeclareTask(CPU2Task1Subtask11);
DeclareTask(CPU3Task5Subtask6);
DeclareTask(CPU4Task2Subtask3);
DeclareTask(CPU4Task2Subtask8);
DeclareTask(CPU5Task0Subtask0);
DeclareTask(CPU5Task0Subtask12);


TEST_MAKE_OS_MAIN( StartOS(0) )

// Prototypes

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task3Subtask1 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task3Subtask13 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task3Subtask14 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task4Subtask4 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task4Subtask9 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task1Subtask10 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task1Subtask11 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task1Subtask2 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task1Subtask5 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task1Subtask7 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU3Task5Subtask6 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU4Task2Subtask3 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU4Task2Subtask8 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU5Task0Subtask0 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU5Task0Subtask12 (void);



void AUTOSAR_TASK_FUNC_CPU0Task3Subtask1 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task3Subtask1" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask1.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 171); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask1.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 149); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask1.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 137); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task3Subtask13 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task3Subtask13" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask13.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 10); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask13.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 69); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask13.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 41); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task3Subtask14 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task3Subtask14" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask14.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 98); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask14.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 200); // 0
  ActivateTask(CPU0Task3Subtask1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask14.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 69); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask14.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 34); // 0
  ActivateTask(CPU0Task3Subtask13);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask14.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 27); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task4Subtask4 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task4Subtask4" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask4.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 181); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask4.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 92); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask4.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 152); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task4Subtask9 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task4Subtask9" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask9.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 164); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask9.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 121); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask9.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 141); // 0
  ActivateTask(CPU1Task4Subtask4);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask9.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 140); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task1Subtask10 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task1Subtask10" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask10.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 61); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask10.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 199); // 0
  GetSpinlock(LOCK2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask10.3 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(4, 15); // 1
  ReleaseSpinlock(LOCK2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask10.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 130); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask10.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 96); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task1Subtask11 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task1Subtask11" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask11.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 111); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask11.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 193); // 0
  ActivateTask(CPU2Task1Subtask5);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask11.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 148); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask11.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 104); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task1Subtask2 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task1Subtask2" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask2.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 121); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask2.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 151); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask2.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 91); // 0
  ActivateTask(CPU2Task1Subtask10);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask2.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 126); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task1Subtask5 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task1Subtask5" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask5.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 89); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask5.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 135); // 0
  GetSpinlock(LOCK1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask5.3 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(7, 17); // 1
  ReleaseSpinlock(LOCK1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask5.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 89); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask5.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 71); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task1Subtask7 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task1Subtask7" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask7.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 156); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask7.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 142); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask7.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 129); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask7.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 142); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask7.4 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(3, 17); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask7.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 58); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU3Task5Subtask6 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU3Task5Subtask6" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task5Subtask6.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 20); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task5Subtask6.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 37); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task5Subtask6.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 67); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU4Task2Subtask3 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU4Task2Subtask3" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task2Subtask3.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 72); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task2Subtask3.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 37); // 0
  ActivateTask(CPU4Task2Subtask8);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task2Subtask3.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 88); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task2Subtask3.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 68); // 0
  ActivateTask(CPU2Task1Subtask11);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task2Subtask3.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 61); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU4Task2Subtask8 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU4Task2Subtask8" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task2Subtask8.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 166); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task2Subtask8.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 47); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task2Subtask8.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 23); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU5Task0Subtask0 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU5Task0Subtask0" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task0Subtask0.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 190); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task0Subtask0.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 179); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task0Subtask0.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 78); // 0
  ActivateTask(CPU5Task0Subtask12);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task0Subtask0.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 17); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU5Task0Subtask12 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU5Task0Subtask12" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task0Subtask12.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 157); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task0Subtask12.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 68); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task0Subtask12.5 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(4, 5); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task0Subtask12.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 110); // 0
  GetSpinlock(LOCK1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task0Subtask12.6 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(9, 18); // 1
  ReleaseSpinlock(LOCK1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task0Subtask12.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 194); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task0Subtask12.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 183); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task0Subtask12.7 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 41); // 0
  TerminateTask();

}
