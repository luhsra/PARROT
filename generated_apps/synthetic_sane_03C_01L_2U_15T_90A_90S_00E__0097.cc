#include "autosar/os.h"
#include "test/test.h"
#include "machine.h"

//#include "fail/trace.h"

void ara_timing_info(int, int);



DeclareSpinlock(LOCK0);




DeclareTask(CPU0Task1Subtask6);
DeclareTask(CPU0Task2Subtask0);
DeclareTask(CPU0Task2Subtask5);
DeclareTask(CPU0Task2Subtask14);
DeclareTask(CPU1Task0Subtask4);
DeclareTask(CPU1Task0Subtask13);
DeclareTask(CPU1Task3Subtask2);
DeclareTask(CPU1Task3Subtask3);
DeclareTask(CPU1Task3Subtask7);
DeclareTask(CPU1Task4Subtask1);
DeclareTask(CPU1Task4Subtask10);
DeclareTask(CPU1Task4Subtask12);
DeclareTask(CPU2Task5Subtask8);
DeclareTask(CPU2Task5Subtask9);
DeclareTask(CPU2Task5Subtask11);


TEST_MAKE_OS_MAIN( StartOS(0) )

// Prototypes

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task1Subtask6 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task2Subtask0 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task2Subtask14 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task2Subtask5 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task0Subtask13 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task0Subtask4 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task3Subtask2 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task3Subtask3 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task3Subtask7 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task4Subtask1 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task4Subtask10 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task4Subtask12 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task5Subtask11 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task5Subtask8 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task5Subtask9 (void);



void AUTOSAR_TASK_FUNC_CPU0Task1Subtask6 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task1Subtask6" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask6.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 74); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask6.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 99); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask6.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 72); // 0
  ActivateTask(CPU1Task3Subtask7);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask6.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 74); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task2Subtask0 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task2Subtask0" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask0.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 54); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask0.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 26); // 0
  ActivateTask(CPU0Task2Subtask5);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask0.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 174); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask0.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 188); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask0.5 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(4, 24); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask0.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 144); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask0.6 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 30); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task2Subtask14 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task2Subtask14" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask14.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 191); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask14.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 136); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask14.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 58); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task2Subtask5 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task2Subtask5" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask5.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 162); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask5.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 28); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask5.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 134); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task0Subtask13 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task0Subtask13" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask13.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 28); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask13.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 95); // 0
  ActivateTask(CPU1Task0Subtask4);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask13.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 55); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask13.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 20); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task0Subtask4 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task0Subtask4" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask4.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 60); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask4.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 28); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask4.3 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(10, 29); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask4.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 150); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask4.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 157); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task3Subtask2 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task3Subtask2" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask2.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 78); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask2.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 142); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask2.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 183); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task3Subtask3 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task3Subtask3" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask3.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 171); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask3.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 118); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask3.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 160); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task3Subtask7 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task3Subtask7" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask7.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 42); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask7.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 186); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask7.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 84); // 0
  ActivateTask(CPU1Task3Subtask2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask7.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 191); // 0
  ActivateTask(CPU2Task5Subtask9);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask7.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 82); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task4Subtask1 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task4Subtask1" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask1.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 172); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask1.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 45); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask1.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 164); // 0
  ActivateTask(CPU1Task4Subtask10);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask1.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 108); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task4Subtask10 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task4Subtask10" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask10.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 110); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask10.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 25); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask10.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 84); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task4Subtask12 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task4Subtask12" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask12.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 125); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask12.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 99); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask12.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 92); // 0
  ActivateTask(CPU1Task4Subtask1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask12.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 34); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task5Subtask11 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task5Subtask11" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask11.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 107); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask11.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 55); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask11.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 131); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task5Subtask8 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task5Subtask8" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask8.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 186); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask8.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 175); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask8.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 43); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task5Subtask9 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task5Subtask9" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask9.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 138); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask9.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 42); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask9.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 35); // 0
  ActivateTask(CPU2Task5Subtask8);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask9.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 80); // 0
  TerminateTask();

}
