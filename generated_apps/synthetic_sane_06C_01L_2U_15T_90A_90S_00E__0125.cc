#include "autosar/os.h"
#include "test/test.h"
#include "machine.h"

//#include "fail/trace.h"

void ara_timing_info(int, int);



DeclareSpinlock(LOCK0);




DeclareTask(CPU0Task4Subtask1);
DeclareTask(CPU0Task4Subtask2);
DeclareTask(CPU0Task4Subtask8);
DeclareTask(CPU0Task4Subtask9);
DeclareTask(CPU1Task3Subtask3);
DeclareTask(CPU1Task3Subtask7);
DeclareTask(CPU1Task3Subtask13);
DeclareTask(CPU2Task2Subtask4);
DeclareTask(CPU2Task2Subtask5);
DeclareTask(CPU2Task2Subtask6);
DeclareTask(CPU3Task1Subtask12);
DeclareTask(CPU3Task1Subtask14);
DeclareTask(CPU4Task5Subtask0);
DeclareTask(CPU4Task5Subtask11);
DeclareTask(CPU5Task0Subtask10);


TEST_MAKE_OS_MAIN( StartOS(0) )

// Prototypes

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task4Subtask1 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task4Subtask2 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task4Subtask8 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task4Subtask9 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task3Subtask13 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task3Subtask3 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task3Subtask7 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task2Subtask4 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task2Subtask5 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task2Subtask6 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU3Task1Subtask12 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU3Task1Subtask14 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU4Task5Subtask0 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU4Task5Subtask11 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU5Task0Subtask10 (void);



void AUTOSAR_TASK_FUNC_CPU0Task4Subtask1 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task4Subtask1" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask1.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 73); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask1.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 148); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask1.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 162); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task4Subtask2 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task4Subtask2" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask2.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 172); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask2.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 57); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask2.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 118); // 0
  ActivateTask(CPU0Task4Subtask8);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask2.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 88); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task4Subtask8 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task4Subtask8" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask8.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 173); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask8.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 108); // 0
  ActivateTask(CPU0Task4Subtask1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask8.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 42); // 0
  ActivateTask(CPU0Task4Subtask9);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask8.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 79); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask8.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 106); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task4Subtask9 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task4Subtask9" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask9.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 116); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask9.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 50); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask9.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 31); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task3Subtask13 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task3Subtask13" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask13.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 176); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask13.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 49); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask13.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 145); // 0
  ActivateTask(CPU4Task5Subtask0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask13.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 19); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask13.4 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(7, 7); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask13.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 59); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task3Subtask3 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task3Subtask3" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask3.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 123); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask3.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 141); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask3.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 42); // 0
  ActivateTask(CPU1Task3Subtask7);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask3.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 154); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task3Subtask7 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task3Subtask7" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask7.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 20); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask7.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 48); // 0
  ActivateTask(CPU2Task2Subtask5);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask7.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 151); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask7.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 26); // 0
  ActivateTask(CPU1Task3Subtask13);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask7.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 163); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task2Subtask4 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task2Subtask4" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask4.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 45); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask4.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 36); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask4.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 108); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task2Subtask5 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task2Subtask5" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask5.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 164); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask5.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 138); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask5.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 76); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task2Subtask6 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task2Subtask6" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask6.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 188); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask6.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 105); // 0
  ActivateTask(CPU2Task2Subtask4);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask6.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 97); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask6.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 147); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU3Task1Subtask12 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU3Task1Subtask12" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task1Subtask12.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 187); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task1Subtask12.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 60); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task1Subtask12.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 85); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task1Subtask12.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 74); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task1Subtask12.4 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(2, 25); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task1Subtask12.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 27); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU3Task1Subtask14 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU3Task1Subtask14" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task1Subtask14.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 84); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task1Subtask14.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 141); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task1Subtask14.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 133); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU4Task5Subtask0 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU4Task5Subtask0" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task5Subtask0.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 27); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task5Subtask0.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 80); // 0
  ActivateTask(CPU4Task5Subtask11);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task5Subtask0.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 126); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task5Subtask0.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 139); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU4Task5Subtask11 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU4Task5Subtask11" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task5Subtask11.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 75); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task5Subtask11.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 44); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task5Subtask11.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 185); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU5Task0Subtask10 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU5Task0Subtask10" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task0Subtask10.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 57); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task0Subtask10.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 103); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task0Subtask10.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 29); // 0
  TerminateTask();

}