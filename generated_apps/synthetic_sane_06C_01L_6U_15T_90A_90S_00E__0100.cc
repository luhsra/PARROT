#include "autosar/os.h"
#include "test/test.h"
#include "machine.h"

//#include "fail/trace.h"

void ara_timing_info(int, int);



DeclareSpinlock(LOCK0);




DeclareTask(CPU0Task3Subtask6);
DeclareTask(CPU0Task3Subtask9);
DeclareTask(CPU1Task1Subtask5);
DeclareTask(CPU1Task1Subtask11);
DeclareTask(CPU1Task1Subtask13);
DeclareTask(CPU2Task5Subtask2);
DeclareTask(CPU2Task5Subtask10);
DeclareTask(CPU3Task0Subtask0);
DeclareTask(CPU3Task0Subtask7);
DeclareTask(CPU3Task0Subtask14);
DeclareTask(CPU4Task2Subtask1);
DeclareTask(CPU4Task2Subtask8);
DeclareTask(CPU4Task2Subtask12);
DeclareTask(CPU5Task4Subtask3);
DeclareTask(CPU5Task4Subtask4);


TEST_MAKE_OS_MAIN( StartOS(0) )

// Prototypes

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task3Subtask6 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task3Subtask9 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task1Subtask11 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task1Subtask13 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task1Subtask5 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task5Subtask10 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task5Subtask2 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU3Task0Subtask0 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU3Task0Subtask14 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU3Task0Subtask7 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU4Task2Subtask1 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU4Task2Subtask12 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU4Task2Subtask8 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU5Task4Subtask3 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU5Task4Subtask4 (void);



void AUTOSAR_TASK_FUNC_CPU0Task3Subtask6 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task3Subtask6" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask6.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 174); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask6.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 171); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask6.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 99); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task3Subtask9 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task3Subtask9" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask9.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 114); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask9.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 189); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask9.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 79); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask9.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 78); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask9.4 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(5, 8); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask9.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 167); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task1Subtask11 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task1Subtask11" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask11.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 192); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask11.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 130); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask11.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 126); // 0
  ActivateTask(CPU1Task1Subtask5);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask11.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 25); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task1Subtask13 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task1Subtask13" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask13.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 61); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask13.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 85); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask13.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 42); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task1Subtask5 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task1Subtask5" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask5.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 25); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask5.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 185); // 0
  ActivateTask(CPU1Task1Subtask13);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask5.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 34); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask5.4 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(6, 8); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask5.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 64); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask5.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 153); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task5Subtask10 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task5Subtask10" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask10.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 183); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask10.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 187); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask10.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 181); // 0
  ActivateTask(CPU2Task5Subtask2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask10.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 62); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task5Subtask2 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task5Subtask2" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask2.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 13); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask2.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 124); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask2.3 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(8, 9); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask2.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 15); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask2.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 126); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU3Task0Subtask0 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU3Task0Subtask0" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task0Subtask0.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 81); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task0Subtask0.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 183); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task0Subtask0.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 114); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU3Task0Subtask14 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU3Task0Subtask14" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task0Subtask14.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 90); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task0Subtask14.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 137); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task0Subtask14.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 171); // 0
  ActivateTask(CPU3Task0Subtask7);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task0Subtask14.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 67); // 0
  ActivateTask(CPU5Task4Subtask4);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task0Subtask14.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 150); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU3Task0Subtask7 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU3Task0Subtask7" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task0Subtask7.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 89); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task0Subtask7.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 67); // 0
  ActivateTask(CPU3Task0Subtask0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task0Subtask7.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 36); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task0Subtask7.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 120); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU4Task2Subtask1 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU4Task2Subtask1" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task2Subtask1.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 101); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task2Subtask1.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 45); // 0
  ActivateTask(CPU4Task2Subtask8);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task2Subtask1.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 153); // 0
  ActivateTask(CPU4Task2Subtask12);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task2Subtask1.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 191); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task2Subtask1.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 87); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU4Task2Subtask12 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU4Task2Subtask12" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task2Subtask12.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 121); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task2Subtask12.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 13); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task2Subtask12.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 63); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU4Task2Subtask8 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU4Task2Subtask8" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task2Subtask8.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 159); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task2Subtask8.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 89); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task2Subtask8.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 6); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU5Task4Subtask3 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU5Task4Subtask3" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task4Subtask3.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 163); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task4Subtask3.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 79); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task4Subtask3.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 117); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU5Task4Subtask4 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU5Task4Subtask4" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task4Subtask4.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 61); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task4Subtask4.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 194); // 0
  ActivateTask(CPU5Task4Subtask3);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task4Subtask4.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 108); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task4Subtask4.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 70); // 0
  TerminateTask();

}
