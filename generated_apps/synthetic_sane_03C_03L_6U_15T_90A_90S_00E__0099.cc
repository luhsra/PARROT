#include "autosar/os.h"
#include "test/test.h"
#include "machine.h"

//#include "fail/trace.h"

void ara_timing_info(int, int);



DeclareSpinlock(LOCK0);
DeclareSpinlock(LOCK1);
DeclareSpinlock(LOCK2);




DeclareTask(CPU0Task0Subtask3);
DeclareTask(CPU0Task4Subtask7);
DeclareTask(CPU0Task5Subtask0);
DeclareTask(CPU0Task5Subtask1);
DeclareTask(CPU0Task5Subtask10);
DeclareTask(CPU1Task1Subtask6);
DeclareTask(CPU1Task1Subtask12);
DeclareTask(CPU1Task1Subtask14);
DeclareTask(CPU2Task2Subtask2);
DeclareTask(CPU2Task2Subtask8);
DeclareTask(CPU2Task2Subtask11);
DeclareTask(CPU2Task2Subtask13);
DeclareTask(CPU2Task3Subtask4);
DeclareTask(CPU2Task3Subtask5);
DeclareTask(CPU2Task3Subtask9);


TEST_MAKE_OS_MAIN( StartOS(0) )

// Prototypes

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task0Subtask3 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task4Subtask7 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task5Subtask0 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task5Subtask1 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task5Subtask10 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task1Subtask12 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task1Subtask14 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task1Subtask6 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task2Subtask11 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task2Subtask13 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task2Subtask2 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task2Subtask8 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task3Subtask4 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task3Subtask5 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task3Subtask9 (void);



void AUTOSAR_TASK_FUNC_CPU0Task0Subtask3 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task0Subtask3" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask3.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 195); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask3.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 184); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask3.3 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(3, 26); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask3.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 99); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask3.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 195); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task4Subtask7 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task4Subtask7" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask7.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 45); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask7.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 30); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask7.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 100); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task5Subtask0 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task5Subtask0" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask0.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 55); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask0.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 16); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask0.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 152); // 0
  GetSpinlock(LOCK1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask0.3 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(7, 17); // 1
  ReleaseSpinlock(LOCK1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask0.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 137); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task5Subtask1 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task5Subtask1" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask1.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 167); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask1.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 191); // 0
  ActivateTask(CPU0Task5Subtask0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask1.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 28); // 0
  GetSpinlock(LOCK2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask1.4 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(6, 26); // 1
  ReleaseSpinlock(LOCK2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask1.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 139); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask1.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 111); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task5Subtask10 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task5Subtask10" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask10.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 72); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask10.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 190); // 0
  ActivateTask(CPU0Task5Subtask1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask10.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 111); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask10.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 153); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task1Subtask12 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task1Subtask12" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask12.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 32); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask12.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 98); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask12.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 34); // 0
  GetSpinlock(LOCK1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask12.3 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(6, 16); // 1
  ReleaseSpinlock(LOCK1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask12.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 47); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task1Subtask14 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task1Subtask14" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask14.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 146); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask14.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 88); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask14.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 157); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask14.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 25); // 0
  GetSpinlock(LOCK2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask14.7 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(7, 29); // 1
  ReleaseSpinlock(LOCK2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask14.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 157); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask14.6 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(9, 14); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask14.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 67); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask14.8 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 161); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task1Subtask6 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task1Subtask6" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask6.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 179); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask6.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 47); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask6.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 112); // 0
  ActivateTask(CPU2Task2Subtask11);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask6.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 169); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task2Subtask11 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task2Subtask11" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask11.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 152); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask11.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 111); // 0
  ActivateTask(CPU2Task2Subtask2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask11.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 26); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask11.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 104); // 0
  GetSpinlock(LOCK1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask11.5 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(3, 5); // 1
  ReleaseSpinlock(LOCK1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask11.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 162); // 0
  ActivateTask(CPU2Task2Subtask8);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask11.6 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 129); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task2Subtask13 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task2Subtask13" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask13.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 45); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask13.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 162); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask13.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 25); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task2Subtask2 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task2Subtask2" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask2.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 58); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask2.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 46); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask2.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 90); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask2.3 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(8, 28); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask2.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 51); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task2Subtask8 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task2Subtask8" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask8.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 120); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask8.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 176); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask8.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 157); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task3Subtask4 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task3Subtask4" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task3Subtask4.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 180); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task3Subtask4.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 170); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task3Subtask4.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 26); // 0
  GetSpinlock(LOCK2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task3Subtask4.3 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(9, 10); // 1
  ReleaseSpinlock(LOCK2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task3Subtask4.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 173); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task3Subtask5 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task3Subtask5" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task3Subtask5.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 70); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task3Subtask5.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 157); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task3Subtask5.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 91); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task3Subtask9 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task3Subtask9" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task3Subtask9.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 167); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task3Subtask9.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 62); // 0
  ActivateTask(CPU2Task3Subtask4);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task3Subtask9.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 181); // 0
  ActivateTask(CPU2Task3Subtask5);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task3Subtask9.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 187); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task3Subtask9.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 122); // 0
  TerminateTask();

}
