#include "autosar/os.h"
#include "test/test.h"
#include "machine.h"

//#include "fail/trace.h"

void ara_timing_info(int, int);



DeclareSpinlock(LOCK0);




DeclareTask(CPU0Task5Subtask9);
DeclareTask(CPU0Task5Subtask13);
DeclareTask(CPU1Task1Subtask3);
DeclareTask(CPU1Task1Subtask5);
DeclareTask(CPU2Task4Subtask6);
DeclareTask(CPU2Task4Subtask14);
DeclareTask(CPU3Task3Subtask0);
DeclareTask(CPU3Task3Subtask1);
DeclareTask(CPU4Task0Subtask4);
DeclareTask(CPU4Task0Subtask8);
DeclareTask(CPU4Task0Subtask10);
DeclareTask(CPU4Task0Subtask11);
DeclareTask(CPU5Task2Subtask2);
DeclareTask(CPU5Task2Subtask7);
DeclareTask(CPU5Task2Subtask12);


TEST_MAKE_OS_MAIN( StartOS(0) )

// Prototypes

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task5Subtask13 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task5Subtask9 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task1Subtask3 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task1Subtask5 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task4Subtask14 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task4Subtask6 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU3Task3Subtask0 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU3Task3Subtask1 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU4Task0Subtask10 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU4Task0Subtask11 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU4Task0Subtask4 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU4Task0Subtask8 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU5Task2Subtask12 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU5Task2Subtask2 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU5Task2Subtask7 (void);



void AUTOSAR_TASK_FUNC_CPU0Task5Subtask13 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task5Subtask13" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask13.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 32); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask13.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 65); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask13.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 80); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task5Subtask9 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task5Subtask9" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask9.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 46); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask9.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 122); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask9.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 160); // 0
  ActivateTask(CPU0Task5Subtask13);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask9.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 15); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task1Subtask3 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task1Subtask3" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask3.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 43); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask3.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 105); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask3.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 71); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task1Subtask5 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task1Subtask5" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask5.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 88); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask5.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 125); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask5.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 134); // 0
  ActivateTask(CPU1Task1Subtask3);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask5.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 194); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task4Subtask14 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task4Subtask14" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask14.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 163); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask14.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 98); // 0
  ActivateTask(CPU2Task4Subtask6);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask14.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 174); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask14.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 176); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task4Subtask6 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task4Subtask6" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask6.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 137); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask6.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 48); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask6.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 18); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask6.3 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(5, 11); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask6.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 134); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU3Task3Subtask0 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU3Task3Subtask0" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task3Subtask0.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 139); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task3Subtask0.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 12); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task3Subtask0.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 126); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU3Task3Subtask1 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU3Task3Subtask1" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task3Subtask1.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 51); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task3Subtask1.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 9); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task3Subtask1.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 190); // 0
  ActivateTask(CPU3Task3Subtask0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task3Subtask1.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 162); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU4Task0Subtask10 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU4Task0Subtask10" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task0Subtask10.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 43); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task0Subtask10.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 8); // 0
  ActivateTask(CPU4Task0Subtask11);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task0Subtask10.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 114); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task0Subtask10.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 39); // 0
  ActivateTask(CPU4Task0Subtask8);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task0Subtask10.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 158); // 0
  ActivateTask(CPU4Task0Subtask4);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task0Subtask10.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 34); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU4Task0Subtask11 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU4Task0Subtask11" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task0Subtask11.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 146); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task0Subtask11.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 48); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task0Subtask11.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 170); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU4Task0Subtask4 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU4Task0Subtask4" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task0Subtask4.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 179); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task0Subtask4.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 157); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task0Subtask4.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 103); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU4Task0Subtask8 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU4Task0Subtask8" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task0Subtask8.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 48); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task0Subtask8.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 21); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task0Subtask8.3 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(5, 29); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task0Subtask8.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 123); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task0Subtask8.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 60); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU5Task2Subtask12 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU5Task2Subtask12" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task2Subtask12.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 100); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task2Subtask12.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 68); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task2Subtask12.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 168); // 0
  ActivateTask(CPU5Task2Subtask2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task2Subtask12.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 86); // 0
  ActivateTask(CPU5Task2Subtask7);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task2Subtask12.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 194); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU5Task2Subtask2 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU5Task2Subtask2" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task2Subtask2.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 131); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task2Subtask2.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 46); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task2Subtask2.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 42); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU5Task2Subtask7 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU5Task2Subtask7" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task2Subtask7.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 148); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task2Subtask7.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 149); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task2Subtask7.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 170); // 0
  TerminateTask();

}
