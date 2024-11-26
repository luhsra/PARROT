#include "autosar/os.h"
#include "test/test.h"
#include "machine.h"

//#include "fail/trace.h"

void ara_timing_info(int, int);



DeclareSpinlock(LOCK0);




DeclareTask(CPU0Task2Subtask8);
DeclareTask(CPU0Task2Subtask11);
DeclareTask(CPU1Task0Subtask12);
DeclareTask(CPU1Task0Subtask13);
DeclareTask(CPU2Task4Subtask0);
DeclareTask(CPU2Task4Subtask2);
DeclareTask(CPU2Task4Subtask4);
DeclareTask(CPU2Task4Subtask5);
DeclareTask(CPU3Task3Subtask1);
DeclareTask(CPU4Task5Subtask3);
DeclareTask(CPU4Task5Subtask7);
DeclareTask(CPU4Task5Subtask9);
DeclareTask(CPU4Task5Subtask14);
DeclareTask(CPU5Task1Subtask6);
DeclareTask(CPU5Task1Subtask10);


TEST_MAKE_OS_MAIN( StartOS(0) )

// Prototypes

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task2Subtask11 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task2Subtask8 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task0Subtask12 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task0Subtask13 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task4Subtask0 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task4Subtask2 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task4Subtask4 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task4Subtask5 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU3Task3Subtask1 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU4Task5Subtask14 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU4Task5Subtask3 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU4Task5Subtask7 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU4Task5Subtask9 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU5Task1Subtask10 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU5Task1Subtask6 (void);



void AUTOSAR_TASK_FUNC_CPU0Task2Subtask11 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task2Subtask11" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask11.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 138); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask11.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 33); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask11.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 62); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task2Subtask8 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task2Subtask8" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask8.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 168); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask8.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 75); // 0
  ActivateTask(CPU0Task2Subtask11);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask8.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 165); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask8.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 193); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task0Subtask12 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task0Subtask12" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask12.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 181); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask12.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 60); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask12.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 77); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task0Subtask13 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task0Subtask13" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask13.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 144); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask13.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 192); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask13.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 124); // 0
  ActivateTask(CPU1Task0Subtask12);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask13.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 21); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task4Subtask0 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task4Subtask0" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask0.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 44); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask0.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 170); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask0.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 121); // 0
  ActivateTask(CPU2Task4Subtask4);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask0.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 126); // 0
  ActivateTask(CPU2Task4Subtask5);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask0.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 160); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask0.6 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(8, 26); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask0.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 117); // 0
  ActivateTask(CPU2Task4Subtask2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask0.7 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 45); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task4Subtask2 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task4Subtask2" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask2.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 66); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask2.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 40); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask2.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 96); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task4Subtask4 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task4Subtask4" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask4.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 172); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask4.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 20); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask4.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 153); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task4Subtask5 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task4Subtask5" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask5.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 107); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask5.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 61); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask5.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 76); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU3Task3Subtask1 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU3Task3Subtask1" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task3Subtask1.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 169); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task3Subtask1.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 162); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task3Subtask1.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 122); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU4Task5Subtask14 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU4Task5Subtask14" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task5Subtask14.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 68); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task5Subtask14.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 30); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task5Subtask14.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 52); // 0
  ActivateTask(CPU5Task1Subtask6);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task5Subtask14.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 117); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task5Subtask14.4 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(5, 21); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task5Subtask14.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 151); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU4Task5Subtask3 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU4Task5Subtask3" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task5Subtask3.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 64); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task5Subtask3.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 86); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task5Subtask3.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 45); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU4Task5Subtask7 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU4Task5Subtask7" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task5Subtask7.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 173); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task5Subtask7.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 33); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task5Subtask7.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 100); // 0
  ActivateTask(CPU4Task5Subtask9);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task5Subtask7.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 69); // 0
  ActivateTask(CPU4Task5Subtask3);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task5Subtask7.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 138); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU4Task5Subtask9 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU4Task5Subtask9" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task5Subtask9.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 28); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task5Subtask9.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 53); // 0
  ActivateTask(CPU4Task5Subtask14);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task5Subtask9.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 25); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task5Subtask9.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 31); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU5Task1Subtask10 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU5Task1Subtask10" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task1Subtask10.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 151); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task1Subtask10.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 160); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task1Subtask10.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 187); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU5Task1Subtask6 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU5Task1Subtask6" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task1Subtask6.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 65); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task1Subtask6.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 34); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task1Subtask6.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 88); // 0
  TerminateTask();

}
