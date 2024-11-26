#include "autosar/os.h"
#include "test/test.h"
#include "machine.h"

//#include "fail/trace.h"

void ara_timing_info(int, int);



DeclareSpinlock(LOCK0);




DeclareTask(CPU0Task0Subtask3);
DeclareTask(CPU0Task0Subtask5);
DeclareTask(CPU0Task0Subtask8);
DeclareTask(CPU0Task0Subtask13);
DeclareTask(CPU1Task2Subtask9);
DeclareTask(CPU1Task2Subtask14);
DeclareTask(CPU2Task1Subtask2);
DeclareTask(CPU2Task1Subtask6);
DeclareTask(CPU2Task1Subtask7);
DeclareTask(CPU3Task3Subtask4);
DeclareTask(CPU4Task4Subtask0);
DeclareTask(CPU4Task4Subtask12);
DeclareTask(CPU5Task5Subtask1);
DeclareTask(CPU5Task5Subtask10);
DeclareTask(CPU5Task5Subtask11);


TEST_MAKE_OS_MAIN( StartOS(0) )

// Prototypes

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task0Subtask13 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task0Subtask3 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task0Subtask5 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task0Subtask8 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task2Subtask14 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task2Subtask9 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task1Subtask2 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task1Subtask6 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task1Subtask7 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU3Task3Subtask4 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU4Task4Subtask0 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU4Task4Subtask12 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU5Task5Subtask1 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU5Task5Subtask10 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU5Task5Subtask11 (void);



void AUTOSAR_TASK_FUNC_CPU0Task0Subtask13 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task0Subtask13" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask13.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 71); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask13.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 103); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask13.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 132); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task0Subtask3 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task0Subtask3" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask3.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 23); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask3.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 29); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask3.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 55); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task0Subtask5 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task0Subtask5" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask5.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 7); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask5.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 119); // 0
  ActivateTask(CPU0Task0Subtask8);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask5.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 133); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask5.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 40); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task0Subtask8 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task0Subtask8" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask8.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 30); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask8.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 143); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask8.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 54); // 0
  ActivateTask(CPU0Task0Subtask3);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask8.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 14); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task2Subtask14 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task2Subtask14" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask14.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 48); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask14.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 49); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask14.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 161); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task2Subtask9 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task2Subtask9" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask9.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 184); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask9.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 82); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask9.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 25); // 0
  ActivateTask(CPU1Task2Subtask14);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask9.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 16); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task1Subtask2 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task1Subtask2" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask2.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 184); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask2.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 32); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask2.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 129); // 0
  ActivateTask(CPU2Task1Subtask6);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask2.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 10); // 0
  ActivateTask(CPU2Task1Subtask7);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask2.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 10); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task1Subtask6 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task1Subtask6" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask6.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 50); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask6.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 136); // 0
  ActivateTask(CPU0Task0Subtask5);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask6.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 113); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask6.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 164); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task1Subtask7 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task1Subtask7" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask7.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 62); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask7.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 77); // 0
  ActivateTask(CPU0Task0Subtask13);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask7.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 122); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask7.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 60); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask7.4 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(6, 8); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask7.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 103); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU3Task3Subtask4 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU3Task3Subtask4" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task3Subtask4.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 196); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task3Subtask4.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 80); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task3Subtask4.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 52); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU4Task4Subtask0 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU4Task4Subtask0" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task4Subtask0.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 126); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task4Subtask0.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 184); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task4Subtask0.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 175); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU4Task4Subtask12 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU4Task4Subtask12" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task4Subtask12.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 31); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task4Subtask12.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 200); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task4Subtask12.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 135); // 0
  ActivateTask(CPU4Task4Subtask0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task4Subtask12.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 48); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU5Task5Subtask1 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU5Task5Subtask1" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task5Subtask1.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 62); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task5Subtask1.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 31); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task5Subtask1.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 103); // 0
  ActivateTask(CPU5Task5Subtask11);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task5Subtask1.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 114); // 0
  ActivateTask(CPU5Task5Subtask10);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task5Subtask1.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 118); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU5Task5Subtask10 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU5Task5Subtask10" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task5Subtask10.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 15); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task5Subtask10.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 83); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task5Subtask10.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 105); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU5Task5Subtask11 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU5Task5Subtask11" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task5Subtask11.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 58); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task5Subtask11.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 88); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task5Subtask11.3 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(3, 23); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task5Subtask11.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 172); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task5Subtask11.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 69); // 0
  TerminateTask();

}
