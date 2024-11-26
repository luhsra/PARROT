#include "autosar/os.h"
#include "test/test.h"
#include "machine.h"

//#include "fail/trace.h"

void ara_timing_info(int, int);



DeclareSpinlock(LOCK0);




DeclareTask(CPU0Task4Subtask5);
DeclareTask(CPU1Task5Subtask10);
DeclareTask(CPU1Task5Subtask12);
DeclareTask(CPU1Task5Subtask14);
DeclareTask(CPU2Task3Subtask3);
DeclareTask(CPU2Task3Subtask13);
DeclareTask(CPU3Task0Subtask1);
DeclareTask(CPU3Task0Subtask6);
DeclareTask(CPU3Task0Subtask8);
DeclareTask(CPU3Task0Subtask11);
DeclareTask(CPU4Task1Subtask2);
DeclareTask(CPU4Task1Subtask4);
DeclareTask(CPU4Task1Subtask9);
DeclareTask(CPU5Task2Subtask0);
DeclareTask(CPU5Task2Subtask7);


TEST_MAKE_OS_MAIN( StartOS(0) )

// Prototypes

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task4Subtask5 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task5Subtask10 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task5Subtask12 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task5Subtask14 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task3Subtask13 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task3Subtask3 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU3Task0Subtask1 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU3Task0Subtask11 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU3Task0Subtask6 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU3Task0Subtask8 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU4Task1Subtask2 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU4Task1Subtask4 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU4Task1Subtask9 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU5Task2Subtask0 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU5Task2Subtask7 (void);



void AUTOSAR_TASK_FUNC_CPU0Task4Subtask5 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task4Subtask5" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask5.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 85); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask5.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 22); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask5.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 185); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task5Subtask10 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task5Subtask10" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask10.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 167); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask10.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 168); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask10.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 81); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task5Subtask12 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task5Subtask12" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask12.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 96); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask12.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 84); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask12.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 87); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task5Subtask14 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task5Subtask14" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask14.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 90); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask14.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 128); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask14.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 144); // 0
  ActivateTask(CPU1Task5Subtask10);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask14.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 108); // 0
  ActivateTask(CPU1Task5Subtask12);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask14.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 94); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task3Subtask13 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task3Subtask13" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task3Subtask13.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 160); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task3Subtask13.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 121); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task3Subtask13.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 188); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task3Subtask3 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task3Subtask3" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task3Subtask3.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 127); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task3Subtask3.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 26); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task3Subtask3.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 100); // 0
  ActivateTask(CPU2Task3Subtask13);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task3Subtask3.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 132); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU3Task0Subtask1 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU3Task0Subtask1" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task0Subtask1.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 152); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task0Subtask1.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 85); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task0Subtask1.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 54); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU3Task0Subtask11 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU3Task0Subtask11" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task0Subtask11.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 102); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task0Subtask11.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 85); // 0
  ActivateTask(CPU3Task0Subtask6);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task0Subtask11.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 86); // 0
  ActivateTask(CPU3Task0Subtask1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task0Subtask11.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 180); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task0Subtask11.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 171); // 0
  ActivateTask(CPU3Task0Subtask8);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task0Subtask11.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 78); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task0Subtask11.6 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(5, 25); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task0Subtask11.7 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 7); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU3Task0Subtask6 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU3Task0Subtask6" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task0Subtask6.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 128); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task0Subtask6.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 18); // 0
  ActivateTask(CPU5Task2Subtask0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task0Subtask6.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 120); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task0Subtask6.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 84); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU3Task0Subtask8 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU3Task0Subtask8" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task0Subtask8.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 147); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task0Subtask8.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 192); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task0Subtask8.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 18); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU4Task1Subtask2 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU4Task1Subtask2" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task1Subtask2.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 139); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task1Subtask2.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 152); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task1Subtask2.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 156); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU4Task1Subtask4 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU4Task1Subtask4" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task1Subtask4.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 53); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task1Subtask4.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 77); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task1Subtask4.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 156); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task1Subtask4.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 104); // 0
  ActivateTask(CPU1Task5Subtask14);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task1Subtask4.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 199); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task1Subtask4.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 37); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task1Subtask4.6 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(2, 8); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task1Subtask4.7 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 28); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU4Task1Subtask9 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU4Task1Subtask9" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task1Subtask9.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 30); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task1Subtask9.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 48); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task1Subtask9.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 115); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU5Task2Subtask0 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU5Task2Subtask0" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task2Subtask0.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 36); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task2Subtask0.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 82); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task2Subtask0.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 110); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU5Task2Subtask7 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU5Task2Subtask7" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task2Subtask7.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 41); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task2Subtask7.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 115); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task2Subtask7.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 156); // 0
  TerminateTask();

}
