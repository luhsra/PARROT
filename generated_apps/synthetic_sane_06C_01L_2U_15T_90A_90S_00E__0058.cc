#include "autosar/os.h"
#include "test/test.h"
#include "machine.h"

//#include "fail/trace.h"

void ara_timing_info(int, int);



DeclareSpinlock(LOCK0);




DeclareTask(CPU0Task3Subtask2);
DeclareTask(CPU1Task2Subtask0);
DeclareTask(CPU1Task2Subtask6);
DeclareTask(CPU2Task4Subtask7);
DeclareTask(CPU2Task4Subtask10);
DeclareTask(CPU2Task4Subtask11);
DeclareTask(CPU2Task4Subtask12);
DeclareTask(CPU3Task0Subtask4);
DeclareTask(CPU4Task5Subtask13);
DeclareTask(CPU4Task5Subtask14);
DeclareTask(CPU5Task1Subtask1);
DeclareTask(CPU5Task1Subtask3);
DeclareTask(CPU5Task1Subtask5);
DeclareTask(CPU5Task1Subtask8);
DeclareTask(CPU5Task1Subtask9);


TEST_MAKE_OS_MAIN( StartOS(0) )

// Prototypes

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task3Subtask2 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task2Subtask0 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task2Subtask6 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task4Subtask10 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task4Subtask11 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task4Subtask12 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task4Subtask7 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU3Task0Subtask4 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU4Task5Subtask13 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU4Task5Subtask14 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU5Task1Subtask1 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU5Task1Subtask3 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU5Task1Subtask5 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU5Task1Subtask8 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU5Task1Subtask9 (void);



void AUTOSAR_TASK_FUNC_CPU0Task3Subtask2 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task3Subtask2" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask2.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 71); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask2.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 36); // 0
  ActivateTask(CPU5Task1Subtask5);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask2.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 185); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask2.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 123); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task2Subtask0 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task2Subtask0" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask0.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 196); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask0.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 171); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask0.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 196); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask0.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 100); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask0.4 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(6, 8); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask0.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 182); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task2Subtask6 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task2Subtask6" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask6.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 70); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask6.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 172); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask6.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 96); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task4Subtask10 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task4Subtask10" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask10.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 167); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask10.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 34); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask10.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 153); // 0
  ActivateTask(CPU4Task5Subtask14);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask10.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 43); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task4Subtask11 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task4Subtask11" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask11.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 198); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask11.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 145); // 0
  ActivateTask(CPU2Task4Subtask12);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask11.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 80); // 0
  ActivateTask(CPU2Task4Subtask10);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask11.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 23); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask11.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 45); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task4Subtask12 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task4Subtask12" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask12.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 90); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask12.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 96); // 0
  ActivateTask(CPU2Task4Subtask7);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask12.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 72); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask12.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 133); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task4Subtask7 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task4Subtask7" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask7.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 143); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask7.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 96); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask7.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 34); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU3Task0Subtask4 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU3Task0Subtask4" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task0Subtask4.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 112); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task0Subtask4.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 10); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task0Subtask4.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 189); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU4Task5Subtask13 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU4Task5Subtask13" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task5Subtask13.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 188); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task5Subtask13.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 174); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task5Subtask13.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 197); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU4Task5Subtask14 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU4Task5Subtask14" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task5Subtask14.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 63); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task5Subtask14.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 59); // 0
  ActivateTask(CPU4Task5Subtask13);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task5Subtask14.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 20); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task5Subtask14.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 193); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU5Task1Subtask1 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU5Task1Subtask1" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task1Subtask1.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 133); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task1Subtask1.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 105); // 0
  ActivateTask(CPU5Task1Subtask8);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task1Subtask1.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 145); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task1Subtask1.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 102); // 0
  ActivateTask(CPU5Task1Subtask3);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task1Subtask1.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 90); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU5Task1Subtask3 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU5Task1Subtask3" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task1Subtask3.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 92); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task1Subtask3.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 28); // 0
  ActivateTask(CPU5Task1Subtask9);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task1Subtask3.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 64); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task1Subtask3.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 21); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU5Task1Subtask5 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU5Task1Subtask5" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task1Subtask5.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 19); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task1Subtask5.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 53); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task1Subtask5.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 122); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU5Task1Subtask8 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU5Task1Subtask8" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task1Subtask8.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 116); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task1Subtask8.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 93); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task1Subtask8.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 164); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU5Task1Subtask9 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU5Task1Subtask9" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task1Subtask9.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 179); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task1Subtask9.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 129); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task1Subtask9.3 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(3, 19); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task1Subtask9.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 73); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task1Subtask9.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 140); // 0
  TerminateTask();

}
