#include "autosar/os.h"
#include "test/test.h"
#include "machine.h"

//#include "fail/trace.h"

void ara_timing_info(int, int);



DeclareSpinlock(LOCK0);




DeclareTask(CPU0Task0Subtask5);
DeclareTask(CPU0Task0Subtask8);
DeclareTask(CPU0Task0Subtask14);
DeclareTask(CPU1Task2Subtask10);
DeclareTask(CPU1Task2Subtask12);
DeclareTask(CPU2Task1Subtask7);
DeclareTask(CPU2Task1Subtask11);
DeclareTask(CPU2Task1Subtask13);
DeclareTask(CPU3Task5Subtask4);
DeclareTask(CPU3Task5Subtask9);
DeclareTask(CPU4Task3Subtask1);
DeclareTask(CPU4Task3Subtask2);
DeclareTask(CPU5Task4Subtask0);
DeclareTask(CPU5Task4Subtask3);
DeclareTask(CPU5Task4Subtask6);


TEST_MAKE_OS_MAIN( StartOS(0) )

// Prototypes

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task0Subtask14 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task0Subtask5 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task0Subtask8 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task2Subtask10 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task2Subtask12 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task1Subtask11 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task1Subtask13 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task1Subtask7 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU3Task5Subtask4 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU3Task5Subtask9 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU4Task3Subtask1 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU4Task3Subtask2 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU5Task4Subtask0 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU5Task4Subtask3 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU5Task4Subtask6 (void);



void AUTOSAR_TASK_FUNC_CPU0Task0Subtask14 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task0Subtask14" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask14.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 5); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask14.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 145); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask14.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 27); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task0Subtask5 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task0Subtask5" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask5.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 24); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask5.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 138); // 0
  ActivateTask(CPU0Task0Subtask14);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask5.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 194); // 0
  ActivateTask(CPU0Task0Subtask8);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask5.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 46); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask5.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 73); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task0Subtask8 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task0Subtask8" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask8.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 99); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask8.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 74); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask8.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 184); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task2Subtask10 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task2Subtask10" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask10.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 132); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask10.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 167); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask10.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 135); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task2Subtask12 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task2Subtask12" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask12.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 46); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask12.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 126); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask12.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 152); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask12.4 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(2, 21); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask12.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 167); // 0
  ActivateTask(CPU1Task2Subtask10);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask12.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 135); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task1Subtask11 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task1Subtask11" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask11.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 69); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask11.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 84); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask11.3 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(4, 16); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask11.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 95); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask11.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 99); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task1Subtask13 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task1Subtask13" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask13.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 142); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask13.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 178); // 0
  ActivateTask(CPU2Task1Subtask11);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask13.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 89); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask13.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 30); // 0
  ActivateTask(CPU2Task1Subtask7);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask13.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 12); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task1Subtask7 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task1Subtask7" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask7.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 62); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask7.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 98); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask7.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 8); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU3Task5Subtask4 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU3Task5Subtask4" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task5Subtask4.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 187); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task5Subtask4.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 15); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task5Subtask4.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 145); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU3Task5Subtask9 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU3Task5Subtask9" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task5Subtask9.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 97); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task5Subtask9.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 176); // 0
  ActivateTask(CPU3Task5Subtask4);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task5Subtask9.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 50); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task5Subtask9.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 35); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU4Task3Subtask1 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU4Task3Subtask1" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task3Subtask1.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 108); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task3Subtask1.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 161); // 0
  ActivateTask(CPU4Task3Subtask2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task3Subtask1.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 42); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task3Subtask1.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 20); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU4Task3Subtask2 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU4Task3Subtask2" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task3Subtask2.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 105); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task3Subtask2.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 153); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task3Subtask2.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 14); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU5Task4Subtask0 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU5Task4Subtask0" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task4Subtask0.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 149); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task4Subtask0.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 197); // 0
  ActivateTask(CPU5Task4Subtask3);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task4Subtask0.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 78); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task4Subtask0.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 95); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU5Task4Subtask3 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU5Task4Subtask3" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task4Subtask3.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 116); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task4Subtask3.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 162); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task4Subtask3.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 57); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU5Task4Subtask6 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU5Task4Subtask6" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task4Subtask6.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 74); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task4Subtask6.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 43); // 0
  ActivateTask(CPU5Task4Subtask0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task4Subtask6.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 125); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task4Subtask6.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 70); // 0
  TerminateTask();

}
