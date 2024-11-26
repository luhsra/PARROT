#include "autosar/os.h"
#include "test/test.h"
#include "machine.h"

//#include "fail/trace.h"

void ara_timing_info(int, int);



DeclareSpinlock(LOCK0);




DeclareTask(CPU0Task0Subtask5);
DeclareTask(CPU0Task0Subtask8);
DeclareTask(CPU1Task1Subtask3);
DeclareTask(CPU1Task1Subtask6);
DeclareTask(CPU1Task1Subtask13);
DeclareTask(CPU2Task5Subtask0);
DeclareTask(CPU3Task3Subtask10);
DeclareTask(CPU4Task4Subtask1);
DeclareTask(CPU4Task4Subtask2);
DeclareTask(CPU4Task4Subtask9);
DeclareTask(CPU4Task4Subtask14);
DeclareTask(CPU5Task2Subtask4);
DeclareTask(CPU5Task2Subtask7);
DeclareTask(CPU5Task2Subtask11);
DeclareTask(CPU5Task2Subtask12);


TEST_MAKE_OS_MAIN( StartOS(0) )

// Prototypes

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task0Subtask5 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task0Subtask8 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task1Subtask13 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task1Subtask3 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task1Subtask6 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task5Subtask0 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU3Task3Subtask10 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU4Task4Subtask1 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU4Task4Subtask14 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU4Task4Subtask2 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU4Task4Subtask9 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU5Task2Subtask11 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU5Task2Subtask12 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU5Task2Subtask4 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU5Task2Subtask7 (void);



void AUTOSAR_TASK_FUNC_CPU0Task0Subtask5 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task0Subtask5" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask5.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 163); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask5.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 122); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask5.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 69); // 0
  ActivateTask(CPU0Task0Subtask8);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask5.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 137); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task0Subtask8 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task0Subtask8" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask8.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 124); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask8.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 146); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask8.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 170); // 0
  ActivateTask(CPU4Task4Subtask9);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask8.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 112); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task1Subtask13 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task1Subtask13" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask13.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 22); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask13.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 54); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask13.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 72); // 0
  ActivateTask(CPU1Task1Subtask6);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask13.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 60); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task1Subtask3 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task1Subtask3" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask3.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 127); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask3.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 141); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask3.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 138); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask3.4 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(3, 10); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask3.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 176); // 0
  ActivateTask(CPU1Task1Subtask13);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask3.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 34); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task1Subtask6 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task1Subtask6" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask6.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 55); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask6.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 150); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask6.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 46); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task5Subtask0 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task5Subtask0" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask0.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 128); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask0.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 176); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask0.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 16); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU3Task3Subtask10 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU3Task3Subtask10" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task3Subtask10.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 166); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task3Subtask10.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 102); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task3Subtask10.3 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(7, 22); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task3Subtask10.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 55); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task3Subtask10.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 127); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU4Task4Subtask1 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU4Task4Subtask1" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task4Subtask1.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 131); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task4Subtask1.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 104); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task4Subtask1.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 180); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU4Task4Subtask14 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU4Task4Subtask14" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task4Subtask14.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 80); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task4Subtask14.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 44); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task4Subtask14.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 40); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU4Task4Subtask2 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU4Task4Subtask2" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task4Subtask2.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 84); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task4Subtask2.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 29); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task4Subtask2.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 147); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU4Task4Subtask9 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU4Task4Subtask9" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task4Subtask9.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 135); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task4Subtask9.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 116); // 0
  ActivateTask(CPU4Task4Subtask1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task4Subtask9.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 144); // 0
  ActivateTask(CPU4Task4Subtask2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task4Subtask9.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 177); // 0
  ActivateTask(CPU4Task4Subtask14);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task4Subtask9.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 99); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task4Subtask9.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 139); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU5Task2Subtask11 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU5Task2Subtask11" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task2Subtask11.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 79); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task2Subtask11.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 119); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task2Subtask11.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 26); // 0
  ActivateTask(CPU5Task2Subtask12);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task2Subtask11.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 122); // 0
  ActivateTask(CPU5Task2Subtask4);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task2Subtask11.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 169); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU5Task2Subtask12 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU5Task2Subtask12" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task2Subtask12.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 32); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task2Subtask12.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 114); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task2Subtask12.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 19); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU5Task2Subtask4 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU5Task2Subtask4" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task2Subtask4.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 139); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task2Subtask4.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 193); // 0
  ActivateTask(CPU5Task2Subtask7);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task2Subtask4.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 187); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task2Subtask4.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 19); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU5Task2Subtask7 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU5Task2Subtask7" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task2Subtask7.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 156); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task2Subtask7.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 121); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task2Subtask7.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 18); // 0
  TerminateTask();

}
