#include "autosar/os.h"
#include "test/test.h"
#include "machine.h"

//#include "fail/trace.h"

void ara_timing_info(int, int);



DeclareSpinlock(LOCK0);
DeclareSpinlock(LOCK1);
DeclareSpinlock(LOCK2);




DeclareTask(CPU0Task2Subtask6);
DeclareTask(CPU0Task2Subtask7);
DeclareTask(CPU0Task2Subtask11);
DeclareTask(CPU0Task2Subtask14);
DeclareTask(CPU1Task5Subtask1);
DeclareTask(CPU2Task4Subtask0);
DeclareTask(CPU2Task4Subtask2);
DeclareTask(CPU2Task4Subtask10);
DeclareTask(CPU2Task4Subtask12);
DeclareTask(CPU3Task1Subtask5);
DeclareTask(CPU4Task0Subtask3);
DeclareTask(CPU4Task0Subtask4);
DeclareTask(CPU4Task0Subtask8);
DeclareTask(CPU5Task3Subtask9);
DeclareTask(CPU5Task3Subtask13);


TEST_MAKE_OS_MAIN( StartOS(0) )

// Prototypes

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task2Subtask11 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task2Subtask14 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task2Subtask6 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task2Subtask7 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task5Subtask1 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task4Subtask0 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task4Subtask10 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task4Subtask12 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task4Subtask2 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU3Task1Subtask5 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU4Task0Subtask3 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU4Task0Subtask4 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU4Task0Subtask8 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU5Task3Subtask13 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU5Task3Subtask9 (void);



void AUTOSAR_TASK_FUNC_CPU0Task2Subtask11 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task2Subtask11" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask11.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 196); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask11.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 63); // 0
  GetSpinlock(LOCK2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask11.8 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(9, 21); // 1
  ReleaseSpinlock(LOCK2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask11.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 44); // 0
  ActivateTask(CPU0Task2Subtask6);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask11.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 177); // 0
  GetSpinlock(LOCK1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask11.7 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(10, 14); // 1
  ReleaseSpinlock(LOCK1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask11.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 193); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask11.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 84); // 0
  ActivateTask(CPU0Task2Subtask14);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask11.6 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 127); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask11.9 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 119); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task2Subtask14 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task2Subtask14" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask14.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 191); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask14.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 20); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask14.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 154); // 0
  ActivateTask(CPU3Task1Subtask5);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask14.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 174); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task2Subtask6 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task2Subtask6" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask6.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 167); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask6.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 102); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask6.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 176); // 0
  ActivateTask(CPU0Task2Subtask7);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask6.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 119); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task2Subtask7 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task2Subtask7" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask7.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 77); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask7.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 126); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask7.3 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(10, 21); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask7.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 89); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask7.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 26); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task5Subtask1 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task5Subtask1" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask1.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 114); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask1.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 191); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask1.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 75); // 0
  GetSpinlock(LOCK1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask1.3 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(10, 10); // 1
  ReleaseSpinlock(LOCK1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask1.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 156); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task4Subtask0 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task4Subtask0" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask0.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 135); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask0.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 163); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask0.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 96); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task4Subtask10 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task4Subtask10" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask10.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 193); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask10.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 27); // 0
  GetSpinlock(LOCK2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask10.3 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(1, 13); // 1
  ReleaseSpinlock(LOCK2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask10.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 46); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask10.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 136); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task4Subtask12 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task4Subtask12" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask12.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 43); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask12.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 132); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask12.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 120); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task4Subtask2 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task4Subtask2" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask2.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 114); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask2.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 55); // 0
  ActivateTask(CPU2Task4Subtask0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask2.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 187); // 0
  ActivateTask(CPU2Task4Subtask12);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask2.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 184); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask2.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 103); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU3Task1Subtask5 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU3Task1Subtask5" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task1Subtask5.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 163); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task1Subtask5.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 96); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task1Subtask5.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 32); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task1Subtask5.3 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(10, 24); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task1Subtask5.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 99); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU4Task0Subtask3 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU4Task0Subtask3" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task0Subtask3.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 81); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task0Subtask3.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 77); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task0Subtask3.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 16); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU4Task0Subtask4 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU4Task0Subtask4" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task0Subtask4.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 123); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task0Subtask4.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 86); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task0Subtask4.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 123); // 0
  ActivateTask(CPU4Task0Subtask3);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task0Subtask4.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 192); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU4Task0Subtask8 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU4Task0Subtask8" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task0Subtask8.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 195); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task0Subtask8.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 34); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task0Subtask8.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 62); // 0
  ActivateTask(CPU4Task0Subtask4);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task0Subtask8.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 121); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU5Task3Subtask13 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU5Task3Subtask13" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task3Subtask13.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 106); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task3Subtask13.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 116); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task3Subtask13.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 96); // 0
  ActivateTask(CPU5Task3Subtask9);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task3Subtask13.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 26); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU5Task3Subtask9 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU5Task3Subtask9" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task3Subtask9.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 34); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task3Subtask9.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 103); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task3Subtask9.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 117); // 0
  TerminateTask();

}
