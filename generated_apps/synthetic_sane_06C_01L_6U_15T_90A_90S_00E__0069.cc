#include "autosar/os.h"
#include "test/test.h"
#include "machine.h"

//#include "fail/trace.h"

void ara_timing_info(int, int);



DeclareSpinlock(LOCK0);




DeclareTask(CPU0Task0Subtask9);
DeclareTask(CPU0Task0Subtask14);
DeclareTask(CPU1Task3Subtask2);
DeclareTask(CPU1Task3Subtask5);
DeclareTask(CPU1Task3Subtask8);
DeclareTask(CPU2Task2Subtask0);
DeclareTask(CPU3Task1Subtask1);
DeclareTask(CPU3Task1Subtask4);
DeclareTask(CPU3Task1Subtask6);
DeclareTask(CPU3Task1Subtask11);
DeclareTask(CPU3Task1Subtask12);
DeclareTask(CPU4Task4Subtask3);
DeclareTask(CPU4Task4Subtask7);
DeclareTask(CPU4Task4Subtask10);
DeclareTask(CPU5Task5Subtask13);


TEST_MAKE_OS_MAIN( StartOS(0) )

// Prototypes

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task0Subtask14 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task0Subtask9 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task3Subtask2 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task3Subtask5 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task3Subtask8 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task2Subtask0 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU3Task1Subtask1 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU3Task1Subtask11 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU3Task1Subtask12 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU3Task1Subtask4 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU3Task1Subtask6 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU4Task4Subtask10 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU4Task4Subtask3 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU4Task4Subtask7 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU5Task5Subtask13 (void);



void AUTOSAR_TASK_FUNC_CPU0Task0Subtask14 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task0Subtask14" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask14.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 101); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask14.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 158); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask14.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 66); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task0Subtask9 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task0Subtask9" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask9.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 107); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask9.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 88); // 0
  ActivateTask(CPU1Task3Subtask5);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask9.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 122); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask9.5 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(4, 12); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask9.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 122); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask9.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 25); // 0
  ActivateTask(CPU0Task0Subtask14);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask9.6 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 61); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task3Subtask2 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task3Subtask2" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask2.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 81); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask2.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 182); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask2.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 142); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task3Subtask5 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task3Subtask5" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask5.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 132); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask5.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 79); // 0
  ActivateTask(CPU1Task3Subtask8);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask5.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 64); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask5.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 177); // 0
  ActivateTask(CPU1Task3Subtask2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask5.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 58); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task3Subtask8 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task3Subtask8" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask8.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 151); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask8.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 94); // 0
  ActivateTask(CPU3Task1Subtask6);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask8.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 86); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask8.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 114); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task2Subtask0 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task2Subtask0" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask0.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 107); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask0.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 172); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask0.3 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(2, 5); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask0.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 141); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask0.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 81); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU3Task1Subtask1 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU3Task1Subtask1" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task1Subtask1.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 35); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task1Subtask1.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 147); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task1Subtask1.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 49); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU3Task1Subtask11 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU3Task1Subtask11" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task1Subtask11.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 163); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task1Subtask11.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 92); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task1Subtask11.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 194); // 0
  ActivateTask(CPU3Task1Subtask4);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task1Subtask11.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 131); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU3Task1Subtask12 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU3Task1Subtask12" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task1Subtask12.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 120); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task1Subtask12.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 134); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task1Subtask12.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 137); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task1Subtask12.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 78); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task1Subtask12.4 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(4, 5); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task1Subtask12.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 172); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU3Task1Subtask4 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU3Task1Subtask4" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task1Subtask4.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 114); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task1Subtask4.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 30); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task1Subtask4.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 29); // 0
  ActivateTask(CPU3Task1Subtask12);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task1Subtask4.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 147); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU3Task1Subtask6 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU3Task1Subtask6" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task1Subtask6.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 31); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task1Subtask6.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 145); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task1Subtask6.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 166); // 0
  ActivateTask(CPU3Task1Subtask11);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task1Subtask6.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 167); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU4Task4Subtask10 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU4Task4Subtask10" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task4Subtask10.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 186); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task4Subtask10.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 29); // 0
  ActivateTask(CPU4Task4Subtask3);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task4Subtask10.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 120); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task4Subtask10.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 185); // 0
  ActivateTask(CPU4Task4Subtask7);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task4Subtask10.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 52); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU4Task4Subtask3 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU4Task4Subtask3" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task4Subtask3.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 179); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task4Subtask3.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 92); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task4Subtask3.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 30); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task4Subtask3.3 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(4, 21); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task4Subtask3.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 109); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU4Task4Subtask7 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU4Task4Subtask7" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task4Subtask7.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 25); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task4Subtask7.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 103); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task4Subtask7.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 42); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU5Task5Subtask13 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU5Task5Subtask13" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task5Subtask13.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 13); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task5Subtask13.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 146); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task5Subtask13.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 169); // 0
  TerminateTask();

}
