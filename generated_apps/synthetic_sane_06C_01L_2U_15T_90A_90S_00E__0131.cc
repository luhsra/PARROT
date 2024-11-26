#include "autosar/os.h"
#include "test/test.h"
#include "machine.h"

//#include "fail/trace.h"

void ara_timing_info(int, int);



DeclareSpinlock(LOCK0);




DeclareTask(CPU0Task3Subtask4);
DeclareTask(CPU0Task3Subtask12);
DeclareTask(CPU1Task4Subtask2);
DeclareTask(CPU1Task4Subtask7);
DeclareTask(CPU1Task4Subtask11);
DeclareTask(CPU2Task1Subtask6);
DeclareTask(CPU3Task5Subtask5);
DeclareTask(CPU3Task5Subtask10);
DeclareTask(CPU3Task5Subtask14);
DeclareTask(CPU4Task0Subtask8);
DeclareTask(CPU4Task0Subtask9);
DeclareTask(CPU5Task2Subtask0);
DeclareTask(CPU5Task2Subtask1);
DeclareTask(CPU5Task2Subtask3);
DeclareTask(CPU5Task2Subtask13);


TEST_MAKE_OS_MAIN( StartOS(0) )

// Prototypes

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task3Subtask12 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task3Subtask4 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task4Subtask11 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task4Subtask2 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task4Subtask7 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task1Subtask6 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU3Task5Subtask10 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU3Task5Subtask14 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU3Task5Subtask5 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU4Task0Subtask8 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU4Task0Subtask9 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU5Task2Subtask0 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU5Task2Subtask1 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU5Task2Subtask13 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU5Task2Subtask3 (void);



void AUTOSAR_TASK_FUNC_CPU0Task3Subtask12 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task3Subtask12" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask12.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 166); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask12.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 39); // 0
  ActivateTask(CPU5Task2Subtask13);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask12.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 17); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask12.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 196); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task3Subtask4 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task3Subtask4" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask4.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 146); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask4.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 29); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask4.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 185); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask4.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 133); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask4.5 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(7, 18); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask4.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 126); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask4.6 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 71); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task4Subtask11 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task4Subtask11" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask11.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 118); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask11.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 164); // 0
  ActivateTask(CPU1Task4Subtask2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask11.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 61); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask11.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 56); // 0
  ActivateTask(CPU1Task4Subtask7);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask11.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 191); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task4Subtask2 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task4Subtask2" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask2.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 186); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask2.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 29); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask2.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 182); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task4Subtask7 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task4Subtask7" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask7.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 21); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask7.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 47); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask7.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 64); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task1Subtask6 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task1Subtask6" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask6.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 83); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask6.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 26); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask6.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 31); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU3Task5Subtask10 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU3Task5Subtask10" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task5Subtask10.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 149); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task5Subtask10.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 186); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task5Subtask10.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 179); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU3Task5Subtask14 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU3Task5Subtask14" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task5Subtask14.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 90); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task5Subtask14.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 198); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task5Subtask14.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 47); // 0
  ActivateTask(CPU3Task5Subtask5);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task5Subtask14.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 15); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU3Task5Subtask5 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU3Task5Subtask5" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task5Subtask5.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 125); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task5Subtask5.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 87); // 0
  ActivateTask(CPU4Task0Subtask9);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task5Subtask5.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 187); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task5Subtask5.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 104); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU4Task0Subtask8 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU4Task0Subtask8" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task0Subtask8.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 147); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task0Subtask8.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 30); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task0Subtask8.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 178); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU4Task0Subtask9 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU4Task0Subtask9" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task0Subtask9.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 159); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task0Subtask9.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 173); // 0
  ActivateTask(CPU4Task0Subtask8);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task0Subtask9.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 122); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task0Subtask9.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 68); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU5Task2Subtask0 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU5Task2Subtask0" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task2Subtask0.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 72); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task2Subtask0.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 77); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task2Subtask0.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 32); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU5Task2Subtask1 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU5Task2Subtask1" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task2Subtask1.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 61); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task2Subtask1.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 43); // 0
  ActivateTask(CPU5Task2Subtask3);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task2Subtask1.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 114); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task2Subtask1.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 46); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU5Task2Subtask13 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU5Task2Subtask13" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task2Subtask13.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 97); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task2Subtask13.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 156); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task2Subtask13.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 171); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task2Subtask13.4 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(6, 16); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task2Subtask13.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 63); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task2Subtask13.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 170); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU5Task2Subtask3 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU5Task2Subtask3" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task2Subtask3.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 192); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task2Subtask3.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 32); // 0
  ActivateTask(CPU5Task2Subtask0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task2Subtask3.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 74); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task2Subtask3.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 164); // 0
  TerminateTask();

}
