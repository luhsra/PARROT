#include "autosar/os.h"
#include "test/test.h"
#include "machine.h"

//#include "fail/trace.h"

void ara_timing_info(int, int);



DeclareSpinlock(LOCK0);




DeclareTask(CPU0Task1Subtask5);
DeclareTask(CPU0Task1Subtask12);
DeclareTask(CPU1Task5Subtask9);
DeclareTask(CPU1Task5Subtask10);
DeclareTask(CPU2Task4Subtask0);
DeclareTask(CPU2Task4Subtask3);
DeclareTask(CPU2Task4Subtask13);
DeclareTask(CPU3Task0Subtask14);
DeclareTask(CPU4Task3Subtask1);
DeclareTask(CPU4Task3Subtask6);
DeclareTask(CPU4Task3Subtask7);
DeclareTask(CPU4Task3Subtask8);
DeclareTask(CPU5Task2Subtask2);
DeclareTask(CPU5Task2Subtask4);
DeclareTask(CPU5Task2Subtask11);


TEST_MAKE_OS_MAIN( StartOS(0) )

// Prototypes

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task1Subtask12 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task1Subtask5 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task5Subtask10 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task5Subtask9 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task4Subtask0 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task4Subtask13 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task4Subtask3 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU3Task0Subtask14 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU4Task3Subtask1 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU4Task3Subtask6 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU4Task3Subtask7 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU4Task3Subtask8 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU5Task2Subtask11 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU5Task2Subtask2 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU5Task2Subtask4 (void);



void AUTOSAR_TASK_FUNC_CPU0Task1Subtask12 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task1Subtask12" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask12.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 127); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask12.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 74); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask12.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 99); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task1Subtask5 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task1Subtask5" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask5.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 72); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask5.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 74); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask5.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 54); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task5Subtask10 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task5Subtask10" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask10.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 26); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask10.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 174); // 0
  ActivateTask(CPU0Task1Subtask12);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask10.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 188); // 0
  ActivateTask(CPU1Task5Subtask9);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask10.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 175); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask10.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 144); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task5Subtask9 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task5Subtask9" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask9.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 30); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask9.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 191); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask9.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 136); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task4Subtask0 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task4Subtask0" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask0.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 58); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask0.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 162); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask0.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 28); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask0.3 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(9, 23); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask0.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 28); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task4Subtask13 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task4Subtask13" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask13.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 95); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask13.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 55); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask13.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 20); // 0
  ActivateTask(CPU2Task4Subtask0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask13.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 60); // 0
  ActivateTask(CPU2Task4Subtask3);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask13.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 28); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task4Subtask3 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task4Subtask3" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask3.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 173); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask3.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 150); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask3.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 157); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU3Task0Subtask14 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU3Task0Subtask14" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task0Subtask14.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 78); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task0Subtask14.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 142); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task0Subtask14.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 183); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task0Subtask14.3 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(5, 25); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task0Subtask14.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 118); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU4Task3Subtask1 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU4Task3Subtask1" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task3Subtask1.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 160); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task3Subtask1.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 42); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task3Subtask1.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 186); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU4Task3Subtask6 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU4Task3Subtask6" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task3Subtask6.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 84); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task3Subtask6.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 191); // 0
  ActivateTask(CPU4Task3Subtask1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task3Subtask6.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 82); // 0
  ActivateTask(CPU4Task3Subtask7);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task3Subtask6.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 172); // 0
  ActivateTask(CPU4Task3Subtask8);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task3Subtask6.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 45); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task3Subtask6.6 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(5, 24); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task3Subtask6.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 108); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task3Subtask6.7 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 110); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU4Task3Subtask7 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU4Task3Subtask7" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task3Subtask7.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 25); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task3Subtask7.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 84); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task3Subtask7.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 125); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU4Task3Subtask8 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU4Task3Subtask8" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task3Subtask8.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 99); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task3Subtask8.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 92); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task3Subtask8.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 34); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU5Task2Subtask11 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU5Task2Subtask11" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task2Subtask11.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 107); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task2Subtask11.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 55); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task2Subtask11.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 131); // 0
  ActivateTask(CPU4Task3Subtask6);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task2Subtask11.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 186); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU5Task2Subtask2 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU5Task2Subtask2" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task2Subtask2.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 175); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task2Subtask2.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 43); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task2Subtask2.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 138); // 0
  ActivateTask(CPU5Task2Subtask11);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task2Subtask2.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 42); // 0
  ActivateTask(CPU5Task2Subtask4);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task2Subtask2.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 35); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU5Task2Subtask4 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU5Task2Subtask4" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task2Subtask4.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 80); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task2Subtask4.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 130); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task2Subtask4.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 124); // 0
  TerminateTask();

}
