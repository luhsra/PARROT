#include "autosar/os.h"
#include "test/test.h"
#include "machine.h"

//#include "fail/trace.h"

void ara_timing_info(int, int);



DeclareSpinlock(LOCK0);
DeclareSpinlock(LOCK1);
DeclareSpinlock(LOCK2);




DeclareTask(CPU0Task0Subtask0);
DeclareTask(CPU0Task0Subtask8);
DeclareTask(CPU0Task0Subtask10);
DeclareTask(CPU0Task0Subtask13);
DeclareTask(CPU0Task0Subtask14);
DeclareTask(CPU0Task2Subtask1);
DeclareTask(CPU0Task5Subtask4);
DeclareTask(CPU0Task5Subtask6);
DeclareTask(CPU1Task1Subtask5);
DeclareTask(CPU1Task3Subtask2);
DeclareTask(CPU1Task3Subtask9);
DeclareTask(CPU1Task3Subtask12);
DeclareTask(CPU1Task4Subtask3);
DeclareTask(CPU1Task4Subtask7);
DeclareTask(CPU1Task4Subtask11);


TEST_MAKE_OS_MAIN( StartOS(0) )

// Prototypes

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task0Subtask0 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task0Subtask10 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task0Subtask13 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task0Subtask14 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task0Subtask8 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task2Subtask1 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task5Subtask4 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task5Subtask6 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task1Subtask5 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task3Subtask12 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task3Subtask2 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task3Subtask9 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task4Subtask11 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task4Subtask3 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task4Subtask7 (void);



void AUTOSAR_TASK_FUNC_CPU0Task0Subtask0 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task0Subtask0" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask0.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 107); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask0.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 26); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask0.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 52); // 0
  GetSpinlock(LOCK1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask0.3 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(1, 21); // 1
  ReleaseSpinlock(LOCK1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask0.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 113); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task0Subtask10 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task0Subtask10" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask10.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 164); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask10.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 180); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask10.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 27); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task0Subtask13 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task0Subtask13" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask13.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 192); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask13.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 80); // 0
  ActivateTask(CPU0Task0Subtask8);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask13.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 81); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask13.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 186); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task0Subtask14 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task0Subtask14" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask14.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 68); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask14.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 82); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask14.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 182); // 0
  ActivateTask(CPU1Task4Subtask11);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask14.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 134); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task0Subtask8 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task0Subtask8" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask8.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 66); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask8.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 93); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask8.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 57); // 0
  ActivateTask(CPU0Task0Subtask14);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask8.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 117); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task2Subtask1 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task2Subtask1" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask1.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 79); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask1.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 110); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask1.3 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(2, 11); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask1.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 182); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask1.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 200); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task5Subtask4 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task5Subtask4" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask4.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 131); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask4.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 84); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask4.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 20); // 0
  GetSpinlock(LOCK2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask4.3 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(1, 3); // 1
  ReleaseSpinlock(LOCK2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask4.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 158); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task5Subtask6 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task5Subtask6" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask6.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 189); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask6.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 176); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask6.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 91); // 0
  ActivateTask(CPU0Task5Subtask4);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask6.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 198); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task1Subtask5 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task1Subtask5" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask5.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 59); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask5.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 46); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask5.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 144); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task3Subtask12 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task3Subtask12" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask12.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 34); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask12.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 154); // 0
  ActivateTask(CPU0Task0Subtask0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask12.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 199); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask12.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 35); // 0
  ActivateTask(CPU1Task3Subtask2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask12.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 67); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task3Subtask2 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task3Subtask2" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask2.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 118); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask2.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 111); // 0
  GetSpinlock(LOCK2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask2.4 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(3, 15); // 1
  ReleaseSpinlock(LOCK2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask2.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 73); // 0
  ActivateTask(CPU0Task0Subtask10);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask2.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 187); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask2.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 29); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task3Subtask9 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task3Subtask9" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask9.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 102); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask9.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 185); // 0
  ActivateTask(CPU1Task3Subtask12);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask9.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 72); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask9.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 21); // 0
  GetSpinlock(LOCK1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask9.4 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(8, 8); // 1
  ReleaseSpinlock(LOCK1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask9.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 60); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task4Subtask11 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task4Subtask11" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask11.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 187); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask11.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 8); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask11.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 30); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask11.4 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(4, 30); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask11.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 173); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask11.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 35); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task4Subtask3 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task4Subtask3" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask3.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 152); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask3.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 72); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask3.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 143); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task4Subtask7 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task4Subtask7" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask7.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 50); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask7.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 143); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask7.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 45); // 0
  TerminateTask();

}