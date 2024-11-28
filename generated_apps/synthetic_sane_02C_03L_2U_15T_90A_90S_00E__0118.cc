#include "autosar/os.h"
#include "test/test.h"
#include "machine.h"

//#include "fail/trace.h"

void ara_timing_info(int, int);



DeclareSpinlock(LOCK0);
DeclareSpinlock(LOCK1);
DeclareSpinlock(LOCK2);




DeclareTask(CPU0Task1Subtask0);
DeclareTask(CPU0Task1Subtask4);
DeclareTask(CPU0Task1Subtask6);
DeclareTask(CPU1Task0Subtask2);
DeclareTask(CPU1Task0Subtask8);
DeclareTask(CPU1Task2Subtask12);
DeclareTask(CPU1Task2Subtask14);
DeclareTask(CPU1Task3Subtask3);
DeclareTask(CPU1Task3Subtask11);
DeclareTask(CPU1Task4Subtask1);
DeclareTask(CPU1Task4Subtask5);
DeclareTask(CPU1Task4Subtask9);
DeclareTask(CPU1Task5Subtask7);
DeclareTask(CPU1Task5Subtask10);
DeclareTask(CPU1Task5Subtask13);


TEST_MAKE_OS_MAIN( StartOS(0) )

// Prototypes

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task1Subtask0 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task1Subtask4 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task1Subtask6 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task0Subtask2 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task0Subtask8 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task2Subtask12 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task2Subtask14 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task3Subtask11 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task3Subtask3 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task4Subtask1 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task4Subtask5 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task4Subtask9 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task5Subtask10 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task5Subtask13 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task5Subtask7 (void);



void AUTOSAR_TASK_FUNC_CPU0Task1Subtask0 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task1Subtask0" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask0.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 95); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask0.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 107); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask0.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 144); // 0
  GetSpinlock(LOCK2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask0.6 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(8, 16); // 1
  ReleaseSpinlock(LOCK2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask0.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 7); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask0.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 133); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask0.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 36); // 0
  ActivateTask(CPU0Task1Subtask4);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask0.7 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 103); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task1Subtask4 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task1Subtask4" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask4.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 125); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask4.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 21); // 0
  GetSpinlock(LOCK1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask4.3 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(6, 12); // 1
  ReleaseSpinlock(LOCK1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask4.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 40); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask4.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 190); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task1Subtask6 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task1Subtask6" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask6.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 174); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask6.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 145); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask6.3 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(9, 17); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask6.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 48); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask6.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 91); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task0Subtask2 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task0Subtask2" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask2.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 126); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask2.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 181); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask2.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 9); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task0Subtask8 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task0Subtask8" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask8.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 95); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask8.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 135); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask8.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 17); // 0
  ActivateTask(CPU1Task0Subtask2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask8.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 110); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task2Subtask12 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task2Subtask12" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask12.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 130); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask12.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 94); // 0
  ActivateTask(CPU1Task2Subtask14);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask12.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 46); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask12.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 34); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task2Subtask14 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task2Subtask14" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask14.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 122); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask14.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 46); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask14.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 87); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task3Subtask11 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task3Subtask11" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask11.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 197); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask11.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 136); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask11.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 164); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask11.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 91); // 0
  GetSpinlock(LOCK2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask11.4 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(1, 27); // 1
  ReleaseSpinlock(LOCK2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask11.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 104); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task3Subtask3 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task3Subtask3" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask3.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 149); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask3.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 113); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask3.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 45); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task4Subtask1 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task4Subtask1" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask1.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 77); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask1.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 135); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask1.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 180); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task4Subtask5 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task4Subtask5" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask5.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 14); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask5.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 33); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask5.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 29); // 0
  ActivateTask(CPU1Task4Subtask9);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask5.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 100); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task4Subtask9 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task4Subtask9" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask9.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 36); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask9.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 65); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask9.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 127); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task5Subtask10 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task5Subtask10" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask10.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 69); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask10.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 110); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask10.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 191); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task5Subtask13 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task5Subtask13" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask13.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 20); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask13.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 57); // 0
  GetSpinlock(LOCK1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask13.5 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(1, 9); // 1
  ReleaseSpinlock(LOCK1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask13.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 109); // 0
  ActivateTask(CPU1Task5Subtask7);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask13.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 93); // 0
  ActivateTask(CPU1Task5Subtask10);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask13.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 59); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask13.6 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 140); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task5Subtask7 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task5Subtask7" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask7.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 161); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask7.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 76); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask7.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 106); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask7.3 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(8, 13); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask7.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 106); // 0
  TerminateTask();

}