#include "autosar/os.h"
#include "test/test.h"
#include "machine.h"

//#include "fail/trace.h"

void ara_timing_info(int, int);



DeclareSpinlock(LOCK0);
DeclareSpinlock(LOCK1);
DeclareSpinlock(LOCK2);




DeclareTask(CPU0Task2Subtask7);
DeclareTask(CPU0Task2Subtask8);
DeclareTask(CPU0Task4Subtask1);
DeclareTask(CPU0Task4Subtask11);
DeclareTask(CPU1Task0Subtask4);
DeclareTask(CPU1Task0Subtask12);
DeclareTask(CPU1Task1Subtask3);
DeclareTask(CPU1Task1Subtask5);
DeclareTask(CPU1Task1Subtask10);
DeclareTask(CPU1Task1Subtask13);
DeclareTask(CPU1Task3Subtask6);
DeclareTask(CPU1Task3Subtask14);
DeclareTask(CPU1Task5Subtask0);
DeclareTask(CPU1Task5Subtask2);
DeclareTask(CPU1Task5Subtask9);


TEST_MAKE_OS_MAIN( StartOS(0) )

// Prototypes

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task2Subtask7 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task2Subtask8 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task4Subtask1 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task4Subtask11 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task0Subtask12 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task0Subtask4 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task1Subtask10 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task1Subtask13 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task1Subtask3 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task1Subtask5 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task3Subtask14 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task3Subtask6 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task5Subtask0 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task5Subtask2 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task5Subtask9 (void);



void AUTOSAR_TASK_FUNC_CPU0Task2Subtask7 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task2Subtask7" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask7.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 77); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask7.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 91); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask7.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 158); // 0
  GetSpinlock(LOCK1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask7.4 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(9, 21); // 1
  ReleaseSpinlock(LOCK1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask7.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 13); // 0
  GetSpinlock(LOCK2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask7.5 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(10, 11); // 1
  ReleaseSpinlock(LOCK2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask7.6 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 60); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task2Subtask8 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task2Subtask8" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask8.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 55); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask8.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 36); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask8.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 153); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task4Subtask1 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task4Subtask1" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask1.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 178); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask1.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 172); // 0
  ActivateTask(CPU1Task5Subtask0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask1.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 134); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask1.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 101); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask1.4 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(6, 27); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask1.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 29); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task4Subtask11 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task4Subtask11" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask11.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 153); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask11.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 159); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask11.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 108); // 0
  ActivateTask(CPU1Task1Subtask5);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask11.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 131); // 0
  ActivateTask(CPU0Task4Subtask1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask11.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 108); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task0Subtask12 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task0Subtask12" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask12.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 126); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask12.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 97); // 0
  ActivateTask(CPU1Task0Subtask4);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask12.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 175); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask12.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 124); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task0Subtask4 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task0Subtask4" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask4.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 170); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask4.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 16); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask4.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 107); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task1Subtask10 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task1Subtask10" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask10.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 184); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask10.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 167); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask10.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 169); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task1Subtask13 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task1Subtask13" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask13.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 83); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask13.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 51); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask13.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 127); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task1Subtask3 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task1Subtask3" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask3.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 142); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask3.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 195); // 0
  ActivateTask(CPU1Task1Subtask13);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask3.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 34); // 0
  GetSpinlock(LOCK1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask3.4 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(4, 17); // 1
  ReleaseSpinlock(LOCK1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask3.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 134); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask3.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 62); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task1Subtask5 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task1Subtask5" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask5.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 59); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask5.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 190); // 0
  ActivateTask(CPU1Task1Subtask10);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask5.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 81); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask5.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 104); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task3Subtask14 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task3Subtask14" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask14.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 17); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask14.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 172); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask14.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 10); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task3Subtask6 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task3Subtask6" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask6.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 81); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask6.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 52); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask6.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 34); // 0
  ActivateTask(CPU1Task3Subtask14);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask6.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 32); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task5Subtask0 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task5Subtask0" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask0.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 42); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask0.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 43); // 0
  ActivateTask(CPU1Task5Subtask9);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask0.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 147); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask0.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 170); // 0
  ActivateTask(CPU1Task5Subtask2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask0.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 92); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task5Subtask2 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task5Subtask2" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask2.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 91); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask2.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 117); // 0
  GetSpinlock(LOCK2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask2.3 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(6, 20); // 1
  ReleaseSpinlock(LOCK2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask2.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 143); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask2.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 191); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task5Subtask9 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task5Subtask9" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask9.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 140); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask9.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 43); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask9.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 23); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask9.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 122); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask9.4 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(4, 8); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask9.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 89); // 0
  TerminateTask();

}
