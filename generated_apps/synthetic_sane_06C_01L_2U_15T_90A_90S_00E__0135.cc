#include "autosar/os.h"
#include "test/test.h"
#include "machine.h"

//#include "fail/trace.h"

void ara_timing_info(int, int);



DeclareSpinlock(LOCK0);




DeclareTask(CPU0Task3Subtask1);
DeclareTask(CPU0Task3Subtask5);
DeclareTask(CPU0Task3Subtask12);
DeclareTask(CPU1Task4Subtask0);
DeclareTask(CPU1Task4Subtask3);
DeclareTask(CPU1Task4Subtask9);
DeclareTask(CPU1Task4Subtask10);
DeclareTask(CPU1Task4Subtask14);
DeclareTask(CPU2Task1Subtask6);
DeclareTask(CPU2Task1Subtask8);
DeclareTask(CPU3Task0Subtask7);
DeclareTask(CPU3Task0Subtask13);
DeclareTask(CPU4Task2Subtask2);
DeclareTask(CPU5Task5Subtask4);
DeclareTask(CPU5Task5Subtask11);


TEST_MAKE_OS_MAIN( StartOS(0) )

// Prototypes

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task3Subtask1 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task3Subtask12 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task3Subtask5 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task4Subtask0 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task4Subtask10 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task4Subtask14 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task4Subtask3 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task4Subtask9 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task1Subtask6 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task1Subtask8 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU3Task0Subtask13 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU3Task0Subtask7 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU4Task2Subtask2 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU5Task5Subtask11 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU5Task5Subtask4 (void);



void AUTOSAR_TASK_FUNC_CPU0Task3Subtask1 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task3Subtask1" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask1.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 145); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask1.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 187); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask1.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 67); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task3Subtask12 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task3Subtask12" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask12.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 190); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask12.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 41); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask12.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 57); // 0
  ActivateTask(CPU0Task3Subtask5);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask12.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 25); // 0
  ActivateTask(CPU0Task3Subtask1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask12.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 137); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task3Subtask5 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task3Subtask5" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask5.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 63); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask5.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 51); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask5.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 157); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask5.3 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(9, 26); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask5.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 136); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task4Subtask0 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task4Subtask0" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask0.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 163); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask0.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 32); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask0.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 83); // 0
  ActivateTask(CPU2Task1Subtask8);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask0.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 87); // 0
  ActivateTask(CPU1Task4Subtask14);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask0.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 8); // 0
  ActivateTask(CPU1Task4Subtask10);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask0.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 75); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task4Subtask10 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task4Subtask10" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask10.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 43); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask10.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 83); // 0
  ActivateTask(CPU1Task4Subtask3);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask10.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 97); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask10.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 103); // 0
  ActivateTask(CPU1Task4Subtask9);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask10.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 105); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task4Subtask14 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task4Subtask14" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask14.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 85); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask14.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 176); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask14.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 80); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task4Subtask3 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task4Subtask3" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask3.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 81); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask3.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 59); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask3.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 108); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task4Subtask9 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task4Subtask9" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask9.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 159); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask9.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 71); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask9.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 54); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task1Subtask6 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task1Subtask6" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask6.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 161); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask6.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 88); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask6.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 27); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task1Subtask8 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task1Subtask8" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask8.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 144); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask8.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 185); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask8.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 8); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask8.4 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(8, 17); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask8.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 49); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask8.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 129); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU3Task0Subtask13 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU3Task0Subtask13" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task0Subtask13.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 86); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task0Subtask13.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 156); // 0
  ActivateTask(CPU3Task0Subtask7);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task0Subtask13.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 190); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task0Subtask13.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 18); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU3Task0Subtask7 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU3Task0Subtask7" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task0Subtask7.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 166); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task0Subtask7.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 45); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task0Subtask7.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 187); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU4Task2Subtask2 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU4Task2Subtask2" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task2Subtask2.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 30); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task2Subtask2.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 153); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task2Subtask2.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 23); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU5Task5Subtask11 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU5Task5Subtask11" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task5Subtask11.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 173); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task5Subtask11.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 86); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task5Subtask11.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 46); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU5Task5Subtask4 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU5Task5Subtask4" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task5Subtask4.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 60); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task5Subtask4.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 34); // 0
  ActivateTask(CPU5Task5Subtask11);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task5Subtask4.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 186); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task5Subtask4.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 162); // 0
  TerminateTask();

}
