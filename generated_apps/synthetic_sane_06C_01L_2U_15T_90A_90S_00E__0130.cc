#include "autosar/os.h"
#include "test/test.h"
#include "machine.h"

//#include "fail/trace.h"

void ara_timing_info(int, int);



DeclareSpinlock(LOCK0);




DeclareTask(CPU0Task1Subtask4);
DeclareTask(CPU0Task1Subtask11);
DeclareTask(CPU1Task2Subtask1);
DeclareTask(CPU1Task2Subtask6);
DeclareTask(CPU1Task2Subtask7);
DeclareTask(CPU1Task2Subtask14);
DeclareTask(CPU2Task4Subtask8);
DeclareTask(CPU2Task4Subtask13);
DeclareTask(CPU3Task0Subtask0);
DeclareTask(CPU3Task0Subtask2);
DeclareTask(CPU3Task0Subtask3);
DeclareTask(CPU3Task0Subtask10);
DeclareTask(CPU4Task5Subtask5);
DeclareTask(CPU4Task5Subtask9);
DeclareTask(CPU5Task3Subtask12);


TEST_MAKE_OS_MAIN( StartOS(0) )

// Prototypes

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task1Subtask11 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task1Subtask4 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task2Subtask1 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task2Subtask14 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task2Subtask6 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task2Subtask7 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task4Subtask13 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task4Subtask8 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU3Task0Subtask0 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU3Task0Subtask10 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU3Task0Subtask2 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU3Task0Subtask3 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU4Task5Subtask5 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU4Task5Subtask9 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU5Task3Subtask12 (void);



void AUTOSAR_TASK_FUNC_CPU0Task1Subtask11 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task1Subtask11" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask11.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 126); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask11.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 113); // 0
  ActivateTask(CPU0Task1Subtask4);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask11.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 111); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask11.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 105); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task1Subtask4 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task1Subtask4" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask4.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 109); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask4.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 117); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask4.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 127); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task2Subtask1 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task2Subtask1" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask1.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 113); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask1.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 182); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask1.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 129); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task2Subtask14 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task2Subtask14" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask14.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 25); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask14.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 180); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask14.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 42); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task2Subtask6 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task2Subtask6" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask6.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 80); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask6.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 43); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask6.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 178); // 0
  ActivateTask(CPU1Task2Subtask14);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask6.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 65); // 0
  ActivateTask(CPU1Task2Subtask1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask6.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 26); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task2Subtask7 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task2Subtask7" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask7.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 32); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask7.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 34); // 0
  ActivateTask(CPU1Task2Subtask6);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask7.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 24); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask7.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 108); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task4Subtask13 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task4Subtask13" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask13.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 156); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask13.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 26); // 0
  ActivateTask(CPU2Task4Subtask8);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask13.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 180); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask13.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 179); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask13.4 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(10, 21); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask13.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 49); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task4Subtask8 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task4Subtask8" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask8.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 197); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask8.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 107); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask8.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 197); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU3Task0Subtask0 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU3Task0Subtask0" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task0Subtask0.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 62); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task0Subtask0.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 106); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task0Subtask0.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 192); // 0
  ActivateTask(CPU3Task0Subtask2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task0Subtask0.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 131); // 0
  ActivateTask(CPU3Task0Subtask10);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task0Subtask0.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 88); // 0
  ActivateTask(CPU3Task0Subtask3);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task0Subtask0.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 187); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU3Task0Subtask10 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU3Task0Subtask10" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task0Subtask10.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 198); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task0Subtask10.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 156); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task0Subtask10.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 160); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task0Subtask10.3 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(6, 14); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task0Subtask10.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 48); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU3Task0Subtask2 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU3Task0Subtask2" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task0Subtask2.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 22); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task0Subtask2.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 142); // 0
  ActivateTask(CPU0Task1Subtask11);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task0Subtask2.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 10); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task0Subtask2.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 30); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU3Task0Subtask3 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU3Task0Subtask3" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task0Subtask3.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 54); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task0Subtask3.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 93); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task0Subtask3.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 162); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU4Task5Subtask5 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU4Task5Subtask5" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task5Subtask5.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 158); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task5Subtask5.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 111); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task5Subtask5.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 181); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU4Task5Subtask9 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU4Task5Subtask9" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task5Subtask9.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 177); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task5Subtask9.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 119); // 0
  ActivateTask(CPU4Task5Subtask5);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task5Subtask9.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 160); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task5Subtask9.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 80); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU5Task3Subtask12 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU5Task3Subtask12" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task3Subtask12.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 43); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task3Subtask12.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 174); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task3Subtask12.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 71); // 0
  TerminateTask();

}
