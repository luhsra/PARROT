#include "autosar/os.h"
#include "test/test.h"
#include "machine.h"

//#include "fail/trace.h"

void ara_timing_info(int, int);



DeclareSpinlock(LOCK0);




DeclareTask(CPU0Task3Subtask5);
DeclareTask(CPU0Task3Subtask11);
DeclareTask(CPU0Task3Subtask13);
DeclareTask(CPU0Task3Subtask14);
DeclareTask(CPU1Task1Subtask7);
DeclareTask(CPU1Task1Subtask8);
DeclareTask(CPU1Task1Subtask9);
DeclareTask(CPU2Task5Subtask12);
DeclareTask(CPU3Task0Subtask0);
DeclareTask(CPU3Task0Subtask4);
DeclareTask(CPU3Task0Subtask10);
DeclareTask(CPU4Task2Subtask1);
DeclareTask(CPU4Task2Subtask3);
DeclareTask(CPU4Task2Subtask6);
DeclareTask(CPU5Task4Subtask2);


TEST_MAKE_OS_MAIN( StartOS(0) )

// Prototypes

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task3Subtask11 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task3Subtask13 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task3Subtask14 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task3Subtask5 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task1Subtask7 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task1Subtask8 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task1Subtask9 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task5Subtask12 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU3Task0Subtask0 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU3Task0Subtask10 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU3Task0Subtask4 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU4Task2Subtask1 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU4Task2Subtask3 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU4Task2Subtask6 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU5Task4Subtask2 (void);



void AUTOSAR_TASK_FUNC_CPU0Task3Subtask11 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task3Subtask11" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask11.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 181); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask11.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 167); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask11.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 86); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task3Subtask13 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task3Subtask13" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask13.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 43); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask13.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 172); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask13.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 51); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task3Subtask14 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task3Subtask14" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask14.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 163); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask14.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 150); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask14.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 78); // 0
  ActivateTask(CPU0Task3Subtask5);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask14.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 53); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task3Subtask5 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task3Subtask5" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask5.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 119); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask5.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 82); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask5.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 177); // 0
  ActivateTask(CPU0Task3Subtask11);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask5.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 64); // 0
  ActivateTask(CPU0Task3Subtask13);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask5.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 78); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task1Subtask7 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task1Subtask7" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask7.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 50); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask7.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 200); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask7.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 141); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task1Subtask8 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task1Subtask8" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask8.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 130); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask8.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 161); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask8.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 157); // 0
  ActivateTask(CPU1Task1Subtask9);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask8.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 104); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task1Subtask9 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task1Subtask9" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask9.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 47); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask9.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 88); // 0
  ActivateTask(CPU1Task1Subtask7);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask9.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 141); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask9.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 23); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task5Subtask12 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task5Subtask12" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask12.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 75); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask12.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 72); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask12.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 152); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU3Task0Subtask0 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU3Task0Subtask0" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task0Subtask0.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 158); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task0Subtask0.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 119); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task0Subtask0.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 119); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU3Task0Subtask10 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU3Task0Subtask10" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task0Subtask10.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 9); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task0Subtask10.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 95); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task0Subtask10.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 156); // 0
  ActivateTask(CPU3Task0Subtask4);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task0Subtask10.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 23); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU3Task0Subtask4 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU3Task0Subtask4" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task0Subtask4.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 50); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task0Subtask4.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 172); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task0Subtask4.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 156); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU4Task2Subtask1 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU4Task2Subtask1" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task2Subtask1.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 34); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task2Subtask1.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 10); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task2Subtask1.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 6); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task2Subtask1.5 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(4, 29); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task2Subtask1.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 152); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task2Subtask1.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 152); // 0
  ActivateTask(CPU3Task0Subtask0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task2Subtask1.6 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 101); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU4Task2Subtask3 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU4Task2Subtask3" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task2Subtask3.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 130); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task2Subtask3.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 106); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task2Subtask3.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 37); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU4Task2Subtask6 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU4Task2Subtask6" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task2Subtask6.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 196); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task2Subtask6.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 117); // 0
  ActivateTask(CPU4Task2Subtask3);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task2Subtask6.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 109); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task2Subtask6.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 187); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU5Task4Subtask2 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU5Task4Subtask2" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task4Subtask2.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 66); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task4Subtask2.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 108); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task4Subtask2.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 103); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task4Subtask2.3 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(2, 9); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task4Subtask2.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 34); // 0
  TerminateTask();

}
