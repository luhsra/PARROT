#include "autosar/os.h"
#include "test/test.h"
#include "machine.h"

//#include "fail/trace.h"

void ara_timing_info(int, int);



DeclareSpinlock(LOCK0);




DeclareTask(CPU0Task5Subtask6);
DeclareTask(CPU0Task5Subtask12);
DeclareTask(CPU1Task1Subtask10);
DeclareTask(CPU1Task1Subtask11);
DeclareTask(CPU1Task1Subtask13);
DeclareTask(CPU2Task2Subtask3);
DeclareTask(CPU2Task2Subtask14);
DeclareTask(CPU3Task4Subtask5);
DeclareTask(CPU4Task3Subtask1);
DeclareTask(CPU4Task3Subtask2);
DeclareTask(CPU5Task0Subtask0);
DeclareTask(CPU5Task0Subtask4);
DeclareTask(CPU5Task0Subtask7);
DeclareTask(CPU5Task0Subtask8);
DeclareTask(CPU5Task0Subtask9);


TEST_MAKE_OS_MAIN( StartOS(0) )

// Prototypes

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task5Subtask12 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task5Subtask6 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task1Subtask10 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task1Subtask11 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task1Subtask13 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task2Subtask14 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task2Subtask3 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU3Task4Subtask5 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU4Task3Subtask1 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU4Task3Subtask2 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU5Task0Subtask0 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU5Task0Subtask4 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU5Task0Subtask7 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU5Task0Subtask8 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU5Task0Subtask9 (void);



void AUTOSAR_TASK_FUNC_CPU0Task5Subtask12 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task5Subtask12" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask12.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 178); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask12.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 156); // 0
  ActivateTask(CPU0Task5Subtask6);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask12.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 64); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask12.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 126); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task5Subtask6 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task5Subtask6" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask6.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 51); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask6.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 133); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask6.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 108); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task1Subtask10 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task1Subtask10" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask10.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 192); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask10.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 48); // 0
  ActivateTask(CPU1Task1Subtask11);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask10.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 63); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask10.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 169); // 0
  ActivateTask(CPU1Task1Subtask13);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask10.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 20); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task1Subtask11 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task1Subtask11" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask11.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 121); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask11.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 99); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask11.3 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(6, 26); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask11.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 106); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask11.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 186); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task1Subtask13 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task1Subtask13" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask13.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 46); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask13.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 45); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask13.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 38); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task2Subtask14 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task2Subtask14" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask14.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 127); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask14.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 145); // 0
  ActivateTask(CPU5Task0Subtask7);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask14.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 137); // 0
  ActivateTask(CPU2Task2Subtask3);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask14.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 105); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask14.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 199); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task2Subtask3 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task2Subtask3" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask3.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 62); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask3.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 113); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask3.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 146); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU3Task4Subtask5 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU3Task4Subtask5" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task4Subtask5.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 118); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task4Subtask5.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 88); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task4Subtask5.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 101); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU4Task3Subtask1 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU4Task3Subtask1" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task3Subtask1.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 50); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task3Subtask1.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 79); // 0
  ActivateTask(CPU4Task3Subtask2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task3Subtask1.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 109); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task3Subtask1.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 104); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU4Task3Subtask2 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU4Task3Subtask2" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task3Subtask2.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 165); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task3Subtask2.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 140); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task3Subtask2.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 43); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU5Task0Subtask0 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU5Task0Subtask0" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task0Subtask0.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 89); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task0Subtask0.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 30); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task0Subtask0.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 34); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU5Task0Subtask4 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU5Task0Subtask4" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task0Subtask4.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 38); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task0Subtask4.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 69); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task0Subtask4.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 94); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task0Subtask4.3 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(2, 12); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task0Subtask4.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 122); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU5Task0Subtask7 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU5Task0Subtask7" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task0Subtask7.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 199); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task0Subtask7.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 174); // 0
  ActivateTask(CPU5Task0Subtask8);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task0Subtask7.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 195); // 0
  ActivateTask(CPU5Task0Subtask9);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task0Subtask7.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 119); // 0
  ActivateTask(CPU5Task0Subtask4);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task0Subtask7.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 131); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task0Subtask7.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 197); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU5Task0Subtask8 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU5Task0Subtask8" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task0Subtask8.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 168); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task0Subtask8.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 38); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task0Subtask8.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 175); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU5Task0Subtask9 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU5Task0Subtask9" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task0Subtask9.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 38); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task0Subtask9.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 196); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task0Subtask9.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 189); // 0
  TerminateTask();

}
