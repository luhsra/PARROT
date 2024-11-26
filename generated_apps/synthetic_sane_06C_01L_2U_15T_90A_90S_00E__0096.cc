#include "autosar/os.h"
#include "test/test.h"
#include "machine.h"

//#include "fail/trace.h"

void ara_timing_info(int, int);



DeclareSpinlock(LOCK0);




DeclareTask(CPU0Task4Subtask2);
DeclareTask(CPU0Task4Subtask10);
DeclareTask(CPU1Task5Subtask5);
DeclareTask(CPU2Task3Subtask1);
DeclareTask(CPU2Task3Subtask12);
DeclareTask(CPU2Task3Subtask14);
DeclareTask(CPU3Task0Subtask0);
DeclareTask(CPU3Task0Subtask3);
DeclareTask(CPU3Task0Subtask13);
DeclareTask(CPU4Task2Subtask6);
DeclareTask(CPU4Task2Subtask7);
DeclareTask(CPU5Task1Subtask4);
DeclareTask(CPU5Task1Subtask8);
DeclareTask(CPU5Task1Subtask9);
DeclareTask(CPU5Task1Subtask11);


TEST_MAKE_OS_MAIN( StartOS(0) )

// Prototypes

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task4Subtask10 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task4Subtask2 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task5Subtask5 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task3Subtask1 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task3Subtask12 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task3Subtask14 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU3Task0Subtask0 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU3Task0Subtask13 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU3Task0Subtask3 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU4Task2Subtask6 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU4Task2Subtask7 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU5Task1Subtask11 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU5Task1Subtask4 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU5Task1Subtask8 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU5Task1Subtask9 (void);



void AUTOSAR_TASK_FUNC_CPU0Task4Subtask10 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task4Subtask10" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask10.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 86); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask10.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 8); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask10.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 84); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task4Subtask2 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task4Subtask2" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask2.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 105); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask2.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 185); // 0
  ActivateTask(CPU0Task4Subtask10);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask2.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 28); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask2.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 151); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task5Subtask5 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task5Subtask5" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask5.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 20); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask5.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 145); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask5.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 115); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task3Subtask1 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task3Subtask1" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task3Subtask1.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 72); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task3Subtask1.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 121); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task3Subtask1.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 168); // 0
  ActivateTask(CPU2Task3Subtask14);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task3Subtask1.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 178); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task3Subtask12 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task3Subtask12" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task3Subtask12.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 83); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task3Subtask12.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 91); // 0
  ActivateTask(CPU2Task3Subtask1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task3Subtask12.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 72); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task3Subtask12.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 63); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task3Subtask14 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task3Subtask14" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task3Subtask14.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 160); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task3Subtask14.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 91); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task3Subtask14.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 95); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU3Task0Subtask0 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU3Task0Subtask0" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task0Subtask0.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 104); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task0Subtask0.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 127); // 0
  ActivateTask(CPU3Task0Subtask13);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task0Subtask0.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 46); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task0Subtask0.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 136); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU3Task0Subtask13 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU3Task0Subtask13" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task0Subtask13.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 91); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task0Subtask13.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 75); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task0Subtask13.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 108); // 0
  ActivateTask(CPU3Task0Subtask3);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task0Subtask13.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 98); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU3Task0Subtask3 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU3Task0Subtask3" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task0Subtask3.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 144); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task0Subtask3.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 69); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task0Subtask3.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 120); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU4Task2Subtask6 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU4Task2Subtask6" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task2Subtask6.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 67); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task2Subtask6.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 156); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task2Subtask6.3 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(8, 17); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task2Subtask6.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 21); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task2Subtask6.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 185); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU4Task2Subtask7 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU4Task2Subtask7" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task2Subtask7.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 114); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task2Subtask7.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 28); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task2Subtask7.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 169); // 0
  ActivateTask(CPU4Task2Subtask6);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task2Subtask7.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 57); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU5Task1Subtask11 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU5Task1Subtask11" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task1Subtask11.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 84); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task1Subtask11.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 99); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task1Subtask11.3 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(7, 25); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task1Subtask11.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 85); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task1Subtask11.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 24); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU5Task1Subtask4 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU5Task1Subtask4" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task1Subtask4.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 102); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task1Subtask4.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 134); // 0
  ActivateTask(CPU5Task1Subtask11);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task1Subtask4.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 186); // 0
  ActivateTask(CPU5Task1Subtask8);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task1Subtask4.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 5); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task1Subtask4.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 135); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU5Task1Subtask8 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU5Task1Subtask8" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task1Subtask8.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 155); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task1Subtask8.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 49); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task1Subtask8.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 78); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU5Task1Subtask9 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU5Task1Subtask9" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task1Subtask9.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 40); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task1Subtask9.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 117); // 0
  ActivateTask(CPU5Task1Subtask4);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task1Subtask9.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 14); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task1Subtask9.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 178); // 0
  TerminateTask();

}
