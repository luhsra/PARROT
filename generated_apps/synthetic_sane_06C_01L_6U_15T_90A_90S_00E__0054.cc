#include "autosar/os.h"
#include "test/test.h"
#include "machine.h"

//#include "fail/trace.h"

void ara_timing_info(int, int);



DeclareSpinlock(LOCK0);




DeclareTask(CPU0Task3Subtask3);
DeclareTask(CPU0Task3Subtask5);
DeclareTask(CPU0Task3Subtask6);
DeclareTask(CPU1Task5Subtask4);
DeclareTask(CPU1Task5Subtask9);
DeclareTask(CPU1Task5Subtask14);
DeclareTask(CPU2Task4Subtask10);
DeclareTask(CPU2Task4Subtask13);
DeclareTask(CPU3Task2Subtask2);
DeclareTask(CPU3Task2Subtask12);
DeclareTask(CPU4Task0Subtask11);
DeclareTask(CPU5Task1Subtask0);
DeclareTask(CPU5Task1Subtask1);
DeclareTask(CPU5Task1Subtask7);
DeclareTask(CPU5Task1Subtask8);


TEST_MAKE_OS_MAIN( StartOS(0) )

// Prototypes

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task3Subtask3 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task3Subtask5 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task3Subtask6 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task5Subtask14 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task5Subtask4 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task5Subtask9 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task4Subtask10 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task4Subtask13 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU3Task2Subtask12 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU3Task2Subtask2 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU4Task0Subtask11 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU5Task1Subtask0 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU5Task1Subtask1 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU5Task1Subtask7 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU5Task1Subtask8 (void);



void AUTOSAR_TASK_FUNC_CPU0Task3Subtask3 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task3Subtask3" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask3.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 63); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask3.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 80); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask3.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 129); // 0
  ActivateTask(CPU0Task3Subtask5);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask3.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 27); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask3.4 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(8, 11); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask3.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 89); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task3Subtask5 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task3Subtask5" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask5.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 88); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask5.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 192); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask5.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 117); // 0
  ActivateTask(CPU0Task3Subtask6);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask5.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 35); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task3Subtask6 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task3Subtask6" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask6.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 54); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask6.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 130); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask6.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 10); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task5Subtask14 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task5Subtask14" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask14.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 195); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask14.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 62); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask14.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 143); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task5Subtask4 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task5Subtask4" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask4.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 167); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask4.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 134); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask4.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 190); // 0
  ActivateTask(CPU1Task5Subtask9);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask4.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 53); // 0
  ActivateTask(CPU5Task1Subtask0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask4.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 37); // 0
  ActivateTask(CPU1Task5Subtask14);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask4.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 126); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task5Subtask9 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task5Subtask9" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask9.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 179); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask9.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 171); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask9.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 198); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task4Subtask10 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task4Subtask10" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask10.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 103); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask10.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 23); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask10.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 53); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task4Subtask13 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task4Subtask13" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask13.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 68); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask13.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 63); // 0
  ActivateTask(CPU2Task4Subtask10);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask13.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 155); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask13.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 34); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU3Task2Subtask12 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU3Task2Subtask12" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task2Subtask12.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 14); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task2Subtask12.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 61); // 0
  ActivateTask(CPU3Task2Subtask2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task2Subtask12.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 25); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task2Subtask12.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 15); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU3Task2Subtask2 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU3Task2Subtask2" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task2Subtask2.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 169); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task2Subtask2.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 45); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task2Subtask2.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 37); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU4Task0Subtask11 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU4Task0Subtask11" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task0Subtask11.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 184); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task0Subtask11.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 44); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task0Subtask11.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 23); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU5Task1Subtask0 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU5Task1Subtask0" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task1Subtask0.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 37); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task1Subtask0.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 187); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task1Subtask0.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 140); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU5Task1Subtask1 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU5Task1Subtask1" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task1Subtask1.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 42); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task1Subtask1.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 168); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task1Subtask1.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 102); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task1Subtask1.3 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(2, 29); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task1Subtask1.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 180); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU5Task1Subtask7 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU5Task1Subtask7" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task1Subtask7.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 144); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task1Subtask7.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 32); // 0
  ActivateTask(CPU5Task1Subtask8);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task1Subtask7.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 196); // 0
  ActivateTask(CPU5Task1Subtask1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task1Subtask7.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 75); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task1Subtask7.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 153); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU5Task1Subtask8 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU5Task1Subtask8" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task1Subtask8.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 163); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task1Subtask8.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 63); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task1Subtask8.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 172); // 0
  TerminateTask();

}
