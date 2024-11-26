#include "autosar/os.h"
#include "test/test.h"
#include "machine.h"

//#include "fail/trace.h"

void ara_timing_info(int, int);



DeclareSpinlock(LOCK0);




DeclareTask(CPU0Task0Subtask1);
DeclareTask(CPU0Task0Subtask12);
DeclareTask(CPU1Task4Subtask0);
DeclareTask(CPU1Task4Subtask8);
DeclareTask(CPU2Task1Subtask3);
DeclareTask(CPU2Task1Subtask4);
DeclareTask(CPU2Task1Subtask6);
DeclareTask(CPU3Task5Subtask5);
DeclareTask(CPU3Task5Subtask7);
DeclareTask(CPU3Task5Subtask11);
DeclareTask(CPU3Task5Subtask14);
DeclareTask(CPU4Task3Subtask9);
DeclareTask(CPU4Task3Subtask10);
DeclareTask(CPU5Task2Subtask2);
DeclareTask(CPU5Task2Subtask13);


TEST_MAKE_OS_MAIN( StartOS(0) )

// Prototypes

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task0Subtask1 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task0Subtask12 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task4Subtask0 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task4Subtask8 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task1Subtask3 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task1Subtask4 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task1Subtask6 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU3Task5Subtask11 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU3Task5Subtask14 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU3Task5Subtask5 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU3Task5Subtask7 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU4Task3Subtask10 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU4Task3Subtask9 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU5Task2Subtask13 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU5Task2Subtask2 (void);



void AUTOSAR_TASK_FUNC_CPU0Task0Subtask1 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task0Subtask1" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask1.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 96); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask1.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 37); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask1.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 162); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task0Subtask12 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task0Subtask12" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask12.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 45); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask12.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 127); // 0
  ActivateTask(CPU2Task1Subtask4);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask12.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 123); // 0
  ActivateTask(CPU0Task0Subtask1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask12.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 94); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask12.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 200); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task4Subtask0 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task4Subtask0" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask0.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 165); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask0.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 75); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask0.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 44); // 0
  ActivateTask(CPU1Task4Subtask8);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask0.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 126); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task4Subtask8 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task4Subtask8" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask8.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 156); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask8.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 126); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask8.4 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(1, 7); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask8.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 181); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask8.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 147); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask8.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 43); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task1Subtask3 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task1Subtask3" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask3.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 73); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask3.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 70); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask3.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 182); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask3.3 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(1, 25); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask3.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 46); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task1Subtask4 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task1Subtask4" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask4.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 73); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask4.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 23); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask4.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 72); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task1Subtask6 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task1Subtask6" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask6.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 122); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask6.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 59); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask6.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 146); // 0
  ActivateTask(CPU2Task1Subtask3);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask6.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 190); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU3Task5Subtask11 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU3Task5Subtask11" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task5Subtask11.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 159); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task5Subtask11.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 158); // 0
  ActivateTask(CPU3Task5Subtask5);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task5Subtask11.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 80); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task5Subtask11.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 196); // 0
  ActivateTask(CPU3Task5Subtask14);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task5Subtask11.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 110); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU3Task5Subtask14 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU3Task5Subtask14" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task5Subtask14.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 97); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task5Subtask14.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 101); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task5Subtask14.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 31); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU3Task5Subtask5 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU3Task5Subtask5" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task5Subtask5.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 174); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task5Subtask5.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 72); // 0
  ActivateTask(CPU3Task5Subtask7);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task5Subtask5.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 56); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task5Subtask5.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 195); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU3Task5Subtask7 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU3Task5Subtask7" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task5Subtask7.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 104); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task5Subtask7.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 39); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task5Subtask7.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 176); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU4Task3Subtask10 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU4Task3Subtask10" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task3Subtask10.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 32); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task3Subtask10.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 140); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task3Subtask10.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 89); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU4Task3Subtask9 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU4Task3Subtask9" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task3Subtask9.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 153); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task3Subtask9.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 40); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task3Subtask9.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 28); // 0
  ActivateTask(CPU4Task3Subtask10);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task3Subtask9.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 67); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU5Task2Subtask13 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU5Task2Subtask13" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task2Subtask13.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 52); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task2Subtask13.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 104); // 0
  ActivateTask(CPU5Task2Subtask2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task2Subtask13.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 62); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task2Subtask13.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 28); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU5Task2Subtask2 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU5Task2Subtask2" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task2Subtask2.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 49); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task2Subtask2.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 57); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task2Subtask2.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 112); // 0
  TerminateTask();

}
