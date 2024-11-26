#include "autosar/os.h"
#include "test/test.h"
#include "machine.h"

//#include "fail/trace.h"

void ara_timing_info(int, int);



DeclareSpinlock(LOCK0);




DeclareTask(CPU0Task4Subtask3);
DeclareTask(CPU0Task4Subtask4);
DeclareTask(CPU0Task4Subtask6);
DeclareTask(CPU0Task4Subtask8);
DeclareTask(CPU1Task1Subtask2);
DeclareTask(CPU1Task1Subtask14);
DeclareTask(CPU2Task0Subtask1);
DeclareTask(CPU3Task2Subtask0);
DeclareTask(CPU3Task2Subtask5);
DeclareTask(CPU3Task2Subtask9);
DeclareTask(CPU4Task3Subtask11);
DeclareTask(CPU4Task3Subtask13);
DeclareTask(CPU5Task5Subtask7);
DeclareTask(CPU5Task5Subtask10);
DeclareTask(CPU5Task5Subtask12);


TEST_MAKE_OS_MAIN( StartOS(0) )

// Prototypes

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task4Subtask3 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task4Subtask4 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task4Subtask6 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task4Subtask8 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task1Subtask14 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task1Subtask2 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task0Subtask1 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU3Task2Subtask0 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU3Task2Subtask5 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU3Task2Subtask9 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU4Task3Subtask11 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU4Task3Subtask13 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU5Task5Subtask10 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU5Task5Subtask12 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU5Task5Subtask7 (void);



void AUTOSAR_TASK_FUNC_CPU0Task4Subtask3 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task4Subtask3" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask3.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 99); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask3.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 168); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask3.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 130); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task4Subtask4 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task4Subtask4" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask4.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 46); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask4.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 60); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask4.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 7); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task4Subtask6 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task4Subtask6" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask6.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 157); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask6.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 197); // 0
  ActivateTask(CPU0Task4Subtask8);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask6.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 93); // 0
  ActivateTask(CPU0Task4Subtask3);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask6.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 48); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask6.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 114); // 0
  ActivateTask(CPU0Task4Subtask4);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask6.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 125); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task4Subtask8 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task4Subtask8" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask8.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 82); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask8.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 36); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask8.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 125); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task1Subtask14 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task1Subtask14" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask14.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 104); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask14.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 50); // 0
  ActivateTask(CPU1Task1Subtask2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask14.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 195); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask14.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 184); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task1Subtask2 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task1Subtask2" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask2.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 194); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask2.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 99); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask2.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 195); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task0Subtask1 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task0Subtask1" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task0Subtask1.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 45); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task0Subtask1.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 30); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task0Subtask1.3 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(6, 17); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task0Subtask1.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 55); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task0Subtask1.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 16); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU3Task2Subtask0 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU3Task2Subtask0" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task2Subtask0.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 152); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task2Subtask0.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 99); // 0
  ActivateTask(CPU3Task2Subtask5);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task2Subtask0.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 137); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task2Subtask0.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 167); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU3Task2Subtask5 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU3Task2Subtask5" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task2Subtask5.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 191); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task2Subtask5.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 28); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task2Subtask5.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 179); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU3Task2Subtask9 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU3Task2Subtask9" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task2Subtask9.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 139); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task2Subtask9.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 111); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task2Subtask9.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 72); // 0
  ActivateTask(CPU3Task2Subtask0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task2Subtask9.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 190); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU4Task3Subtask11 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU4Task3Subtask11" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task3Subtask11.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 111); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task3Subtask11.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 153); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task3Subtask11.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 32); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU4Task3Subtask13 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU4Task3Subtask13" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task3Subtask13.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 98); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task3Subtask13.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 34); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task3Subtask13.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 96); // 0
  ActivateTask(CPU4Task3Subtask11);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task3Subtask13.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 47); // 0
  ActivateTask(CPU1Task1Subtask14);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task3Subtask13.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 146); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU5Task5Subtask10 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU5Task5Subtask10" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task5Subtask10.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 88); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task5Subtask10.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 157); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task5Subtask10.3 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(8, 9); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task5Subtask10.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 194); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task5Subtask10.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 157); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU5Task5Subtask12 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU5Task5Subtask12" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task5Subtask12.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 63); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task5Subtask12.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 67); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task5Subtask12.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 161); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU5Task5Subtask7 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU5Task5Subtask7" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task5Subtask7.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 179); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task5Subtask7.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 47); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task5Subtask7.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 112); // 0
  ActivateTask(CPU5Task5Subtask10);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task5Subtask7.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 169); // 0
  ActivateTask(CPU5Task5Subtask12);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task5Subtask7.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 152); // 0
  TerminateTask();

}
