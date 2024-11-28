#include "autosar/os.h"
#include "test/test.h"
#include "machine.h"

//#include "fail/trace.h"

void ara_timing_info(int, int);



DeclareSpinlock(LOCK0);
DeclareSpinlock(LOCK1);
DeclareSpinlock(LOCK2);




DeclareTask(CPU0Task1Subtask9);
DeclareTask(CPU0Task1Subtask12);
DeclareTask(CPU1Task3Subtask7);
DeclareTask(CPU2Task2Subtask4);
DeclareTask(CPU3Task4Subtask2);
DeclareTask(CPU3Task4Subtask3);
DeclareTask(CPU3Task4Subtask5);
DeclareTask(CPU3Task4Subtask8);
DeclareTask(CPU3Task4Subtask14);
DeclareTask(CPU4Task0Subtask0);
DeclareTask(CPU4Task0Subtask10);
DeclareTask(CPU4Task0Subtask11);
DeclareTask(CPU4Task0Subtask13);
DeclareTask(CPU5Task5Subtask1);
DeclareTask(CPU5Task5Subtask6);


TEST_MAKE_OS_MAIN( StartOS(0) )

// Prototypes

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task1Subtask12 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task1Subtask9 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task3Subtask7 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task2Subtask4 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU3Task4Subtask14 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU3Task4Subtask2 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU3Task4Subtask3 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU3Task4Subtask5 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU3Task4Subtask8 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU4Task0Subtask0 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU4Task0Subtask10 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU4Task0Subtask11 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU4Task0Subtask13 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU5Task5Subtask1 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU5Task5Subtask6 (void);



void AUTOSAR_TASK_FUNC_CPU0Task1Subtask12 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task1Subtask12" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask12.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 154); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask12.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 191); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask12.3 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(9, 25); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask12.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 121); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask12.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 93); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task1Subtask9 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task1Subtask9" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask9.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 29); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask9.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 146); // 0
  ActivateTask(CPU0Task1Subtask12);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask9.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 166); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask9.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 177); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task3Subtask7 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task3Subtask7" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask7.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 114); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask7.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 91); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask7.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 44); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task2Subtask4 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task2Subtask4" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask4.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 154); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask4.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 16); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask4.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 59); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU3Task4Subtask14 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU3Task4Subtask14" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task4Subtask14.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 104); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task4Subtask14.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 136); // 0
  ActivateTask(CPU3Task4Subtask3);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task4Subtask14.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 35); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task4Subtask14.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 13); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task4Subtask14.4 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(6, 16); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task4Subtask14.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 47); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU3Task4Subtask2 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU3Task4Subtask2" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task4Subtask2.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 124); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task4Subtask2.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 110); // 0
  ActivateTask(CPU3Task4Subtask14);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task4Subtask2.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 17); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task4Subtask2.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 94); // 0
  GetSpinlock(LOCK2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task4Subtask2.5 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(7, 14); // 1
  ReleaseSpinlock(LOCK2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task4Subtask2.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 50); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task4Subtask2.6 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 149); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU3Task4Subtask3 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU3Task4Subtask3" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task4Subtask3.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 173); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task4Subtask3.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 118); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task4Subtask3.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 47); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU3Task4Subtask5 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU3Task4Subtask5" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task4Subtask5.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 182); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task4Subtask5.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 178); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task4Subtask5.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 145); // 0
  ActivateTask(CPU3Task4Subtask8);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task4Subtask5.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 66); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU3Task4Subtask8 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU3Task4Subtask8" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task4Subtask8.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 33); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task4Subtask8.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 152); // 0
  GetSpinlock(LOCK1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task4Subtask8.3 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(3, 6); // 1
  ReleaseSpinlock(LOCK1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task4Subtask8.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 75); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task4Subtask8.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 120); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU4Task0Subtask0 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU4Task0Subtask0" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task0Subtask0.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 58); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task0Subtask0.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 107); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task0Subtask0.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 36); // 0
  GetSpinlock(LOCK1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task0Subtask0.3 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(4, 20); // 1
  ReleaseSpinlock(LOCK1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task0Subtask0.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 94); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU4Task0Subtask10 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU4Task0Subtask10" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task0Subtask10.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 146); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task0Subtask10.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 153); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task0Subtask10.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 163); // 0
  ActivateTask(CPU4Task0Subtask0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task0Subtask10.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 52); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU4Task0Subtask11 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU4Task0Subtask11" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task0Subtask11.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 68); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task0Subtask11.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 193); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task0Subtask11.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 189); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU4Task0Subtask13 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU4Task0Subtask13" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task0Subtask13.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 83); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task0Subtask13.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 99); // 0
  GetSpinlock(LOCK2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task0Subtask13.5 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(2, 18); // 1
  ReleaseSpinlock(LOCK2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task0Subtask13.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 26); // 0
  ActivateTask(CPU4Task0Subtask10);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task0Subtask13.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 14); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task0Subtask13.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 164); // 0
  ActivateTask(CPU4Task0Subtask11);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task0Subtask13.6 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 25); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU5Task5Subtask1 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU5Task5Subtask1" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task5Subtask1.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 104); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task5Subtask1.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 73); // 0
  ActivateTask(CPU5Task5Subtask6);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task5Subtask1.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 135); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task5Subtask1.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 134); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU5Task5Subtask6 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU5Task5Subtask6" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task5Subtask6.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 99); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task5Subtask6.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 51); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task5Subtask6.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 113); // 0
  TerminateTask();

}