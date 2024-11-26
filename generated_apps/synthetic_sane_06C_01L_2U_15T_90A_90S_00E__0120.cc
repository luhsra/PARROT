#include "autosar/os.h"
#include "test/test.h"
#include "machine.h"

//#include "fail/trace.h"

void ara_timing_info(int, int);



DeclareSpinlock(LOCK0);




DeclareTask(CPU0Task0Subtask2);
DeclareTask(CPU0Task0Subtask3);
DeclareTask(CPU0Task0Subtask7);
DeclareTask(CPU0Task0Subtask13);
DeclareTask(CPU1Task5Subtask8);
DeclareTask(CPU1Task5Subtask9);
DeclareTask(CPU2Task2Subtask0);
DeclareTask(CPU2Task2Subtask4);
DeclareTask(CPU2Task2Subtask12);
DeclareTask(CPU3Task1Subtask10);
DeclareTask(CPU3Task1Subtask14);
DeclareTask(CPU4Task4Subtask6);
DeclareTask(CPU4Task4Subtask11);
DeclareTask(CPU5Task3Subtask1);
DeclareTask(CPU5Task3Subtask5);


TEST_MAKE_OS_MAIN( StartOS(0) )

// Prototypes

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task0Subtask13 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task0Subtask2 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task0Subtask3 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task0Subtask7 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task5Subtask8 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task5Subtask9 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task2Subtask0 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task2Subtask12 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task2Subtask4 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU3Task1Subtask10 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU3Task1Subtask14 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU4Task4Subtask11 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU4Task4Subtask6 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU5Task3Subtask1 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU5Task3Subtask5 (void);



void AUTOSAR_TASK_FUNC_CPU0Task0Subtask13 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task0Subtask13" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask13.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 117); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask13.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 14); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask13.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 21); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task0Subtask2 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task0Subtask2" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask2.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 150); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask2.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 91); // 0
  ActivateTask(CPU0Task0Subtask13);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask2.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 74); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask2.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 39); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task0Subtask3 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task0Subtask3" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask3.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 188); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask3.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 63); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask3.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 125); // 0
  ActivateTask(CPU0Task0Subtask2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask3.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 109); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task0Subtask7 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task0Subtask7" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask7.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 165); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask7.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 181); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask7.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 164); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task5Subtask8 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task5Subtask8" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask8.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 61); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask8.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 145); // 0
  ActivateTask(CPU1Task5Subtask9);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask8.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 178); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask8.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 74); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task5Subtask9 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task5Subtask9" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask9.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 138); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask9.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 60); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask9.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 102); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task2Subtask0 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task2Subtask0" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask0.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 64); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask0.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 96); // 0
  ActivateTask(CPU2Task2Subtask12);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask0.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 156); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask0.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 116); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task2Subtask12 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task2Subtask12" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask12.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 60); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask12.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 47); // 0
  ActivateTask(CPU2Task2Subtask4);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask12.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 139); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask12.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 107); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task2Subtask4 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task2Subtask4" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask4.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 22); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask4.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 179); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask4.3 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(1, 29); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask4.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 56); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask4.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 45); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU3Task1Subtask10 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU3Task1Subtask10" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task1Subtask10.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 36); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task1Subtask10.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 196); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task1Subtask10.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 181); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU3Task1Subtask14 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU3Task1Subtask14" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task1Subtask14.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 168); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task1Subtask14.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 193); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task1Subtask14.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 1); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU4Task4Subtask11 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU4Task4Subtask11" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task4Subtask11.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 200); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task4Subtask11.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 103); // 0
  ActivateTask(CPU1Task5Subtask8);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task4Subtask11.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 38); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task4Subtask11.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 152); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU4Task4Subtask6 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU4Task4Subtask6" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task4Subtask6.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 56); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task4Subtask6.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 117); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task4Subtask6.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 162); // 0
  ActivateTask(CPU4Task4Subtask11);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task4Subtask6.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 76); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU5Task3Subtask1 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU5Task3Subtask1" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task3Subtask1.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 127); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task3Subtask1.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 128); // 0
  ActivateTask(CPU3Task1Subtask10);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task3Subtask1.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 193); // 0
  ActivateTask(CPU0Task0Subtask7);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task3Subtask1.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 117); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task3Subtask1.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 158); // 0
  ActivateTask(CPU5Task3Subtask5);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task3Subtask1.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 141); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU5Task3Subtask5 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU5Task3Subtask5" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task3Subtask5.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 29); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task3Subtask5.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 94); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task3Subtask5.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 43); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task3Subtask5.3 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(4, 26); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task3Subtask5.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 44); // 0
  TerminateTask();

}
