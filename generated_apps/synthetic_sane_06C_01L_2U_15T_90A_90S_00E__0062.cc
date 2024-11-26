#include "autosar/os.h"
#include "test/test.h"
#include "machine.h"

//#include "fail/trace.h"

void ara_timing_info(int, int);



DeclareSpinlock(LOCK0);




DeclareTask(CPU0Task4Subtask4);
DeclareTask(CPU0Task4Subtask12);
DeclareTask(CPU1Task1Subtask3);
DeclareTask(CPU1Task1Subtask9);
DeclareTask(CPU1Task1Subtask14);
DeclareTask(CPU2Task3Subtask2);
DeclareTask(CPU3Task5Subtask1);
DeclareTask(CPU3Task5Subtask11);
DeclareTask(CPU3Task5Subtask13);
DeclareTask(CPU4Task2Subtask0);
DeclareTask(CPU4Task2Subtask5);
DeclareTask(CPU4Task2Subtask6);
DeclareTask(CPU5Task0Subtask7);
DeclareTask(CPU5Task0Subtask8);
DeclareTask(CPU5Task0Subtask10);


TEST_MAKE_OS_MAIN( StartOS(0) )

// Prototypes

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task4Subtask12 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task4Subtask4 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task1Subtask14 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task1Subtask3 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task1Subtask9 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task3Subtask2 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU3Task5Subtask1 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU3Task5Subtask11 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU3Task5Subtask13 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU4Task2Subtask0 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU4Task2Subtask5 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU4Task2Subtask6 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU5Task0Subtask10 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU5Task0Subtask7 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU5Task0Subtask8 (void);



void AUTOSAR_TASK_FUNC_CPU0Task4Subtask12 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task4Subtask12" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask12.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 22); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask12.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 170); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask12.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 61); // 0
  ActivateTask(CPU0Task4Subtask4);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask12.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 109); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task4Subtask4 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task4Subtask4" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask4.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 27); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask4.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 99); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask4.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 84); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task1Subtask14 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task1Subtask14" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask14.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 58); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask14.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 137); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask14.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 163); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task1Subtask3 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task1Subtask3" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask3.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 156); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask3.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 108); // 0
  ActivateTask(CPU1Task1Subtask9);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask3.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 101); // 0
  ActivateTask(CPU1Task1Subtask14);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask3.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 80); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask3.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 87); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task1Subtask9 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task1Subtask9" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask9.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 108); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask9.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 26); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask9.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 57); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task3Subtask2 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task3Subtask2" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task3Subtask2.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 119); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task3Subtask2.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 31); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task3Subtask2.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 153); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU3Task5Subtask1 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU3Task5Subtask1" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task5Subtask1.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 51); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task5Subtask1.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 97); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task5Subtask1.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 198); // 0
  ActivateTask(CPU3Task5Subtask11);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task5Subtask1.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 45); // 0
  ActivateTask(CPU3Task5Subtask13);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task5Subtask1.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 116); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU3Task5Subtask11 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU3Task5Subtask11" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task5Subtask11.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 69); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task5Subtask11.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 60); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task5Subtask11.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 58); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU3Task5Subtask13 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU3Task5Subtask13" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task5Subtask13.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 124); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task5Subtask13.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 103); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task5Subtask13.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 31); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU4Task2Subtask0 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU4Task2Subtask0" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task2Subtask0.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 47); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task2Subtask0.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 68); // 0
  ActivateTask(CPU4Task2Subtask5);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task2Subtask0.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 134); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task2Subtask0.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 99); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU4Task2Subtask5 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU4Task2Subtask5" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task2Subtask5.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 14); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task2Subtask5.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 42); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task2Subtask5.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 181); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU4Task2Subtask6 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU4Task2Subtask6" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task2Subtask6.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 61); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task2Subtask6.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 114); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task2Subtask6.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 179); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task2Subtask6.4 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(9, 24); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task2Subtask6.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 179); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task2Subtask6.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 43); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU5Task0Subtask10 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU5Task0Subtask10" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task0Subtask10.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 102); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task0Subtask10.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 159); // 0
  ActivateTask(CPU5Task0Subtask7);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task0Subtask10.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 191); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task0Subtask10.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 42); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU5Task0Subtask7 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU5Task0Subtask7" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task0Subtask7.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 113); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task0Subtask7.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 79); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task0Subtask7.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 152); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task0Subtask7.4 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(6, 14); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task0Subtask7.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 178); // 0
  ActivateTask(CPU5Task0Subtask8);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task0Subtask7.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 20); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU5Task0Subtask8 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU5Task0Subtask8" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task0Subtask8.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 14); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task0Subtask8.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 139); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task0Subtask8.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 20); // 0
  TerminateTask();

}
