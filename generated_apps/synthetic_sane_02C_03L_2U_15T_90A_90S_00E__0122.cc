#include "autosar/os.h"
#include "test/test.h"
#include "machine.h"

//#include "fail/trace.h"

void ara_timing_info(int, int);



DeclareSpinlock(LOCK0);
DeclareSpinlock(LOCK1);
DeclareSpinlock(LOCK2);




DeclareTask(CPU0Task3Subtask0);
DeclareTask(CPU0Task3Subtask8);
DeclareTask(CPU0Task3Subtask9);
DeclareTask(CPU0Task3Subtask11);
DeclareTask(CPU0Task4Subtask1);
DeclareTask(CPU0Task5Subtask3);
DeclareTask(CPU0Task5Subtask7);
DeclareTask(CPU0Task5Subtask13);
DeclareTask(CPU0Task5Subtask14);
DeclareTask(CPU1Task0Subtask2);
DeclareTask(CPU1Task1Subtask4);
DeclareTask(CPU1Task1Subtask6);
DeclareTask(CPU1Task2Subtask5);
DeclareTask(CPU1Task2Subtask10);
DeclareTask(CPU1Task2Subtask12);


TEST_MAKE_OS_MAIN( StartOS(0) )

// Prototypes

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task3Subtask0 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task3Subtask11 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task3Subtask8 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task3Subtask9 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task4Subtask1 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task5Subtask13 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task5Subtask14 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task5Subtask3 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task5Subtask7 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task0Subtask2 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task1Subtask4 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task1Subtask6 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task2Subtask10 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task2Subtask12 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task2Subtask5 (void);



void AUTOSAR_TASK_FUNC_CPU0Task3Subtask0 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task3Subtask0" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask0.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 59); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask0.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 99); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask0.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 196); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task3Subtask11 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task3Subtask11" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask11.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 27); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask11.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 169); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask11.5 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(5, 20); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask11.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 42); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask11.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 47); // 0
  ActivateTask(CPU0Task3Subtask0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask11.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 84); // 0
  ActivateTask(CPU0Task3Subtask9);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask11.6 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 83); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task3Subtask8 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task3Subtask8" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask8.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 141); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask8.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 45); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask8.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 102); // 0
  GetSpinlock(LOCK1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask8.3 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(3, 6); // 1
  ReleaseSpinlock(LOCK1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask8.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 194); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task3Subtask9 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task3Subtask9" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask9.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 136); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask9.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 164); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask9.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 29); // 0
  ActivateTask(CPU0Task3Subtask8);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask9.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 138); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task4Subtask1 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task4Subtask1" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask1.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 36); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask1.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 129); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask1.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 66); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task5Subtask13 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task5Subtask13" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask13.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 148); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask13.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 132); // 0
  ActivateTask(CPU0Task5Subtask3);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask13.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 49); // 0
  ActivateTask(CPU0Task5Subtask7);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask13.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 117); // 0
  GetSpinlock(LOCK2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask13.5 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(5, 12); // 1
  ReleaseSpinlock(LOCK2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask13.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 184); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask13.6 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 147); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task5Subtask14 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task5Subtask14" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask14.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 187); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask14.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 55); // 0
  ActivateTask(CPU0Task5Subtask13);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask14.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 13); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask14.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 37); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task5Subtask3 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task5Subtask3" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask3.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 100); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask3.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 108); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask3.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 9); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task5Subtask7 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task5Subtask7" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask7.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 14); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask7.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 99); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask7.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 120); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task0Subtask2 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task0Subtask2" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask2.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 98); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask2.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 59); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask2.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 190); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task1Subtask4 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task1Subtask4" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask4.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 169); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask4.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 102); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask4.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 130); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task1Subtask6 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task1Subtask6" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask6.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 158); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask6.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 88); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask6.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 57); // 0
  ActivateTask(CPU1Task1Subtask4);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask6.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 40); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask6.4 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(6, 25); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask6.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 85); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task2Subtask10 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task2Subtask10" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask10.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 107); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask10.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 107); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask10.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 14); // 0
  GetSpinlock(LOCK1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask10.4 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(7, 27); // 1
  ReleaseSpinlock(LOCK1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask10.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 83); // 0
  ActivateTask(CPU0Task4Subtask1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask10.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 101); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task2Subtask12 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task2Subtask12" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask12.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 170); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask12.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 174); // 0
  GetSpinlock(LOCK2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask12.3 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(5, 9); // 1
  ReleaseSpinlock(LOCK2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask12.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 68); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask12.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 185); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task2Subtask5 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task2Subtask5" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask5.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 30); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask5.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 60); // 0
  ActivateTask(CPU1Task2Subtask12);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask5.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 171); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask5.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 22); // 0
  ActivateTask(CPU1Task2Subtask10);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask5.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 112); // 0
  TerminateTask();

}
